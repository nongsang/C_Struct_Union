#include <stdio.h>

struct Point
{
	int x;
	int* y;
	int** z;
};

int main()
{
	int num = 3;
	struct Point p;

	p.x = &num;
	p.y = &p.x;
	p.z = &p.y;

	printf("num : %d\n", num);
	printf("p.x : %d\n", p.x);
	printf("*p.y : %d\n", *p.y);
	printf("**p.z : %d\n", **p.z);

	printf("\n");

	printf("&p : %d\n", &p);
	printf("&p.x : %d\n", &p.x);
}
// 5 ~ 7��° ��
// ������ ������, �������� ������ ������ ����ü ����

// 15 ~ 17��° ��
// �ּҰ� �Ҵ� ���

// 26, 27��° ��
// �迭ó�� ����ü�� �ּҰ��� ������, �� �ּҰ��� ����ü ���� ù��° ������ �ּҰ��� ����.