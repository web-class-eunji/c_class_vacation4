#include <stdio.h>
int main(void)
{
	// 환전할 금액을 입력받을 변수 생성
	// 어떤 화폐로 환전할지 담을 임시변수 생성
	
	// printf 하나로 밑에 123 번 작성
	// 1. 달러(1USD = 1443원)
	// 2. 엔화(1JPY = 9원)
	// 3. 유로(1CAD = 1054원)

	//스위치문을 활용해 선택한 번호가 1과 같다면 달러로 환산

	double won;
	int menu;

	printf("환전할 금액 입력(원) : ");
	scanf_s("%lf", &won);

	printf("1. 미국 달러 (1USD = 1443원)\n2. 엔화 (1JPY = 9원)\n3. 캐나다 달러 (1CAD = 1054원)\n 선택 : ");
	scanf_s("%d", &menu);

	switch (menu) {
		case 1: printf("미국 달러 : %.2lf USD \n", won / 1443);
			break;
		case 2: printf("엔화 : %.2lf JPY \n", won / 9);
			break;
		case 3: printf("캐나다 달러 : %.2lf CAD \n", won / 1054);
			break;
		default: printf("잘못된 선택입니다.\n");
	}


	return 0;
}