#include <stdio.h>
int main(void)
{
	int month, day;
	int daysLeft = 0;
	int m;

	// 오늘 날짜를 입력받아 월이 1보다 작거나 12보다 크다면 월 입력이 올바르지 않습니다 출력 후 프로그램 종료
	printf("오늘 날짜를 입력하세요 (월 일) : ");
	scanf_s("%d %d", &month, &day);

	if (month < 1 || month > 12) {
		printf("월 입력이 올바르지 않습니다.");
		return 0;
	}

	int maxDay;
	// 입력받은 month가 1,3,5,7,8,10,12월 과 같다면 maxDay에 = 31일
	// 입력받은 month가 4,6,9,11월 과 같다면 maxDay에 = 30일
	// 입력받은 month가 2월이라면 maxDay에 = 28일

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		maxDay = 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		maxDay = 30;
	}
	else {
		maxDay = 28;
	}

	if (day < 1 || day > maxDay) {
		printf("일 입력이 올바르지 않습니다.");
		return 0;
	}

	// 만약 현재 달이 12월이라면 daysLeft에 31에서 day를 뺀 값을 대입;
	// 12월인 경우 31-오늘일 
	// 12 25 6일남음

	//만약 현재 달이 12월이 아니라면 daysLeft에 maxDay - day를 대입

	if (month == 12) {
		daysLeft = 31 - day;
	}
	else {
		daysLeft = maxDay - day;
		//현재달 +1 한 다음달을 m에 넣어줌
		m = month + 1;
		while (m <= 12) {
			if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
				daysLeft += 31;
			}
			else if (m == 4 || m == 6 || m == 9 || m == 11) {
				daysLeft += 30;
			}
			else {
				daysLeft += 28;
			}
			m++;
		}
	}

	printf("연말(12/31) 까지 남은 D-day : %d일\n", daysLeft);
	return 0;
}