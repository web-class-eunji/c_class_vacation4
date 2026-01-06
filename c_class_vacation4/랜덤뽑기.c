#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	// 7번 시도함
	// 사용자에게 입력받은 숫자를 넣을 변수 생성
	// 랜덤 숫자 넣을 변수 생성
	// 일반아이템 뽑은 개수 int normal = 0
	// 레어
	// 에픽
	// 레전드

	// 레전드 아이템을 뽑았다면 종료함
	// 1을 입력하면 뽑기 시작
	// 랜덤숫자는 1~100
	// 일반 아이템 확률 : 50%
	// 레어 아이템 확률 : 30%
	// 에픽 아이템 확률 : 15%
	// 레전드 아이템 확률 : 5%
	//뽑을 때마다 현재 결과 알려주기

	//100
	// 50보다 작거나 같으면 : 일반아이템
	// 80보다 작거나 같으면 : 레어
	// 95보다 작거나 같으면 에픽
	// 나머지값 : 레전드
	int tries = 0;
	int input,random;

	int normal = 0, rare = 0, epic = 0, legendary = 0;
	srand((unsigned)time(NULL));

	printf("랜덤 아이템 뽑기\n\n");
	printf("1 입력 시 아이템 뽑기 시작!\n");
	printf("총 7번 뽑을 수 있음 [0입력시 종료됨]\n\n");

	while (tries < 7) {
		printf("입력(%d번째 뽑기) : ", tries + 1);
		scanf_s("%d", &input);

		if (input == 0) {
			printf("뽑기 종료!\n");
			break;
		}
		if (input != 1) {
			printf("숫자를 잘못 입력했습니다. 1을 입력해야 뽑기를 시작합니다.");
			continue;
		}

		tries++;
		random = rand() % 100 + 1;
		if (random <= 50) {
			normal++;
			printf("일반 아이템 획득!\n");
		}
		else if (random <= 80) {
			rare++;
			printf("레어 아이템 획득!\n");
		}
		else if (random <= 95) {
			epic++;
			printf("에픽 아이템 획득!\n");
		}
		else {
			legendary++;
			printf("레전드 아이템 획득!\n");
			printf("레전드 아이템 얻었으므로 뽑기 종료~!\n");
			break;
		}
		printf("현재 결과 : 일반 %d / 레어 : %d / 에픽 : %d / 레전드 : %d \n\n",normal,rare,epic,legendary);
		if (tries == 7) {
			printf("모든 뽑기 기회를 사용했습니다.\n");
		}
	}

	printf("\n최종 결과\n");
	printf("일반 : %d\n", normal);
	printf("레어 : %d\n", rare);
	printf("에픽 : %d\n", epic);
	printf("레전드 : %d\n", legendary);


	return 0;
}