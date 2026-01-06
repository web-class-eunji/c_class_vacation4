#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	// 결과는 if문으로
	// 사용자가 입력한 값을 담을 변수공간 / 컴퓨터가 선택한 랜덤값을 담을 변수공간
	// 

	int user, com;
	srand((unsigned)time(NULL));

	printf("가위[0] / 바위[1] / 보[2] 중 하나를 선택하세요 : ");
	scanf_s("%d", &user);

	com = rand() % 3;

	switch (user) {
		case 0 : printf("user : 가위\n");
			break;
		case 1: printf("user : 바위\n");
			break;
		case 2: printf("user : 보\n");
			break;
		default: printf("잘못된 입력입니다.\n");
			return 0;
	}

	switch (com) {
		case 0 : printf("com : 가위\n");
			break;
		case 1: printf("com : 바위\n");
			break;
		case 2: printf("com : 보\n");
			break;
	}

	if (user == com) {
		printf("결과 : 비겼다!\n");
	}
	else if (
		(user == 0 && com == 2) ||
		(user == 1 && com == 0) ||
		(user == 2 && com == 1)
		) {
		printf("결과 : 당신이 이겼삼");
	}
	else {
		printf("결과 : 컴퓨터가 이겼삼");
	}
	return 0;
}