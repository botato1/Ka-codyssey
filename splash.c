#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearScreen() 
{
    // 화면 지우기 (Windows의 경우 CLS 명령어 사용)
    system("cls || clear");
}

void getInput(char* name, char* date) 
{
    printf("[현재 날짜를 \"yyyy-mm-dd\" 형식으로 입력하세요]: ");
    scanf("%10s", date);  // 최대 10자리 입력
    printf("[당신의 이름을 입력하세요]: ");
    scanf("%49s", name);  // 최대 49자리 입력
    printf("**입력이 정상적으로 처리되었습니다.**\n");
}

void displaySplashScreen(const char* name, const char* date) {
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                         [마그라테아 ver 0.1]                               \n");
    printf("           풀 한 포기 없는 황무지에서 반짝이는 행성을 만들내는 곳 마그라테아,         \n");
    printf("         사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빗는 곳,    \n");
    printf("           마그라테아에 오신걸 환영합니다.\"   \n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[사용자]: %s                                   [실행 시간]: %s\n", name, date);
    printf("================================================================================\n");
}

void printTriangles() 
{
    int i, j;
    int height = 3;  // 삼각형 높이

    // 왼쪽 정직삼각형 출력
    for (i = 0; i < height; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");  // 정직삼각형 왼쪽
        }
        printf("      ");  // 가운데 공백
        // 오른쪽 역직삼각형 출력
        for (j = height - 1; j > i; j--) {
            printf("*");  // 역직삼각형 오른쪽
        }
        printf("\n");
    }
}

int main() 
{
    char name[50], date[11];

  
    getInput(name, date);

    // 3초 대기
    for (volatile long i = 0; i < 300000000; i++);  

   
    clearScreen();

   
    displaySplashScreen(name, date);

    
    printTriangles();

    return 0;
}
