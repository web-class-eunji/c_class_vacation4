#include <stdio.h>
int main(void)
{
	printf("%10d\n", 42);
	printf("%5d\n", 123456);
	printf("%-10d", 1234);
	printf("%d\n", 23);
	printf("%010d\n", 123456);
	printf("%8.4f", 3.14159);
	return 0;
}