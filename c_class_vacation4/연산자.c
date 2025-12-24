#include <stdio.h>
int main(void)
{
	// 산술연산자, 대입연산자, 비교연산자, 복합대입연산자, 증감연산자, 논리연산자, 삼항조건연산자
	// 산술연산자(이항연산자) : + / - / * / [/] / %[나머지]
	// 피연산자 : 연산되는 숫자들
	int number1 = 7, number2 = 3;
	printf("%d + %d = %d\n", number1, number2, number1 + number2);
	printf("%d - %d = %d\n", number1, number2, number1 - number2);
	printf("%d * %d = %d\n", number1, number2, number1 * number2);
	printf("%d / %d = %d\n", number1, number2, number1 / number2);
	printf("%d %% %d = %d\n", number1, number2, number1 % number2);
	// int + int : int
	// int + float : float
	// int + char : int
	// char + char : char
	// char + float : float

	int num1 = 1;
	float num2 = 1.2f;
	printf("%d + %.1f= %.1f\n", num1, num2, num1 + num2);

	//int num = -6;

	// 대입연산자 : 이항연산자 (피연산자 2개 필요 )
	// 오른쪽에 있는 값을 연산자 왼쪽에 있는 변수에 대입

	//복합대입연산자
	// a+=b : a = a+b 
	// a-=b :  a = a-b 
	// a*=b :  a = a*b 
	// a/=b :  a = a/b 
	// a%=b :  a = a%b
	int x = 3, y = 4;
	int result = x += y;
	printf("%d\n", result);

	y *= 4;
	printf("%d\n", y);

	//비교연산자
	// a>b
	// a<b
	// a>=b
	// a<=b
	// a == b
	// a != b
	// true : 1 / false : 0

	int a = 1, b = 10;
	printf("a > b : %d\n", a > b);
	printf("a == b : %d\n", a == b);
	printf("a != b : %d\n", a != b);


	// 증감연산자 (단항연산자 피연산자 1개 필요)
	// 숫자형 데이터를 1씩 증가시키거나 감소시킴
	// 변수--; 또는 --변수;
	// 변수++; 또는 ++변수;
	// int a = ++b;  : 먼저 증가연산이 실행된 후 증가된 b의 값을 a에 대입
	// int a = b++; : b값을 먼저 대입한 후 b의 증가가 실행됨

	int A = 10, B = 20;
	printf("A : %d\n", A);
	printf("A : %d\n", A++);
	printf("A : %d\n", A);

	printf("B : %d\n", B);
	printf("B : %d\n", ++B);
	printf("B : %d\n", B);

	//연산자우선순위
	int number3, number4, number5,number6,result2;
	number3 = 3;
	number4 = 4;
	number5 = 5;
	number6 = 6;

	result2 = number3 + number4 * number5 + number6;
	printf("%d + %d * %d + %d = %d", number3, number4, number5, number6, result2);

	//짱구의 기말고사 성적 평균 계산하기
	// 국어 : 68 / 영어 : 75 / 수학 : 88 / 사회 : 60 / 과학 : 96
	// 실수형으로 소수점 한자리까지 출력해주세요
	// 출력값 : 짱구의 평균은 : 99.9점 입니다.

	int k, e, m, h, s,total;
	k = 68;
	e = 75;
	m = 88;
	h = 60;
	s = 96;
	total = k + e + m + h + s;
	float avg = total / 5.0f;
	printf("짱구의 평균은 : %.1f점 입니다.", avg);

	return 0;
}