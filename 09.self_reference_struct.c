#include <stdio.h>

struct Student
{
	char name[20];
	int money;
	struct Student* link;		// �ſ� �߿� �κ�
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
// 7��° ��
// �ڱ� ���� ����ü ���� ���
// ����ü�� ������ �� �������� �ڽ� ����ü�� �����ͷ� �����Ѵ�.
// �Ѹ���� ����ü�� �ٸ� ����ü�� �Ϸķ� �̷� �� �ִ�.
// �̸� ����Ʈ(list)��� �Ѵ�.

// 26, 27��° ��
// stu2.name���� ������ �� ������ list���·� ����� ����ü�� stu1.link->name�� ���·� ������ �����ϴ�.

// 32, 33��° ��
// ���������� stu3.name���� ������ ���������� stu1.link->link->name���� ������ �����ϴ�.