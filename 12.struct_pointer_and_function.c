#include <stdio.h>

// 1. �Լ��� ���ڸ� ����ü ������ �����ϴ� ���
struct Point
{
	int x;
	int y;
};

void f(struct Point p);

int main()
{
	struct Point p = { 10, 20 };
	f(p);
}

void f(struct Point p)				// ���ڸ� ����ü�� �ް��ִ�.
{
	printf("%d %d\n", p.x, p.y);	// ����ü�� ��Ҹ� ȣ��
}
// 18��° ��
// �Լ��� ���ڸ� ����ü�� ����

// 20��° ��
// ����ü ���� p�� x, y�� ȣ���Ѵ�.



// 2. �Լ��� ���ڸ� ����ü ������ ������ �����ϴ� ���
struct Point
{
	int x;
	int y;
};

void f(struct Point* p);

int main()
{
	struct Point p = { 10, 20 };
	f(&p);
}

void f(struct Point* p)					// ���ڸ� ����ü �����ͷ� �ް��ִ�.
{
	printf("%d %d\n", (*p).x, (*p).y);
	printf("%d %d\n", p->x, p->y);		// ����ü ��Ҹ� ȣ���ϴ� ���
}
// 45��° ��
// ����ü �����ͷ� �Լ��� ���ڸ� �����Ѵ�.

// 47, 48��° ��
// ����ü �����ͷ� ��Ҹ� ����ϴ� ���