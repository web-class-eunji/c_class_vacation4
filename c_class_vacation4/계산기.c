#include <stdio.h>
int main(void)
{
	int menu, a, b;
	printf("[1]더하기 [2]빼기 [3]곱하기 [4]나누기\n번호선택 : ");
	scanf_s("%d", &menu);

	printf("두개의 정수 입력 ( 띄어쓰기로 구분 ) : ");
	scanf_s("%d %d", &a,&b);

	switch (menu) {
	case 1: printf("결과 : %d + %d = %d\n", a, b, a + b); break;
	case 2: printf("결과 : %d - %d = %d\n", a, b, a - b); break;
	case 3: printf("결과 : %d * %d = %d\n", a, b, a * b); break;
	case 4:
		if (b == 0) {
			printf("0으로 나눌 수 없습니다.");
		}
		else {
			printf("결과 : %d / %d = %d\n나머지 : %d", a, b, a / b, a % b);
		}
		break;

	default: printf("잘못된 번호를 입력하였습니다.");
	}
	return 0;
}