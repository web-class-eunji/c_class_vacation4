#include <stdio.h>
#define NAME 10
#define PHONE 20

typedef int integer;
//typedef struct student stu;

typedef struct student
{
	char name[NAME];
	char phone[PHONE];
	integer number;

}stu;

int main(void)
{
	stu s1;
	s1.number = 100;
	printf("이름: ");
	gets_s(s1.name, NAME);
	printf("전화번호: ");
	gets_s(s1.phone, PHONE);

	while (getchar() != '\n');

	printf("\n\n *** 학생 정보 출력***\n\n");
	printf("%3d %-20s %-20s %8d\n", 1, s1.name, s1.phone, s1.number);

	integer a;
	a = 5;
	return 0;
}