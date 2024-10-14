#include <stdio.h>
#include <stdlib.h>

// 후보자 정보를 저장할 배열
char candidate01[11][100], candidate02[11][100], candidate03[11][100], candidate04[11][100], candidate05[11][100], candidate06[11][100];
char* member_info[] = { "이름", "생년월일", "성별", "메일", "국적", "BMI", "주 스킬", "보조 스킬", "한국어 등급(TOPIK)", "MBTI", "소개" };

// 각 후보자의 데이터를 저장하는 배열 목록
char* candidates[6][11] = 
{
    {candidate01[0], candidate01[1], candidate01[2], candidate01[3], candidate01[4], candidate01[5], candidate01[6], candidate01[7], candidate01[8], candidate01[9], candidate01[10]},
    {candidate02[0], candidate02[1], candidate02[2], candidate02[3], candidate02[4], candidate02[5], candidate02[6], candidate02[7], candidate02[8], candidate02[9], candidate02[10]},
    {candidate03[0], candidate03[1], candidate03[2], candidate03[3], candidate03[4], candidate03[5], candidate03[6], candidate03[7], candidate03[8], candidate03[9], candidate03[10]},
    {candidate04[0], candidate04[1], candidate04[2], candidate04[3], candidate04[4], candidate04[5], candidate04[6], candidate04[7], candidate04[8], candidate04[9], candidate04[10]},
    {candidate05[0], candidate05[1], candidate05[2], candidate05[3], candidate05[4], candidate05[5], candidate05[6], candidate05[7], candidate05[8], candidate05[9], candidate05[10]},
    {candidate06[0], candidate06[1], candidate06[2], candidate06[3], candidate06[4], candidate06[5], candidate06[6], candidate06[7], candidate06[8], candidate06[9], candidate06[10]}
};

int main() 
{
    char groupName[50];
    int i, j = 0;

    // 오디션 그룹명 입력받기
    printf("####################################\n");
    printf("     오디션 후보자 데이터 입력\n");
    printf("####################################\n");
    printf("오디션 그룹명을 입력하세요: ");
    fgets(groupName, sizeof(groupName), stdin);
    groupName[strcspn(groupName, "\n")] = 0; // 개행 문자 제거

    // 후보자 6명의 데이터를 입력받기
    while (j < 6) 
    {
        printf("\n%d번째 후보자의 정보를 입력합니다.\n", j + 1);
        printf("---------------------------------\n");
        for (i = 0; i < 11; i++) 
        {
            printf("%s: ", member_info[i]);
            fgets(candidates[j][i], 100, stdin);
            candidates[j][i][strcspn(candidates[j][i], "\n")] = 0; // 개행 문자 제거
        }
        j++;
    }

    // 입력 완료 후 출력
    printf("####################################\n");
    printf("[%s] 오디션 후보자 데이터 조회\n", groupName);
    printf("####################################\n");
    printf("=============================================================================================\n");
    printf("성   명   | 생   일   | 성별 | 메   일            | 국적 | BMI \n");
    printf("=============================================================================================\n");

    // 후보자 정보 출력
    for (j = 0; j < 6; j++) 
    {
        printf("%-8s | %-10s | %-3s | %-20s | %-4s | %-4s\n",
            candidates[j][0], candidates[j][1], candidates[j][2], candidates[j][3], candidates[j][4], candidates[j][5]);
        printf("---------------------------------------------------------------------------------------------\n");
    }

    return 0;
}
