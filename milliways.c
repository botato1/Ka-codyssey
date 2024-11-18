#include <stdio.h>
#include <stdlib.h>

#define MAX_CANDIDATES 6
#define MAX_MEMBERS 4
#define MAX_LENGTH 100

// 후보자 데이터 정의 (기초 정보 + 합격 여부 포함)
char candidate_arr[MAX_CANDIDATES][11][MAX_LENGTH] = 
{
    {"1", "박지연", "20060415", "여", "jiyeon@outlook.com", "한국", "18.5", "댄스", "작곡", "0", "ENFJ"},
    {"2", "Ethan Smith", "20050822", "남", "ethan@outlook.com", "미국", "21.2", "보컬", "작사", "2", "ISTP"},
    {"3", "Suphanan Wong", "20040105", "여", "suphanan@outlook.com", "태국", "19.0", "댄스", "작사", "4", "INFJ"},
    {"4", "Helena Silva", "20070310", "여", "helena@outlook.com", "브라질", "20.8", "보컬", "작곡 및 작사", "1", "ENFP"},
    {"5", "Karolina Nowak", "20060918", "여", "karolina@outlook.com", "폴란드", "17.9", "댄스", "작곡", "2", "ISFP"},
    {"6", "Liam Wilson", "20061108", "남", "liam@outlook.com", "호주", "20.1", "댄스", "작곡 및 작사", "3", "ENTJ"}
};

// 합격자 데이터를 위한 배열
char milliways_arr[MAX_MEMBERS][17][MAX_LENGTH] = { 0 }; // 17개의 항목을 저장

// 키와 BMI를 기반으로 몸무게 계산
float calculate_weight(float height, float bmi) 
{
    return bmi * height * height;
}

int main() {
    int i, j, member_count = 0;
    float height, bmi, weight;
    char nickname[MAX_LENGTH], education[MAX_LENGTH], blood_type[MAX_LENGTH], allergies[MAX_LENGTH], hobbies[MAX_LENGTH], sns[MAX_LENGTH];

    // 합격자 정보 복사 및 인터뷰 데이터를 수집
    for (i = 0; i < MAX_CANDIDATES; i++) 
    {
        // 합격자 여부 확인
        if (candidate_arr[i][9][0] != '0') 
        { // 합격여부가 0이 아니면 합격
            // 기존 정보 복사
            for (j = 0; j < 11; j++) 
            {
                snprintf(milliways_arr[member_count][j], MAX_LENGTH, "%s", candidate_arr[i][j]);
            }

            // 추가 정보 인터뷰
            printf("합격한 후보자 %s (%s)의 추가 정보를 입력합니다.\n", candidate_arr[i][1], candidate_arr[i][0]);

            // 인터뷰 데이터를 입력받음
            printf("닉네임: ");
            fgets(nickname, MAX_LENGTH, stdin);
            nickname[strcspn(nickname, "\n")] = 0;  // 개행 문자 제거

            printf("학력: ");
            fgets(education, MAX_LENGTH, stdin);
            education[strcspn(education, "\n")] = 0;

            printf("혈액형: ");
            fgets(blood_type, MAX_LENGTH, stdin);
            blood_type[strcspn(blood_type, "\n")] = 0;

            printf("알레르기: ");
            fgets(allergies, MAX_LENGTH, stdin);
            allergies[strcspn(allergies, "\n")] = 0;

            printf("취미: ");
            fgets(hobbies, MAX_LENGTH, stdin);
            hobbies[strcspn(hobbies, "\n")] = 0;

            printf("SNS: ");
            fgets(sns, MAX_LENGTH, stdin);
            sns[strcspn(sns, "\n")] = 0;

            // 키와 BMI 값을 사용하여 몸무게 계산
            printf("키 (cm): ");
            scanf_s("%f", &height);
            height /= 100; // cm에서 m로 변환

            printf("BMI: ");
            scanf_s("%f", &bmi);

            // 몸무게 계산
            weight = calculate_weight(height, bmi);

            // 추가 데이터 기록
            snprintf(milliways_arr[member_count][10], MAX_LENGTH, "%s", nickname);
            snprintf(milliways_arr[member_count][11], MAX_LENGTH, "%s", education);
            snprintf(milliways_arr[member_count][12], MAX_LENGTH, "%s", blood_type);
            snprintf(milliways_arr[member_count][13], MAX_LENGTH, "%s", allergies);
            snprintf(milliways_arr[member_count][14], MAX_LENGTH, "%s", hobbies);
            snprintf(milliways_arr[member_count][15], MAX_LENGTH, "%s", sns);
            snprintf(milliways_arr[member_count][16], MAX_LENGTH, "%.2f", weight);

            // 합격자 카운트
            member_count++;
        }
    }

    // 최종 출력
    printf("####################################\n");
    printf("     밀리웨이즈 공식 멤버 리스트 \n");
    printf("####################################\n");
    printf("============================================================================================================================\n");
    printf("성명 | 생일       | 성별 | 이메일               | 국적  | BMI  | 주 스킬 | 보조 스킬     | TOPIK | MBTI   | 닉네임     | 학력  | 혈액형 | 알레르기 | 취미        | SNS          | 몸무게\n");
    printf("============================================================================================================================\n");

    for (i = 0; i < member_count; i++) 
    {
        printf("%-6s | %-10s | %-4s | %-20s | %-5s | %-4s | %-6s | %-12s | %-5s | %-6s | %-10s | %-5s | %-6s | %-8s | %-12s | %-12s | %-6s\n",
            milliways_arr[i][1], milliways_arr[i][2], milliways_arr[i][3], milliways_arr[i][4], milliways_arr[i][5],
            milliways_arr[i][6], milliways_arr[i][7], milliways_arr[i][8], milliways_arr[i][9], milliways_arr[i][10],
            milliways_arr[i][11], milliways_arr[i][12], milliways_arr[i][13], milliways_arr[i][14], milliways_arr[i][15],
            milliways_arr[i][16]);
    }

    return 0;
}
