#include <stdio.h>

struct Point
{
	int* x;
	int** y;
};

int main()
{
	int num = 3;
	struct Point p;

	p.x = &num;
	p.y = &p.x;

	printf("num : %d\n", num);
	printf("*p.x : %d\n", *p.x);
	printf("**p.y : %d\n", **p.y);
}
// 5, 6번째 줄
// 포인터 변수와, 포인터의 포인터 변수로 구조체 구성

// 14, 15번째 줄
// 주소값 할당 방법