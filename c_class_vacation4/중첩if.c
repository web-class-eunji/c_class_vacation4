#include <stdio.h>
int main(void)
{
	/*
	
	if(조건식1){
		코드
		if(조건식2){
			조건식1과 조건식2를 모두 만족할 경우 실행할 코드 작성
		}
	}

	*/

	//int a = 0, b = 5;
	//if (a >= 1) {
	//	printf("a는 1보다 크다.\n");
	//	if (b <= a) {
	//		printf("b는 a보다 커요.");
	//	}
	//	else {
	//		printf("b는 a보다 작아요.");
	//	}
	//}
	//else {
	//	printf("a는 1보다 작다.");
	//}

	//// 학번 : 숫자6글자로 구성됨
	//// 비밀번호 : 숫자6글자로 구성됨
	//// 유저가 입력한 학번과 비밀번호를 받아올 변수를 미리 생성
	//// 4
	//// 학번화 받아온 학번이 일치한다면 비밀번호가 일치하는지 검사
	//// 학번과 비밀번호 둘 다 일치한다면 로그인되었습니다.
	//// 학번이 일치하지 않는다면 학번이 일치하지 않습니다.
	//// 비밀번호가 일치하지 않는다면 비밀번호가 일치하지 않습니다. 

	//int studentNum = 251203, studentCheck;
	//int password = 112233, passwordCheck;

	//printf("학번입력 : ");
	//scanf_s("%d", &studentCheck);
	//
	//printf("비밀번호입력 : ");
	//scanf_s("%d", &passwordCheck);

	//if (studentNum == studentCheck) {
	//	if (password == passwordCheck) {
	//		printf("%d님 로그인 되었습니다",studentCheck);
	//	}
	//	else {
	//		printf("비밀번호가 일치하지 않습니다.");
	//	}
	//}
	//else {
	//	printf("아이디가 일치하지 않습니다.");
	//}


	int totalPrice;
	int member;

	printf("구매금액입력 (숫자만): ");
	scanf_s("%d", &totalPrice);

	printf("회원이신가요? (회원이면1 아니면0 입력 ) : ");
	scanf_s("%d", &member);

	// 10만원 이상 구매했다면 사은품 증정(회원이 아니어도 증정) / 회원이라면 50000원 이상 구매 회원은 배송비도 무료
	// 10만원 이상 구매했는데 회원이 아니라면 배송비 5000원 부과 증정은 할거임

	// 5만원 이상 구매 고객은 증정 X / 회원이라면 배송비 무료 / 비회원은 배송비 5000원 부과
	
	// 5만원 미만은 배송비 5천원 부과


	if (totalPrice >= 100000) {
		printf("100,000원 이상 구매로 사은품이 증정됩니다.\n");
		if (member == 1) {
			printf("50,000원 이상 구매로 배송비 무료입니다.");
		}
		else {
			printf("비회원은 배송비 5,000원 부과됩니다.");
		}
	}
	else if (totalPrice >= 50000) {
		if (member == 1) {
			printf("회원은 50,000원 이상 구매 배송비 무료입니다.");
		}
		else {
			printf("비회원은 배송비 5,000원 부과됩니다.");
		}
	}
	else {
		printf("구매금액이 50,000원 이하입니다. 배송비 5,000원이 부과됩니다.");
	}


	return 0;
}