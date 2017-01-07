#include <stdio.h>

struct Point
{
	int x;
	long long y;					// �߿� �κ�
};

struct Student
{
	char name[20];
	struct Point* link;				// �ܺ� ������ ����
};

int main()
{
	struct Student stu1 = { "Kim", NULL };
	struct Student stu2 = { "Lee", NULL };
	struct Point p1 = { 30, 40 };
	struct Point p2 = { 60, 80 };

	stu1.link = &p1;				// �ܺ� ������ �Ҵ�
	stu2.link = &p2;				// �ܺ� ������ �Ҵ�

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

	printf("stu�� ũ��\n");
	printf("stu1 : %d, stu2 : %d\n", sizeof(stu1), sizeof(stu2));	// �������� ����

	printf("\n");

	printf("p�� ũ��\n");
	printf("p1 : %d, p2 : %d\n", sizeof(p1), sizeof(p2));			// ������ ������ �κ�
}
// 5, 6��° ��
// �ڷ����� ���� �ٸ���.

// 22, 23��° ��
// ���� �ٸ� ����ü�� ���� �����ϴ� ���
// C++�� ����� �����̴�.

// 40��° ��
// (�ſ� �߿�~~~~~~~~~~~~~~~~~~~~~~~~~~~)
// Student ����ü�� ũ��� 24�̴�.
// char �迭�� 20���� �����Ͽ���, ����ü�� ������ ���·� ���� �Ͽ���.
// �迭 20byte, ������ 4byte ���ļ� 24byte�̴�.

// 45��° ��
// (�� �߿�~~~~~~~~~~~~~~~~~~~~~~~~~~~~)
// Point ����ü�� ������ int���� long long �����̴�.
// int 4byte, long long 8byte �� 12byte�� ���;� �Ѵ�.
// ������ ũ�⸦ ��� 16byte�� ���´�.
// ���� �޸� ������ �ϱ� �����̴�.
// long long�� ũ�Ⱑ �� ū  8byte�̹Ƿ� long long ũ�⸦ defalt�� ũ�⸦ ���Ѵ�.
// char�� 1byte�̹Ƿ� �迭�� ũ�� ��´� �ص� char �迭 �����̸� defalt�� ���� �ʴ´�.
// char �迭�� char�� ������ ��ġ�� ������ �ʱ� �����̴�.
// �̸� �е�(padding)����̶�� �Ѵ�.
// �������̸� �ڷ����� ������� �����Ͽ� ��������
// int, int / double, double ���� ��������

// �޸��� �������� �޴��� �ӵ����� ������ �����´�.