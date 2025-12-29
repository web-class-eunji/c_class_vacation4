#include <stdio.h>
int main(void)
{
	// 조건식?맞으면 이게 출력됩니다.(true):조건이 거짓이라면 이게 출력됨;
	int ten = 10, twenty = 20;
	int max;
	max = ten > twenty ? ten : twenty;
	printf("max에 들어있는 값 : %d\n", max);

	//나이를 입력받아 미성년자인지 판별하기
	// 성인이라면 1 출력  / 미성년자라면 0 출력 
	// 성인의 기준은 19살

	int age, result;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	result = age >= 19 ? 1 : 0;
	printf("결과 : %d\n", result);

	// 사용자가 20살 이상이라면 지하철요금은 1280원 20살 미만이라면 800원
	// 출력 : 21세의 지하철 요금은 1280 입니다.

	int userAge;
	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &userAge);

	int ageCheck = userAge >= 20 ? 1280 : 800;
	printf("%d세의 지하철 요금은 %d 입니다.\n", userAge, ageCheck);

	// 사용자에게 숫자를 입력받아서 그 숫자가 짝수라면 0을 출력하고 홀수라면 1을 출력
	// 출력 : 입력하신 숫자는 **이며, 결과 : 0 or 1

	int inputNum, result3;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &inputNum);
	result3 = inputNum % 2 == 0 ? 0 : 1;
	printf("입력한 숫자는 %d이며, 결과 : %d\n", inputNum, result3);

	int score = 85;
	char grade = score >= 90 ? 'A' : score >= 80 ? 'B' : score >= 70 ? 'C' : 'D';
	printf("학점 : %c\n", grade);


	return 0;
}