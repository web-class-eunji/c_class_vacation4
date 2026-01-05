#include <stdio.h>
int main(void)
{
	int i = 1;
	//for (;;) {
	//	printf("%d", i++);
	//}

	//while (1) {
	//	printf("%d", i++);
	//}

	for (int i = 0; i <= 10; i++) {
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
	}

	printf("\n");

	while (i <= 10) {
		if (i == 5) {
			break;
		}
		printf("%d \n", i);
		i++;
	}
	return 0;
}