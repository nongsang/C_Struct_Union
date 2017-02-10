#include <stdio.h>

struct Point
{
	int x;
	long long y;					// 중요 부분
};

struct Student
{
	char name[20];
	struct Point* link;				// 외부 참조로 구성
};

int main()
{
	struct Student stu1 = { "Kim", NULL };
	struct Student stu2 = { "Lee", NULL };
	struct Point p1 = { 30, 40 };
	struct Point p2 = { 60, 80 };

	stu1.link = &p1;				// 외부 참조로 할당
	stu2.link = &p2;				// 외부 참조로 할당

	printf("stu1\n");
	printf("stu1.name : %s\n", stu1.name);
	printf("stu1.link->x : %d\n", stu1.link->x);
	printf("stu1.link->y : %lld\n", stu1.link->y);

	printf("\n");

	printf("stu2\n");
	printf("stu2.name : %s\n", stu2.name);
	printf("stu2.link->x : %d\n", stu2.link->x);
	printf("stu2.link->y : %lld\n", stu2.link->y);

	printf("\n");

	printf("stu의 크기\n");
	printf("stu1 : %d, stu2 : %d\n", sizeof(stu1), sizeof(stu2));	// 포인터의 복습

	printf("\n");

	printf("p의 크기\n");
	printf("p1 : %d, p2 : %d\n", sizeof(p1), sizeof(p2));			// 눈여겨 봐야할 부분
}
// 5, 6번째 줄
// 자료형이 서로 다르다.

// 22, 23번째 줄
// 서로 다른 구조체를 서로 연결하는 방법

// 40번째 줄
// (매우 중요~~~~~~~~~~~~~~~~~~~~~~~~~~~)
// Student 구조체의 크기는 24이다.
// char 배열로 20개를 정의하였고, 구조체를 포인터 형태로 정의 하였다.
// 배열 20byte, 포인터 4byte 합쳐서 24byte이다.

// 45번째 줄
// (더 중요~~~~~~~~~~~~~~~~~~~~~~~~~~~~)
// Point 구조체의 구조는 int형과 long long 형태이다.
// int 4byte, long long 8byte 총 12byte가 나와야 한다.
// 하지만 크기를 재면 16byte가 나온다.
// 답은 메모리 정렬을 하기 때문이다.
// long long의 크기가 더 큰  8byte이므로 long long 크기를 defalt로 크기를 구한다.
// char는 1byte이므로 배열로 크게 잡는다 해도 char 배열 뭉텅이를 defalt로 잡진 않는다.
// char 배열은 char의 순차적 배치에 지나지 않기 때문이다.
// 이를 패딩(padding)기법이라고 한다.
// 가급적이면 자료형의 순서대로 정리하여 정의하자
// int, int / double, double 같은 형식으로

// 메모리의 불이익을 받더라도 속도에서 이익을 가져온다.
