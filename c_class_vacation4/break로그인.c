#include <stdio.h>
int main(void)
{
	// 올바른 아이디 
	// 올바른 비번
	// 사용자 입력 받을 메모리 공간
	// 시도 횟수 : 0

	// 로그인 성공하면 브레이크~

	int id = 1234;
	int password = 1111;
	int inputId, inputPw;
	int count = 0;

	while (count < 3) {
		printf("아이디 입력 : ");
		scanf_s("%d", &inputId);

		printf("비밀번호 입력 : ");
		scanf_s("%d", &inputPw);

		if (inputId == id && inputPw == password) {
			printf("로그인 성공!");
			break;
		}
		else {
			printf("로그인 실패! 남은 기회 : %d\n", 2 - count);
			count++;
		}

	}
	if (count == 3) {
		printf("3회 실패! 접근차단.\n");
	}
	return 0;

}