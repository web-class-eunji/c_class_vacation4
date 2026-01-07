#include <stdio.h>
int main(void)
{
	// 포인터 : 메모리의 주소값
	// 포인터변수 : 메모리의 주소값을 저장하는 변수
	// 주소 가져오기 : 집의 주소를 얻으려면 &를 사용해서 가져올것 //참조
	// 주소 따라가기 : 포인터를 통해 주소 안의 값을 가져오려면 * 사용해서 가져와야한다. // 역참조

	//int x = 10;
	//printf("%p\n", &x);

	//int* p = &x;
	//printf("%d\n", *p);
	//printf("%p\n", p);

	//int a = 3;
	//printf("%d", 3);
	//printf("%d", a);

	double d = 3.14;
	double* ptr = &d;
	//주소와 값을 출력해주세요
	printf("%p\n", ptr);
	printf("%.2f\n", *ptr);

	// * : 연산자
	//1. 2*a
	//2. int * p : 좌측에 있는 피연산자가 자료형이면 포인터 변수
	//3. *p : 포인터가 가리키는 메모리에 접근할 수 있는 역참조 *변수이름

	//포인터가 가지고 있는 주소값은 메모리의 시작 주소값만 가지고 있기 때문에 포인터 역참조를 하기 위해서는
	// 포인터의 타입이 필요하다 int나 double같은 타입이 필요한 이유는 포인터 역참조를 하기 위함이다.

	int dog = 3;
	// 포인터 변수를 선언한 후 포인터 변수에 주소값을 넣고
	// 3:주소값
	int* dog_address;
	dog_address = &dog;
	printf("%d : %p \n\n\n", *dog_address, dog_address);


	// 변수 x : 10 / y : 20
	// x의 주소를 저장하는 포인터 / y의 주소를 저장하는 포인터
	//임시공간(일반변수)
	//변경 전: x = 10 , y = 20
	//변경 후 : x = 20, y = 10

	int x = 10, y = 20;
	int* a = &x;
	int* b = &y;
	int temp;

	printf("변경 전 : x = %d, y = %d\n", x, y);

	temp = *a;
	*a = *b;
	*b = temp;
	printf("변경 후 : x = %d, y = %d\n", x, y);


	

	

	return 0;
}