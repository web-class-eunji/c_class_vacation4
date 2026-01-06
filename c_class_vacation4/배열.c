#include <stdio.h>
int main(void)
{
	//int a = 10;
	// 배열의 이름 (변수랑 동일 )
	// 배열을 담을 자료형
	// 배열의 길이 - 배열에 포함될 데이터의 개수

	int a[5] = {10,20,30,40,50};
	int b[] = { 1,2,3 };
	

	printf("%d \n", a[3]);
	a[1] = 100;
	printf("%d \n", a[1]);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", a[i]);
	}

	// 숫자 5개를 저장할 배열 생성
	// for문을 통해 배열에 각 칸에 입력받은 숫자를 넣어줄것
	// 입력한 숫자 출력
	int c[5];
	printf("좋아하는 숫자 5개 입력 : \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &c[i]);
	}

	//printf("\n너가 입력한 숫자\n");

	//for (int i = 0; i < 5; i++) {
	//	printf("%d \n", c[i]);
	//}

	int max;
	max = c[0];
	for (int i = 1; i < 5; i++) {
		if (max < c[i]) {
			max = c[i];
		}
	}

	printf("최대값 : %d \n", max);
	return 0;
}