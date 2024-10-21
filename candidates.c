#include <stdio.h>
#include <stdlib.h>

#define MAX_CANDIDATES 6
#define MAX_LENGTH 100

int main() 
{
    // 후보자들의 데이터를 저장할 배열
    char candidates[MAX_CANDIDATES][11][MAX_LENGTH]; // 각 후보자의 속성 저장
    // 후보자 정보 속성 배열
    char* member_info[11] = { "성명", "생년월일", "성별", "메일", "국적", "BMI", "주 스킬", "보조 스킬", "한국어 등급", "MBTI", "소개" };

    int i = 0, j = 0;

    // 후보자 6명의 데이터를 입력받는 반복문
    while (i < MAX_CANDIDATES) 
    {
        printf("####################################\n");
        printf("     오디션 후보자 데이터 입력\n");
        printf("####################################\n");
        printf("후보자 %d의 정보를 입력합니다.\n", i + 1);
        for (j = 0; j < 11; j++) 
        {
            printf("%s: ", member_info[j]);
            fgets(candidates[i][j], MAX_LENGTH, stdin); // 각각의 속성을 배열에 저장
            // 개행 문자 제거
            candidates[i][j][strcspn(candidates[i][j], "\n")] = '\0'; 
        }
        i++;
    }

    // 후보자 6명의 데이터를 출력하는 반복문
    printf("####################################\n");
    printf("     오디션 후보자 데이터 조회 \n");
    printf("####################################\n");
    printf("=============================================================================================\n");
    printf("성   명 | 생   일 | 성별 | 메   일            | 국적 | BMI  | 주스킬 | 보조스킬 | TOPIK | MBTI |\n");
    printf("=============================================================================================\n");

    for (i = 0; i < MAX_CANDIDATES; i++) 
    {
        // 후보자 기본 정보 출력
        printf("%-6s | %-8s | %-2s  | %-18s | %-4s | %-4s | %-5s | %-7s | %-5s | %-4s |\n", 
            candidates[i][0], candidates[i][1], candidates[i][2], candidates[i][3], candidates[i][4],
            candidates[i][5], candidates[i][6], candidates[i][7], candidates[i][8], candidates[i][9]);

        // 구분선 출력
        printf("        -------------------------------------------------------------------------------------\n");
        // 소개 출력
        printf("%s\n", candidates[i][10]);  
        printf("---------------------------------------------------------------------------------------------\n");
    }

    return 0;
}
