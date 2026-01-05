#include <stdio.h>
int main(void)
{
	for (int i = 1; i <= 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d번 학생 \n", i);
	}

	//while과 continue를 사용해서 1~10까지 증가하는데 짝수만 출력하는 코드를 작성해주세요
	int num = 0;
	while (num <= 10) {
		num++;
		if (num % 2 != 0) {
			continue;
		}
		printf("%d\n", num);
	}
	return 0;
}