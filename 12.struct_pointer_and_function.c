#include <stdio.h>

// 1. 함수에 인자를 구조체 변수로 복사하는 방법
struct Point
{
	int x;
	int y;
};

void f(struct Point p);

int main()
{
	struct Point p = { 10, 20 };
	f(p);
}

void f(struct Point p)				// 인자를 구조체로 받고있다.
{
	printf("%d %d\n", p.x, p.y);	// 구조체의 요소를 호출
}
// 18번째 줄
// 함수의 인자를 구조체로 구성

// 20번째 줄
// 구조체 변수 p의 x, y를 호출한다.



// 2. 함수에 인자를 구조체 포인터 변수로 전달하는 방법
struct Point
{
	int x;
	int y;
};

void f(struct Point* p);

int main()
{
	struct Point p = { 10, 20 };
	f(&p);
}

void f(struct Point* p)					// 인자를 구조체 포인터로 받고있다.
{
	printf("%d %d\n", (*p).x, (*p).y);
	printf("%d %d\n", p->x, p->y);		// 구조체 요소를 호출하는 방법
}
// 45번째 줄
// 구조체 포인터로 함수에 인자를 전달한다.

// 47, 48번째 줄
// 구조체 포인터로 요소를 출력하는 방법