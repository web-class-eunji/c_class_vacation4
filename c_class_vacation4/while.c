#include <stdio.h>
int main(void)
{
	/*
	자료형 변수명 = 초기값;
	int a = 1

	while(A가 10보다 작니){
		반복시키고자 하는 코드 작성
		A++;
	}
	*/

	int hi = 1;
	while (hi <= 10) {
		printf("안녕하세요 %d \n", hi);
		hi++;
	}

	//구구단 6단에 해당하는 숫자들만 뽑기
	// 6 12 18 24 30 36 42 48 54 60
	
	int six = 1;
	while (six <= 60) {
		six++;
		if (six % 6 == 0) {
			printf("%d \n", six);
		}
	}

	int num;
	printf("숫자를 입력하세요(0을 입력하면 종료):");
	scanf_s("%d", &num);

	while (num != 0) {
		printf("입력한 숫자는 %d입니다. 다시 입력 ( 0입력시 종료 ) :",num);
		scanf_s("%d", &num);
	}
	return 0;
}