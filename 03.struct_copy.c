#include <stdio.h>

struct Point
{
	int x, y;
};

int main()
{
	struct Point p1 = { 10, 20 };
	struct Point p2;

	p2 = p1;

	//p2 = p2 + p1;
	//p2 = p2 - p1;

	printf("%d ,%d\n", p1.x, p1.y);
	printf("%d ,%d\n", p2.x, p2.y);
}
// 13번째 줄
// 두 변수가 동일한 구조체를 가질 경우 복사가 가능하다.

// 15, 16번째 줄
// 구조체의 경우 사용자 정의 자료형이므로 사칙연산은 불가능하다.