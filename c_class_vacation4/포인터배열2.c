#include <stdio.h>
int main(void)
{
	//int* p1, * p2, * p3, * p4, * p5;
	int* p[5];
	int a = 3;
	p[3] = &a;
	printf("%p\n", p[3]);
	printf("%d\n", *p[3]);

	int x = 10, y = 20, z = 30;
	int* ptrArr[3];
	ptrArr[0] = &x;
	ptrArr[1] = &y;
	ptrArr[2] = &z;

	for (int i = 0; i < 3; i++) {
		printf("ptrArr[%d]가 가리키는 값 : %d\n", i, *ptrArr[i]);
	}
	return 0;
}
