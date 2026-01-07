#include <stdio.h>
int main(void)
{
	int x = 10, y = 20;
	int* const CONST_POINTER = &x;
	*CONST_POINTER = 30;
	printf("%d\n", *CONST_POINTER);

	const int* p2 = &x;
	//*p2 = 10;

	const int* const p = &y;
	//*p = 50;
	//p = &x;

	//CONST_POINTER = &y;
	//const int * p : 주소변경 가능 값 변경불가
	//int * const p = &x; : 주소가 상수 : 주소변경불가 값 변경 가능

	return 0;
}