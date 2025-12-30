#include <stdio.h>
int main(void)
{
	/*
	if(조건식){
		조건식이 참이라면 실행할 코드
	}else if(조건식2){
		조건식을 충족하지 않고 조건식 2를 충족한다면 실행할 코드
	}else if(조건식3){
		조건식과 조건식2를 충족하지 않고 조건식 3를 충족한다면 실행할 코드
	}else if(조건식4){
		조건식과 조건식2, 조건식3을 충족하지 않고 조건식4 를 충족한다면 실행할 코드
	}else{
		모든 조건이 만족하지 않을 경우 실행
	}
	*/

	int a = 3,b = 2,c = 3;
	if (a == 1) {
		printf("고양이");
	}
	else if (a == 2) {
		printf("햄스터");
	}
	else if (a == 3) {
		printf("강아지 \n");
	}


	// 입력받은 학점이 90이상이라면 A
	// 입력받은 학점이 80이상이라면 B
	// 입력받은 학점이 70이상이라면 C
	// 입력받은 학점이 60이상이라면 D
	// 위 모든 조건에 부합하지 않는다면 F로 재시험 당첨 ~..~ 

	int score;
	printf("점수를 입력해주세요 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("%d점은 A학점입니다~\n", score);
	}
	else if (score >= 80) {
		printf("%d점은 B학점입니다~\n", score);
	}
	else if (score >= 70) {
		printf("%d점은 C학점입니다~\n", score);
	}
	else if (score >= 60) {
		printf("%d점은 D학점입니다~\n", score);
	}
	else {
		printf("%d점은 재시험 F!!!!!\n", score);
	}


	//나이를 입력받아 0~7세는 유아 / 버스비는 800원
	//나이를 입력받아 8~19세는 학생 / 버스비는 1200원
	//나이를 입력받아 20~34세는 청년 / 버스비는 1600원
	//나이를 입력받아 35~59세는 중년 / 버스비는 2000원
	//나이를 입력받아 60~150세는 노년 / 버스비는 무료
	// 그 외의 값을 입력한다면 무언가 잘못되었다.... 출력
	// 논리연산자 사용

	int userAge;
	printf("나이를 입력하삼 : ");
	scanf_s("%d", &userAge);
	if (userAge >= 0 && userAge <= 7) {
		printf("0~7세 유아 버스비는 800원 입니다.");
	}
	else if (userAge >= 8 && userAge <= 19) {
		printf("8~19세는 학생 / 버스비는 1200원");
	}
	else if (userAge >= 20 && userAge <= 34) {
		printf("20~34세는 청년 / 버스비는 1600원");
	}
	else if (userAge >= 35 && userAge <= 59) {
		printf("35~59세는 중년 / 버스비는 2000원");
	}
	else if (userAge >= 60 && userAge <= 150) {
		printf("60~150세는 노년 / 버스비는 무료");
	}
	else {
		printf("무언가 잘못되었삼");
	}

	return 0;
}