#include <stdio.h>
#include <string.h>
int main(void)
{
	char string_text[] = "안녕하세요!";
	printf("string_text의 길이는 : %zu\n", sizeof(string_text));

	char en_text[] = "Hello!";
	printf("en_text의 길이는 : %zd\n", sizeof(en_text));

	char long_text[50] = "This is long";
	printf("long_text의 길이는 : %zd\n", sizeof(long_text));

	printf("long_text의 콘텐츠 길이는 : %zd\n", strlen(long_text));
	printf("%s\n", long_text);

	char question[30] = "My name is 은지";
	printf("%s\n", question);

	question[10] = '\0';
	printf("%s\n", question);


	return 0;
}