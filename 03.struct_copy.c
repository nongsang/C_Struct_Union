#include <stdio.h>

struct Point
{
	int x, y;
};

int main()
{
	struct Point p1 = { 10, 20 };
	struct Point p2;

	p2 = p1;

	//p2 = p2 + p1;
	//p2 = p2 - p1;

	printf("%d ,%d\n", p1.x, p1.y);
	printf("%d ,%d\n", p2.x, p2.y);
}
// 13��° ��
// �� ������ ������ ����ü�� ���� ��� ���簡 �����ϴ�.

// 15, 16��° ��
// ����ü�� ��� ����� ���� �ڷ����̹Ƿ� ��Ģ������ �Ұ����ϴ�.