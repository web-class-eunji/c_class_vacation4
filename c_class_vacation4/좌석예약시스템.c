#include<stdio.h>
int main(void)
{
	int seats[3][5] = { 0 };
	int row, col; //사용자로부터 입력받을 행 열

	while (1) {
		printf("\n\n=====좌석현황=====\n\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				printf("%d ", seats[i][j]);
			}
			printf("\n");
		}

		printf("\n예약할 좌석 입력(행 열, 종료 -> 0 0입력):");
		scanf_s("%d %d", &row, &col);

		if (row == 0 && col == 0)break;
		row--;
		col--;

		if (row < 0 || row >= 3 || col < 0 || col >= 5) {
			printf("잘못된 좌석입니다. 다시 입력하세요\n");
			continue;
		}

		if (seats[row][col] == 0) {
			seats[row][col] = 1;
			printf("%d행 %d열 좌석 예약 완료!\n", row + 1, col + 1);
		}
		else {
			printf("이미 예약된 자석입니다.\n");
		}
	}
	return 0;
}