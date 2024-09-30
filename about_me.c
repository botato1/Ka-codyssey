#include <stdio.h>

int main()
{
    
    printf("[마그라테아] @@ 프로젝트 멤버 소개 @@\n");
    printf("=====================================================================\n");

    
    printf("이름\t| 아서 덴트\t성별\t| 남\n");
    printf("전공\t| 기계 공학\t경력\t| ");
    int experience_arthur = 15; 
    for (int i = 31; i >= 0; i--)
    {
        putchar((experience_arthur & (1 << i)) ? '1' : '0');  //4바이트 > 2진수
        if (i % 8 == 0 && i != 0)
        { 
            putchar(' ');
        }
    }
    printf("(2)년\n");

    printf("역할\t| 아키텍트\t기술\t| C/C++, 자바, 스프링, 파이썬, 머신러닝/딥러닝\n");
    printf("---------------------------------------------------------------------\n");
    printf("소개\t| 실리콘 밸리에서 SNS, 핀테크, HR, 미디어 등의 다양한 프로젝트에 참여하며 경력을 쌓았습니다.\n");
    printf("      성공과 실패를 겪으며 얻게 된 깨달음을 여러분과 나누고 싶습니다.\n");
    printf("=====================================================================\n");
    /*
    
    ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
    */
    
    printf("이름\t| 김영진\t\t성별\t| 남\n");
    printf("전공\t| 컴퓨터 공학\t경력\t| ");
    int experience_youngjin = 2; 
    for (int i = 31; i >= 0; i--) 
    {
        putchar((experience_youngjin & (1 << i)) ? '1' : '0');
        if (i % 8 == 0 && i != 0) 
        { 
            putchar(' ');
        }
    }
    printf("(2)년\n");

    printf("역할\t| 개발자\t\t기술\t| C#, 파이썬, 자바스크립트, 리액트, 코틀린\n");
    printf("---------------------------------------------------------------------\n");
    printf("소개\t| 최근에 MAUI 프레임워크로 진행한 개인 자산 관리 프로젝트에서 소프트웨어 개발에 엄청난 매력을 느꼈습니다.\n");
    printf("      나의 코드로 현실의 문제를 해결한다니! 마그라테아를 성공적으로 개발하는 것은 저의 버킷 리스트 중 하나가 되었습니다.\n");
    printf("=====================================================================\n");
    /*
    
    ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
    */
    
    printf("이름\t| 임원철\t\t성별\t| 남\n");
    printf("전공\t| 전자 공학\t경력\t| ");
    int experience_wonchul = 1; 
    for (int i = 31; i >= 0; i--)
    {
        putchar((experience_wonchul & (1 << i)) ? '1' : '0');
        if (i % 8 == 0 && i != 0) 
        {
            putchar(' ');
        }
    }
    printf("(2)년\n");

    printf("역할\t| DBA\t\t\t기술\t| 자바, PHP, Mongo DB, MS SQL, MySQL\n");
    printf("---------------------------------------------------------------------\n");
    printf("소개\t| 애플리케이션은 결국 데이터를 다루는 방식을 구현한 것이라고 생각합니다.\n");
    printf("      마그라테아에서 다룰 데이터를 생각하면 벌써부터 흥분됩니다.\n");
    printf("=====================================================================\n");

    /*
    
    ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
    */
    printf("이름\t| 유고은\t\t성별\t| 여\n");
    printf("전공\t| 경영 정보\t경력\t| ");
    int experience_goeun = 1; 
    for (int i = 31; i >= 0; i--) 
    {
        putchar((experience_goeun & (1 << i)) ? '1' : '0');
        if (i % 8 == 0 && i != 0) 
        { 
            putchar(' ');
        }
    }
    printf("(2)년\n");

    printf("역할\t| 클라우드\t\t기술\t| 자바, PowerShell, Azure, AWS, GCP\n");
    printf("---------------------------------------------------------------------\n");
    printf("소개\t| 김영진님과 함께 프로젝트를 진행했으며 클라우드 아키텍처 구현을 담당했습니다.\n");
    printf("      마그라테아의 클라우드 아키텍처를 내 손으로 꼭 완성시키고 싶습니다.\n");
    printf("=====================================================================\n");

    /*
    ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
    */
    printf("이름\t| 서혜경\t\t성별\t| 여\n");
    printf("전공\t| 정치외교\t경력\t| ");
    int experience_hyekyung = 0; 
    for (int i = 31; i >= 0; i--) 
    {
        putchar((experience_hyekyung & (1 << i)) ? '1' : '0');
        if (i % 8 == 0 && i != 0) 
        { 
            putchar(' ');
        }
    }
    printf("(2)년\n");

    printf("역할\t| 개발자\t\t기술\t| 파이썬, 스위프트, 코틀린, Node.js, 피그마\n");
    printf("---------------------------------------------------------------------\n");
    printf("소개\t| 학부과정에서 과제로 프로젝트는 많이 진행해봤지만, 기업의 사활이 걸린 실전 프로젝트는 제 인생의 첫 경험입니다.\n");
    printf("      마그라테아 프로젝트에 대해 들었을 때, 제 속에서 이 프로젝트는 인생을 걸고 싶다는 생각을 했습니다.\n");
    printf("=====================================================================\n");

    return 0;
}