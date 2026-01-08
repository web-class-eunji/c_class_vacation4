#include <stdio.h>

//반환형 함수이름(매개변수){
//	return 반환할 값;
//}

void sayHello() {
	printf("Hello,World! \n");
}

void charName(char* name) {
	printf("안녕하세요, %s님! \n", name);
}

int add(int a, int b) {
	return a + b;
}

int main(void)
{
	sayHello();
	int a = add(5, 8);
	printf("add() : %d\n", a);

	char name[20];
	printf("이름을 입력해주세요 : ");
	scanf_s("%s", name, (unsigned int)sizeof(name));
	charName(name);

	return 0;
}