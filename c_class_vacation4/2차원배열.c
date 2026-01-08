#include <stdio.h>
int main(void)
{
	int a[3][4];
	a[0][0] = 10;
	printf("%d\n", a[0][0]);

	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = 10;
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	//2차원배열을 선언한 후 2중 for문을 사용해서 구구단 2단부터 9단까지 출력
	int gugudan[8][9];
	int i, j;
	for (i = 0; i < 8; i++) {
		printf("%d단 \n",i+2);
		for (j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 2) * (j + 1);
			printf("%d * %d = %d \n", i + 2, j + 1, gugudan[i][j]);
		}
		printf("\n");
	}


	return 0;
}