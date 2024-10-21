#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // 후보자들의 데이터를 저장할 배열
    char candidate01[11][100], candidate02[11][100], candidate03[11][100], candidate04[11][100], candidate05[11][100], candidate06[11][100];
    char* candidates[6] = { candidate01, candidate02, candidate03, candidate04, candidate05, candidate06 };

    // 후보자 정보 속성 배열
    char* member_info[11] = { "성명", "생년월일", "성별", "메일", "국적", "BMI", "주 스킬", "보조 스킬", "한국어 등급", "MBTI", "소개" };

    int i = 0, j = 0;

    // 후보자 6명의 데이터를 입력받는 반복문
    while (i < 6) 
    {
        printf("####################################\n");
        printf("     오디션 후보자 데이터 입력\n");
        printf("####################################\n");
        printf("후보자 %d의 정보를 입력합니다.\n", i + 1);
        for (j = 0; j < 11; j++) 
        {
            printf("%s: ", member_info[j]);
            fgets(candidates[i] + j * 100, 100, stdin); // 각각의 속성을 배열에 저장
        }
        i++;
    }

    // 후보자 6명의 데이터를 출력하는 반복문
    printf("####################################\n");
    printf("     오디션 후보자 데이터 조회 \n");
    printf("####################################\n");
    for (i = 0; i < 6; i++) 
    {
        printf("=============================================================================================\n");
        printf("%s | %s | %s | %s | %s | %s | %s | %s | %s | %s |\n",
            candidates[i], candidates[i] + 100, candidates[i] + 200, candidates[i] + 300, candidates[i] + 400,
            candidates[i] + 500, candidates[i] + 600, candidates[i] + 700, candidates[i] + 800, candidates[i] + 900);
        printf("---------------------------------------------------------------------------------------------\n");
        printf("%s\n", candidates[i] + 1000);  // 소개 출력
        printf("---------------------------------------------------------------------------------------------\n");
    }

    return 0;
}
