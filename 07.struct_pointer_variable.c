#include <stdio.h>

struct Point
{
	int* x;
	int** y;
};

int main()
{
	int num = 3;
	struct Point p;

	p.x = &num;
	p.y = &p.x;

	printf("num : %d\n", num);
	printf("*p.x : %d\n", *p.x);
	printf("**p.y : %d\n", **p.y);
}
// 5, 6��° ��
// ������ ������, �������� ������ ������ ����ü ����

// 14, 15��° ��
// �ּҰ� �Ҵ� ���