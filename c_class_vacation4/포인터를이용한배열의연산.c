#include <stdio.h>
int main(void)
{
	// 길이가 8인 배열 arr을 선언하고 1,2,3,4,5,6,7,8로 초기화한 후
	// 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언하고 포인터 변수 ptr에 마지막부터! 접근하여 
	// 감소시키는 방식으로 배열의 모든 요소에 접근하여 배열 요소 중 홀수에 해당하는 값들의 총 합을 구하는 코드를 작성
	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int* ptr = &arr[7];
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		if (*ptr % 2 != 0) {
			sum += *ptr;
		}
		ptr--;
	}
	printf("홀수의 합 : %d\n", sum);
 	return 0;
}