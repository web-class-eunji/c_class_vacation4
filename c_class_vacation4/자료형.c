#include <stdio.h>
int main(void)
{
	// 문자 / 정수 / 실수
	// 문자 : char / 1바이트 / -128 ~ 127
	// 정수 : short / 2바이트 / -32000~ 32000
	// 정수 : int / 4바이트 / -21억~ 21억
	// 정수 : long / 4바이트 / -21억~ 21억
	// 정수 : long long / 8바이트 
	// 실수 : float / 4바이트 
	// 실수 : double / 8바이트
	// 실수 : long double / 8바이트 이상
	unsigned int max_number = 2200000000;
	printf("%u\n", max_number);

	//signed : 맨 왼쪽 비트는 부호비트로 적용됨
	//unsigned : 모든 비트는 숫자를 표현할 때 사용됨
	// unsigned 값의 범위 : 0부터 2의 n승 -1


	//자료형의 자동형변환
	double change_number = 10;
	printf("%.15f\n", change_number);

	//자동형변환2 ( 소수부의 손실 )
	int change_number2 = 5.1123;
	printf("%d\n", change_number2);

	//명시적 형변환
	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234);
	printf("%f\n", (double)22);
	printf("%f\n", (float)22);

	return 0;
}