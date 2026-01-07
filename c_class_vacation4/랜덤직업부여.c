#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
	// 닉네임 입력받기
	// 스위치로 랜덤값에 따른 직업 부여하기 ㅣ 3개
	// ***님 당신의 직업은 ***입니다.

	char nickname[20]; // 닉네임 저장할 배열 만들어놓음
	int job; // 난수 저장할 공간

	srand((unsigned int)time(NULL));
	printf("게임 닉네임을 입력하세요 : ");
	//scanf_s("%s", nickname, (unsigned)sizeof(nickname));
	fgets(nickname, sizeof(nickname), stdin);
	//fget : 엔터를 누를때까지 입력받는다.
	// 그래서 엔터를 누르면 줄바꿈 표시인 \n이 문자열 끝에 저장되기 때문에 줄바꿈이 됨
	// 안 , 녕 , \n , \0
	int len = strlen(nickname);
	if (len > 0 && nickname[len - 1] == '\n') {
		nickname[len - 1] = '\0';
	}

	job = rand() % 3 + 1;

	printf("\n\n환영합니다. %s 님!\n", nickname);
	printf("당신의 직업은!!!!!!!!!!!");
	switch (job) {
		case 1: printf("전사입니다. 힘으로 세상을 지배하세요\n");
			break;
		case 2: printf("마법사입니다. 마법으로 모험을 즐기세요\n");
			break;
		case 3: printf("궁수입니다. 민첩한 활솜씨를 뽐내보세요\n");
			break;
	}

	return 0;
}