#include <stdio.h>

// 1. 구조체 함수 내에서 구조체 변수의 반환
struct Point
{
	int x;
	int y;
};

struct Point f();

int main()
{
	struct Point p;					// 구조체 변수 선언
	p = f();						// 구조체 변수에 구조체 함수를 할당
	printf("%d %d\n", p.x, p.y);
}

struct Point f()
{
	struct Point p = { 10, 20 };	// 구조체 변수의 초기화
	return p;						// 구조체 함수는 초기화 및 할당한 변수를 반환해줘야 적용된다.
}
// 14번째 줄
// 구조체 변수는 선언만 한 상태

// 15번째 줄
// 구조체 변수에 구조체 함수를 할당하였다.

// 21번째 줄
// 구조체 함수 내에서 구조체 변수를 초기화하였다.

// 22번째 줄
// 구조체 함수는 할당한 변수를 반환해줘야 한다.



// 2. 구조체 포인터 함수 내에서 구조체 변수의 주소값 반환
struct Point
{
	int x;
	int y;
};

struct Point* f();						// 구조체 포인터 함수 선언

int main()
{
	struct Point* p;					// 구조체 포인터 변수 선언
	p = f();							// 구조체 포인터 변수에 함수를 할당
	printf("%d %d\n", (*p).x, (*p).y);
	printf("%d %d\n", p->x, p->y);
}

struct Point* f()
{
	struct Point p = { 10, 20 };		// 구조체 변수의 초기화
	return &p;							// 구조체 포인터 함수는 변수의 주소값을 반환해줘야 적용된다.
}
// 45, 55번째 줄
// 구조체 포인터 함수를 선언

// 58번째 줄
// 구조체 포인터 함수로 정의를 해주었으면 반환값은 변수의 주소값이다.