#include <stdio.h>

struct Point
{
	int x, y;
} p1, p2;

int main()
{
	struct Point p3, p4;

	p1.x = 1, p1.y = 1;
	p2.x = 2, p2.y = 2;
	p3.x = 3, p3.y = 3;
	p4.x = 4, p4.y = 4;

	printf("p1.x : %d, p1.y : %d\n", p1.x, p1.y);
	printf("p2.x : %d, p2.y : %d\n", p2.x, p2.y);
	printf("p3.x : %d, p3.y : %d\n", p3.x, p3.y);
	printf("p4.x : %d, p4.y : %d\n", p4.x, p4.y);
}
// 6��° ��
// ����ü ������ �����ϴ� �����
// 1. ����ü �Ʒ��� �����ϴ� ���.

// 10��° ��
// 2. ����ü ������ �Լ� ���� ���� �ϴ� ���.

// 12 ~ 15��° ��
// ����ü ���� ���� �ִ� ��������� �����Ͽ� ���� �����ϴ� ���