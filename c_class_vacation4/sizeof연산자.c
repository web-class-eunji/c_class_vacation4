#include <stdio.h>
int main(void)
{
	int num = 1;
	printf("%zu\n", sizeof(num));
	printf("%zu\n", sizeof(100)); //int
	printf("%zu\n", sizeof(3.14));// double
	printf("%zu\n", sizeof(3.14f));
	printf("%zu\n", sizeof(short));

	return 0;
}