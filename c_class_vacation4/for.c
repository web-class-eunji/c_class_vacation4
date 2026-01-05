#include <stdio.h>
int main(void)
{
	/*
	for(초기값;조건식;증감식){
		조건이 참이라면 실행시킬 코드
	}
	*/

	int i;
	for (i = 10; i >= 1; i--) {
		printf("반복 %d \n", i);
	}

	// 1의 제곱 : 1
	// 2의 제곱 : 2
	// 3의 제곱 : 3
	// 4의 제곱 : 4
	//.... 10의 제곱 : 10

	int square;
	for (square = 1; square <= 10; square++) {
		printf("%d의 제곱 : %d\n", square, square * square);
	}

	
	return 0;
}