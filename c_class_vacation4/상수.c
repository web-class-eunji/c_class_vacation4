#include <stdio.h>
#define PI = 3.14
int main(void)
{
	//상수 : 변하지 않는 값

	// 리터럴상수 : 그냥 값 그 자체
	printf("%d\n",10);
	

	// 심볼릭상수
	const int MYCONST = 85;
	//const int YOURCONST;

	const char* FRIND_HOME = "서울시 강남구 테헤란로 123";
	printf("약속 장소 : %s\n", FRIND_HOME);
	return 0;
}