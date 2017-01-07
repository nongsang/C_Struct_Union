#include <stdio.h>

union UPoint
{
	int x;
	double y;
};

struct SPoint
{
	int a;
	int b;
};

int main()
{
	union UPoint up;
	struct SPoint sp;
	printf("공용체 크기 : %d, 구조체 크기 : %d\n", sizeof(up), sizeof(sp));		// 크기 차이를 보자

	printf("\n");

	up.x = 10.0;					// 공용체 변수 할당

	sp.a = 20;					// 구조체 변수 할당
	sp.b = 30;					// 구조체 변수 할당

	printf("공용체 x = %d, y = %d\n", up.x, up.y);	// 변수값이?
	printf("구조체 a = %d, b = %d\n", sp.a, sp.b);
}
// 19번째 줄
// 공용체의 크기는 8byte, 구조체의 크기는 8byte다.
// 구조체는 각 변수가 각각의 메모리 공간은 가지지만, 공용체는 제일 큰 자료형의 크기를 할당받아 공유한다.

// 23 ~ 26번째 줄
// 구조체와 공용체의 변수에 값을 할당한다.

// 28, 29번째 줄
// 공용체는 값을 하나만 바꿔도 모든 변수가 공유하므로 같은 값을 가진다.
// 구조체는 각각의 메모리 공간을 가지므로 각 값을 할당해줘야 한다.
// 공용체는 자료형에 맞게 출력해도 값이 제대로 출력이 되지 않는다.