#include <stdio.h>
int main(void)
{
	/*
	1행 1열
	1행 2열

	2행 1열
	2행 2열

	3행 1열
	3행 2열
	*/

	int firstFor, secondFor;
	for (firstFor = 1; firstFor <= 3; firstFor++) {
		for (secondFor = 1; secondFor <= 2; secondFor++) {
			printf("%d행 %d열 \n", firstFor, secondFor);
		}
		printf("\n");
	}

	//2단 ~ 9단 구구단을 만들어주세요
	// 2단
	// 2 X 1 = 2
	//...
	// 2 X 10 = 20

	//3단

	int line, star;
	for (line = 5; line >= 1; line--) {
		for (star = 1; star <= line; star++) {
			printf("*");
		}
		printf("\n");
	}

	int i, j;
	for (i = 2; i <= 9; i++) {
		printf("%d단 \n", i);
		for (j = 1; j <= 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}


	return 0;
}