#include <stdio.h>

struct Student
{
	char name[20];
	int money;
	struct Student* left_link;		// 매우 중요 부분
	struct Student* right_link;		// 이것도 중요
};

int main()
{
	struct Student stu1 = { "Kim", 90, NULL, NULL };
	struct Student stu2 = { "Lee", 50, NULL, NULL };
	struct Student stu3 = { "Min", 100, NULL, NULL };

	stu1.left_link = &stu2;
	stu1.right_link = &stu3;

	printf("stu1\n");
	printf("stu1.name : %s\n", stu1.name);
	printf("stu1.money : %d\n", stu1.money);

	printf("\n");

	printf("stu2\n");
	printf("stu1.left_link->name : %s\n", stu1.left_link->name);		// stu1.left_link->name == stu2.name
	printf("stu1.right_link->money : %d\n", stu1.left_link->money);		// stu1.left_link->money == stu2.money

	printf("\n");

	printf("stu3\n");
	printf("stu1.left_link->name : %s\n", stu1.right_link->name);		// stu1.right_link->name == stu3.name
	printf("stu1.left_link->money : %d\n", stu1.right_link->money);		// stu1.right_link->money == stu3.money
}
// 7, 8번째 줄
// 구조체를 생성할 때 포인터 구조체를 2래 생성하였다.
// 이는 다른 구조체 2개를 가리킬 수 있다. 
// 이를 트리(tree)라고 한다.
// tree에 대한 것은 자료구조에서 자세하게 다룬다.