#include <stdio.h>
int main(void)
{
	// 초기잔액설정
	// 메뉴 / 얼마 입출금할지 담을 변수

	// while 무한반복을 사용
	// if사용

	int money = 10000;
	int menu, amount;

	while (1) {
		printf("===========ATM============\n\n");
		printf("1. 잔액조회\n2. 입금\n3. 출금\n4. 종료\n");
		printf("메뉴 선택 : ");
		scanf_s("%d", &menu);

		if (menu < 1 || menu > 4) {
			printf("잘못된 선택입니다.\n");
			continue;
		}

		if (menu == 1) {
			printf("현재 잔액 : %d 원\n", money);
		}
		else if (menu == 2) {
			printf("입금 금액 : ");
			scanf_s("%d", &amount);
			if (amount <= 0) {
				printf("잘못된 금액을 입력했습니다.\n");
				continue;
			}
			money += amount;
		}
		else if (menu == 3) {
			printf("출금 금액 : ");
			scanf_s("%d", &amount);
			if (amount > money) {
				printf("잔액이 부족합니다.\n");
				continue;
			}
			money -= amount;
		}
		else if (menu == 4) {
			printf("ATM을 종료합니다.\n");
			break;
		}
	}
	return 0;
}