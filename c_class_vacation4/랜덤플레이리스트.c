#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	// 문자열을 저장하는배열 3개 만들기
	// 문자열을 가리킬 포인터 배열 만들기
	// 포인터배열 각각에 노래이름 배열의 첫번째 요소의 주소 넣어주기

	//노래제목 입력받기
	// 랜덤값 추출하여 while무한루프로
	// 사용자가 선택한 값이 1번이라면 랜덤재생
	// 2번이라면 전체출력 3번이라면 종료

	char song1[30], song2[30], song3[30];
	char* songs[3];
	songs[0] = song1;
	songs[1] = song2;
	songs[2] = song3;

	printf("노래 제목 3개를 입력하세요 : \n");
	for (int i = 0; i < 3; i++) {
		printf("%d번째 노래: ", i + 1);
		scanf_s("%s", songs[i], (unsigned int)30);
	}

	int choice;
	srand((unsigned)time(NULL));
	while (1) {
		printf("\n\n=========메뉴=========\n\n");
		printf("1. 플레이리스트 실행 ( 랜덤추천 )\n");
		printf("2. 전체 리스트 보기\n");
		printf("3. 종료 \n");
		printf("선택 : ");
		scanf_s("%d", &choice);

		if (choice == 1) {
			int r = rand() % 3;
			printf("재생 : %s\n", songs[r]);
		}
		else if (choice == 2) {
			printf("\n===전체노래리스트===\n");
			for (int i = 0; i < 3; i++) {
				printf("%d. %s\n", i + 1, songs[i]);
			}
		}
		else if (choice == 3) {
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf("잘못된 입력입니다. 다시 선택하세요.");
		}


	}

	return 0;
}