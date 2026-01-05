#include <stdio.h>
int main(void)
{
	int n;
	printf("행개수입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) { // 행
		for (int j = 1; j <= n - i;j++) { // 왼쪽 공백
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1;k++) { // 출력
			printf("*");
		}
		printf("\n");
	}
	return 0;
}