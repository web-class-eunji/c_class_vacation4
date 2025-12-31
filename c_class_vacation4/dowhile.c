#include <stdio.h>
int main(void)
{
	/*
	자료형 변수 = 초기화
	do{
		실행시킬 코드;
		증감식;
	}while(조건식)
	*/

	int doWhile = 1;
	while (doWhile >= 10) {
		printf("do while문 %d 번 실습중! \n", doWhile);
		doWhile++;
	}
	
	do {
		printf("do while문 %d 번 실습중! \n", doWhile);
		doWhile++;
	} while (doWhile >= 10);


	int userNum;

	do {
		printf("=========간단 메뉴=========== \n");
		printf("1. 모닝메시지\n");
		printf("2. 인사메시지\n");
		printf("3. 챕터 안내\n");
		printf("0. 프로그램 종료\n");
		printf("=============================\n");
		
		printf("메뉴를 선택하세요 : ");
		scanf_s("%d", &userNum);

		switch (userNum) {
			case 1 : 
				printf("잘 주무셨나용?\n");
				break;
			case 2:
				printf("안녕하세요~ 여러분들 새해 복 많이 받으세용\n");
				break;
			case 3:
				printf("두웨일 실습중입니다\n");
				break;
			case 0:
				printf("프로그램을 종료합니다.\n");
				break;
			default:
				printf("잘못된 입력입니다. 다시 시도하세요 \n");
		}
	} while (userNum != 0);
	


	return 0;
}