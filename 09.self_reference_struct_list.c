#include <stdio.h>

struct Student
{
	char name[20];
	int money;
	struct Student* link;		// 매우 중요 부분
};

int main()
{
	struct Student stu1 = { "Kim", 90, NULL };
	struct Student stu2 = { "Lee", 50, NULL };
	struct Student stu3 = { "Min", 100, NULL };

	stu1.link = &stu2;
	stu2.link = &stu3;

	printf("stu1\n");
	printf("stu1.name : %s\n", stu1.name);
	printf("stu1.money : %d\n", stu1.money);

	printf("\n");

	printf("stu2\n");
	printf("stu1.link->name : %s\n", stu1.link->name);					// stu1.link->name == stu2.name
	printf("stu1.link->money : %d\n", stu1.link->money);				// stu1.link->money == stu2.money

	printf("\n");

	printf("stu3\n");
	printf("stu1.link->link->name : %s\n", stu1.link->link->name);		// stu1.link->link->name == stu3.name
	printf("stu1.link->link->money : %d\n", stu1.link->link->money);	// stu1.link->link->money == stu.money
}
// 7번째 줄
// 자기 참조 구조체 구현 방법
// 구조체를 생성할 때 마지막에 자신 구조체를 포인터로 구성한다.
// 한마디로 구조체는 다른 구조체와 일렬로 이룰 수 있다.
// 이를 리스트(list)라고 한다.

// 26, 27번째 줄
// stu2.name으로 접근할 수 있지만 list형태로 연결된 구조체는 stu1.link->name의 형태로 접근이 가능하다.

// 32, 33번째 줄
// 마찬가지로 stu3.name으로 접근이 가능하지만 stu1.link->link->name으로 접근이 가능하다.