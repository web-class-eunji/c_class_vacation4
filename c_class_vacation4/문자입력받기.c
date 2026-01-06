#include <stdio.h>
int main(void)
{
	//문자 입력받을 공간 확보
	//char scanf_string[50];
	//printf("문자열을 입력하세요 : ");
	//scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string));
	//
	//printf("%s", scanf_string);

	char str[50];
	printf("문자열을 입력하세요 : ");
	fgets(str, sizeof(str), stdin);
	printf("입력된 문자열 : %s", str);
	// 안녕enter
	// 안,녕,\n,\0
	return 0;

}