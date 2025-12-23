#include <stdio.h>
int main(void)
{
	// 한줄 주석의 기본

	/*
	여러줄
	주석의
	기본
	*/

	//printf("hello");

	//자료형 변수명 = 값;
	int c = 50;
	
	//변수를 선언하는 다양한 방법
	//자료형 변수명A;
	//변수명A = 값;

	//변수명B = 값;

	int num2;
	num2 = 2;
	num2 = 5;
	printf("%d",num2);

	int number1, number2;
	number1 = 10;
	number2 = 20;

	int number3 = 30, number4 = 40;

	//1. 변수의 이름은 알파벳, 숫자, 언더바로만 구성할 수 있다.
	//2. 변수의 이름은 숫자로 시작할 수 없다. (첫 글자는 영어로 보통 시작한다. )
	//3. 변수의 이름은 공백을 포함할 수 없다.
	//4. C언어는 알파벳 대/소문자를 구분한다.
	//5. 예약어를 사용할 수 없다.

	//가능한 변수명
	int x = 10;
	int number8 = 8;
	int number_05 = 5;
	int Number = 115;

	//불가능한 변수명
	//int hello World = 1; 
	//int hell#s$% = 2;
	//int 100number = 100;
	//int int = 1;



	return 0;
}