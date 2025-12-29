#include <stdio.h>
int main(void) {

	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	printf("결과 : %d\n", result);

	result = one <= two && two <= three && three <= four;
	printf("결과 : %d\n", result);

	result = !(one > two);
	printf("결과 : %d\n", result);

	return 0;
}