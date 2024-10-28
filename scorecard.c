#include <stdio.h>
#include <stdlib.h>

#define NUM_CANDIDATES 6
#define NUM_CATEGORIES 5 // 음악 소양, 댄스, 보컬, 비주얼, 전달력
#define SCORING_SHEET_SIZE (NUM_CANDIDATES * 7) // 7 요소: ID, 5가지 점수, 총점

int main() {
    const char* categories[] = { "음악 소양", "댄스", "보컬", "비주얼", "전달력" };

    // 후보자 이름과 고유 ID 초기화
    const char* candidates[] = { "박지연", "Ethan Smith", "Helena Silva", "Liam Wilson", "Sophie Kim", "Ming Zhao" };
    int candidate_ids[] = { 123456, 234567, 345678, 456789, 567890, 678901 };

    // 점수 기록 배열 및 변수 초기화 (1차원 배열)
    int scoring_sheet[SCORING_SHEET_SIZE] = { 0 }; // 7 요소: ID, 5가지 점수, 총점

    // 후보자 ID를 배열에 미리 설정
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        scoring_sheet[i * 7] = candidate_ids[i]; // 각 후보자의 ID를 첫 번째 요소에 저장
    }

    // 심사자 정보 입력
    char judge_name[50];
    char specialty[20];
    printf("####################################\n");
    printf("#       오디션 심사 결과 입력       #\n");
    printf("####################################\n");
    printf("> 심사자 이름: ");
    scanf_s("%49s", judge_name, (unsigned)_countof(judge_name)); // 이름 입력
    printf("> 전문 분야: ");
    scanf_s("%19s", specialty, (unsigned)_countof(specialty)); // 전문 분야 입력

    // 전문 분야에 따라 해당 카테고리의 점수 입력
    int category_index = -1;
    for (int i = 0; i < NUM_CATEGORIES; i++) {
        int match = 1;
        for (int j = 0; specialty[j] != '\0' && categories[i][j] != '\0'; j++) {
            if (specialty[j] != categories[i][j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            category_index = i;
            break;
        }
    }

    if (category_index == -1) {
        printf("잘못된 전문 분야입니다.\n");
        return 1;
    }

    // 각 후보자에 대해 점수 입력
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        int score;
        printf("++++++++++++++++++++++++++++++++++++\n");
        printf("후보자: %s\n", candidates[i]);
        printf("%s: ", categories[category_index]); // 수정된 부분

        while (1) { // 잘못된 값 재입력 요구
            scanf_s("%d", &score);
            if (score >= 10 && score <= 100) break;
            printf("잘못된 값입니다. 다시 입력하세요 (10-100): ");
        }
        scoring_sheet[i * 7 + category_index + 1] = score; // 점수 저장
    }

    // 총점 계산
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        int total = 0;
        for (int j = 1; j <= NUM_CATEGORIES; j++) {
            total += scoring_sheet[i * 7 + j];
        }
        scoring_sheet[i * 7 + 6] = total; // 총점 저장
    }

    // 입력 완료 및 검토 화면
    printf("입력을 모두 완료했습니다.\n");
    printf("입력하신 내용을 검토하세요!\n");
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        printf("%s: %d\n", candidates[i], scoring_sheet[i * 7 + 6]);
    }

    // 최종 제출 확인
    char submit;
    printf("제출하시겠습니까? (Y/N): ");
    getchar(); // 남아 있는 개행 문자 제거
    scanf_s(" %c", &submit); // 개행 문자 제거 후 단일 문자 입력

    if (submit == 'Y' || submit == 'y') {
        printf("***최종 제출을 완료했습니다.***\n");
    }
    else {
        printf("처음으로 돌아갑니다...\n");
        return main(); // 다시 시작
    }

    // 상위 4명의 후보자 선발
    printf("=======================================\n");
    printf("후보 선발 결과 집계 중 ...\n");
    printf("=======================================\n");

    // 총점 기준 정렬 및 상위 4명 출력
    for (int i = 0; i < NUM_CANDIDATES - 1; i++) {
        for (int j = i + 1; j < NUM_CANDIDATES; j++) {
            if (scoring_sheet[i * 7 + 6] < scoring_sheet[j * 7 + 6]) {
                for (int k = 0; k < 7; k++) {
                    int temp = scoring_sheet[i * 7 + k];
                    scoring_sheet[i * 7 + k] = scoring_sheet[j * 7 + k];
                    scoring_sheet[j * 7 + k] = temp;
                }
            }
        }
    }

    printf("#######################################\n");
    printf("# 밀리웨이즈의 멤버가 된 걸 축하합니다! #\n");
    printf("#######################################\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < NUM_CANDIDATES; j++) {
            if (scoring_sheet[i * 7] == candidate_ids[j]) {
                printf("%d. %s\n", i + 1, candidates[j]);
                break;
            }
        }
    }

    return 0;
}
