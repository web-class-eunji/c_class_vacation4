#include <stdio.h>
int main(void)
{
	printf("%zu", sizeof(int));
	printf("%zu", sizeof(char));
	printf("%zu", sizeof(short));
	printf("%zu", sizeof(float));
	printf("%zu\n", sizeof(double));

	float f = 3.14f;
	printf("%f\n", f);

	unsigned char ch;
	unsigned short sh; //65000 원래는 -32000 ~ 32000
	unsigned int in;
	ch = 128;
	sh = 50000;
	in = 4100000000;
	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in);
	// %d는 int 값의 범위 내애서만 정상 작동한다. -21억 ~ 21억

	char num = 255;
	printf("%d", num);

	// 10진수를 2진수로 변환하는 방법
	//255 / 2 = 127 ... 1
	//127 / 2 = 63 ... 1
	//63 / 2 = 31 ... 1
	//31 / 2 = 15 ... 1
	//15 / 2 = 7 ... 1
	//7 / 2 = 3 ... 1
	//3 / 2 = 1 ... 1
	//1 / 2 = 0 ... 1
	// 10000001 = -1
	
	// 2진수를 10진수로 변환하는 방법
	//0      1    1      0     1     0   0    1
	//128 64 32   16   8     4   2    1 
	//64+32+8+1 = 105

	return 0;
}