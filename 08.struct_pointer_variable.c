#include <stdio.h>

struct Student
{
	char no[11];	// char no[10];			// �� �κ� ��������
	char name[20];
	double total;
};

int main()
{
	struct Student stu = { "2011181026", "Shin", 105 };
	struct Student* p = { NULL };
	struct Student** pp = { NULL };

	p = &stu;
	pp = &p;

	printf("stu\n");
	printf("stu.no : %s\n" , stu.no);
	printf("stu.name: %s\n" , stu.name);
	printf("stu.total : %f\n", stu.total);

	printf("\n");

	printf("p\n");
	printf("p->no : %s\n", p->no);				// p->no == (*p).no
	printf("p->name: %s\n", p->name);			// p->name == (*p).name
	printf("p->total : %f\n", p->total);		// p->total == (*p).total

	printf("\n");

	printf("pp\n");
	printf("(*pp)->no : %s\n", (*pp)->no);				// (*pp)->no == (**pp).no
	printf("(*pp)->name: %s\n", (*pp)->name);			// (*pp)->name == (**pp).name
	printf("(*pp)->total : %f\n", (*pp)->total);		// (*pp)->total == (**pp).total
}
// 5��° ��
// ���ڿ��� �����ϴ� ��� ���ڿ��� ���� + 1 �� �迭�� ������
// ���ڿ��� ���̷� �迭�� ���ϴ� ��� �ٷ� �ڿ� ���� ���ڿ��� �迭�� �߰��ȴ�.
// ���� 2011181026Shin���� ����� �ȴ�.
// 10��°�� '\0'�� 6���� ������ �Ǹ鼭 �״�� ����� �ϰ� �ȴ�.
// ���� '\0'�� ���ö����� ����ϰ� �ȴ�.

// 26 ~ 29��° ��
// ����ü�� �����ͷ� �������� ��� ���� ����̴�.
// ->�����ڸ� ���Ͽ� ������ �Ѵ�.
// (*p).no���� ���������� ����ص� ������ ->�� ���� �������̴�.

// 34 ~ 36��° ��
// ����ü ���� �����͸� �����ϴ� ����̴�.
// (**pp).no�� ����� �� ������ (*pp)->no�� ����� �����ϴ�.