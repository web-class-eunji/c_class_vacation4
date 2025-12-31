#include <stdio.h>
int main(void)
{
	// 변수에 정답 숫자 넣어놓기
	// 유저 정답 받아올 변수 만들어놓기
	// 업다운 횟수 변수 만들기 ( 5번 )

	//반복문 작성
	// 정답이라면 정답입니다~ 

	int answer = 28;
	int guess;
	int count = 5;

	while (count > 0) {
		printf("숫자를 입력하세[남은 기회 : %d] :",count);
		scanf_s("%d", &guess);

		if (guess == answer) {
			printf("정답입니다!");
			return 0;
		}

		if (guess < answer) {
			printf("입력하신 값보다 더 큽니다.\n");
		}
		else {
			printf("입력하신 값보다 더 작아요\n");
		}

		count--;
	}

	printf("기회를 모두 사용했습니다. 정답은 %d 입니다. \n", answer);

	return 0;
}