#include <stdio.h>

union UPoint
{
	int x;
	double y;
};

struct SPoint
{
	int a;
	int b;
};

int main()
{
	union UPoint up;
	struct SPoint sp;
	printf("����ü ũ�� : %d, ����ü ũ�� : %d\n", sizeof(up), sizeof(sp));		// ũ�� ���̸� ����

	printf("\n");

	up.x = 10.0;					// ����ü ���� �Ҵ�

	sp.a = 20;					// ����ü ���� �Ҵ�
	sp.b = 30;					// ����ü ���� �Ҵ�

	printf("����ü x = %d, y = %d\n", up.x, up.y);	// ��������?
	printf("����ü a = %d, b = %d\n", sp.a, sp.b);
}
// 19��° ��
// ����ü�� ũ��� 8byte, ����ü�� ũ��� 8byte��.
// ����ü�� �� ������ ������ �޸� ������ ��������, ����ü�� ���� ū �ڷ����� ũ�⸦ �Ҵ�޾� �����Ѵ�.

// 23 ~ 26��° ��
// ����ü�� ����ü�� ������ ���� �Ҵ��Ѵ�.

// 28, 29��° ��
// ����ü�� ���� �ϳ��� �ٲ㵵 ��� ������ �����ϹǷ� ���� ���� ������.
// ����ü�� ������ �޸� ������ �����Ƿ� �� ���� �Ҵ������ �Ѵ�.
// ����ü�� �ڷ����� �°� ����ص� ���� ����� ����� ���� �ʴ´�.