#include <stdio.h>
int main(void)
{
	// << 왼쪽시프트연산자
	// >> 오른쪽 시프트 연산자

	// 00001010 = 10
	//     8421

	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2; // 10*2의2 = 40
	int shift_right = num2 >> 2; // 20 / 2^2 = 5
	printf("%d << 2 : %d\n", num1, shift_left);
	printf("%d >> 2 : %d\n", num2, shift_right);


	return 0;
}