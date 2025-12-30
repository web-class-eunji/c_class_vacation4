#include <stdio.h>
int main(void)
{
	/*
	변수
	switch(변수){
		case 검사할값1 : 검사할 값과 일치한다면 출력할 코드;
			break;
		case 검사할값2 : 검사할 값과 일치한다면 출력할 코드;
			break;
		case 검사할값3 : 검사할 값과 일치한다면 출력할 코드;
			break;
		case 검사할값4 : 검사할 값과 일치한다면 출력할 코드;
			break;
		case 검사할값5 : 검사할 값과 일치한다면 출력할 코드;
			break;
		case 검사할값6 : 검사할 값과 일치한다면 출력할 코드;
			break;

		default : 위 case에 아무것도 걸리지 않았다면 출력할 코드;
	}
	*/

	int day;
	printf("요일을 선택하세요(1[월요일] ~ 7[일요일] 중 택 1) : ");
	scanf_s("%d", &day);

	switch (day) {
		case 1: printf("월요일입니다.");
			break;
		case 2: printf("화요일입니다.");
			break;
		case 3: printf("수요일입니다.");
			break;
		case 4: printf("목요일입니다.");
			break;
		case 5: printf("금요일입니다.");
			break;
		case 6: printf("토요일입니다.");
			break;
		case 7: printf("일요일입니다.");
			break;

		default:  printf("유효하지 않은 입력입니다.");
	}

	return 0;
}