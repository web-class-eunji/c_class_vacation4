#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int random;
	random = rand();

	srand((unsigned)time(NULL));
	random = rand()%100 + 1;
	printf("%d", random);
	return 0;
}