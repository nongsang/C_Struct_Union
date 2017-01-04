#include <stdio.h>

struct Student
{
	char name[20];
	int money;
	struct Student* left_link;		// �ſ� �߿� �κ�
	struct Student* right_link;		// �̰͵� �߿�
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
// 7, 8��° ��
// ����ü�� ������ �� ������ ����ü�� 2�� �����Ͽ���.
// �̴� �ٸ� ����ü 2���� ����ų �� �ִ�. 
// �̸� Ʈ��(tree)��� �Ѵ�.
// tree�� ���� ���� �ڷᱸ������ �ڼ��ϰ� �ٷ��.