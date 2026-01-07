#include <stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	printf("%p\n", p);
	printf("%d\n", *a + 1);

	int b = 5;
	int* bp = &b;
	bp[0] = 10;
	printf("%d", b);
	return 0;
}