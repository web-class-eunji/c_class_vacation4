#include <stdio.h>
int main(void)
{
	char key;
	int x = 0;

	while (1) {
		printf("현재 위치 : %d\n", x);
		printf("a: 왼쪽으로 한 칸 이동 / d: 오른쪽으로 한 칸 이동 / q:종료\n ");
		printf("입력 : ");
		scanf_s(" %c", &key,1);

		
	}
	return 0;
}