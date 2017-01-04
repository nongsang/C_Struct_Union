#include <stdio.h>

struct Point
{
	int x;
	int* y;
	int** z;
};

int main()
{
	int num = 3;
	struct Point p;

	p.x = &num;
	p.y = &p.x;
	p.z = &p.y;

	printf("num : %d\n", num);
	printf("p.x : %d\n", p.x);
	printf("*p.y : %d\n", *p.y);
	printf("**p.z : %d\n", **p.z);

	printf("\n");

	printf("&p : %d\n", &p);
	printf("&p.x : %d\n", &p.x);
}
// 5 ~ 7번째 줄
// 포인터 변수와, 포인터의 포인터 변수로 구조체 구성

// 15 ~ 17번째 줄
// 주소값 할당 방법

// 26, 27번째 줄
// 배열처럼 구조체는 주소값을 가지고, 그 주소값은 구조체 안의 첫번째 변수의 주소값과 같다.