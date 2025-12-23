#include <stdio.h>
int main(void)
{
	int num1 = 20;
	int num2 = 48;
	printf("나이 : %d \n번호 : %d\n", num1,30);

	/*
	2와 3 변수를 만들어 값을 저장한 후
	변수를 곱해서 6으로 만들어 새로운 변수로 출력
	*/

	int num02, num03, result;
	num02 = 2;
	num03 = 3;
	result = num02 * num03;
	printf("%d X %d = %d", num02, num03, result);
	return 0;
}