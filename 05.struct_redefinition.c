#include <stdio.h>

typedef struct Score		// typedef�� ���
{
	double math;
	double english;
	double average;
} score;					// ������

typedef struct Student		// typedef�� ���
{
	int no;
	score s;				// �������� ����ü�� ���
} student;					// ������

int main()
{
	student stu = { 203, {49, 20, 0} };				// ����ü �ʱ�ȭ ���

	stu.s.average = stu.s.math + stu.s.english / 2;

	printf("�й� : %d\n", stu.no);
	printf("������� : %.1f\n", stu.s.average);
}
// 3, 10��° ��
// ����ü �տ� typedef�� ����Ͽ���.

// 8, 14��° ��
// typedef�� ����Ͽ� ����ü�� �̸��� �ٽ� �������ְ� �ִ�.

// 13, 18��° ��
// �������� ����ü�� ����ϱ� ���� ����ü���� ����ϴ� struct�� �Է����� �ʾƵ� �ȴ�.