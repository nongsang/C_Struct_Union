#include <stdio.h>

struct Point
{
	int x, y;
};

int main()
{
	struct Point p1 = { 10, 20 };
	struct Point p2 = { 30, 40 };
	struct Point p3 = { 0,0 };

	p3.x = p2.x - p1.x;
	p3.y = p2.y - p1.y;

	printf("%d ,%d\n", p3.x, p3.y);
}
// 10 ~ 12번째 줄
// 구조체 변수의 선언과 함께 초기화를 한다.
// 구조체 변수를 선언한 뒤 할당을 하는 것은 불가능하다.
// struct p1;			// 가능
// p1 = { 20, 30 };		// 불가능

// 14, 15번째 줄
// p3의 멤버변수에 값들을 저장하여 출력한다.
// 결과적으로 p1의 점에서 p2의 점까지의 거리를 좌표로 나타내는 방식이다.