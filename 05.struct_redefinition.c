#include <stdio.h>

typedef struct Score		// typedef�� ���
{
	double math;
	double english;
	double average;
} score;					// ������

struct Student
{
	int no;
	score s;				// �������� ����ü�� ���
};
typedef struct Student student;					// ������

int main()
{
	student stu = { 203, {49, 20, 0} };				// ����ü �ʱ�ȭ ���

	stu.s.average = stu.s.math + stu.s.english / 2;

	printf("�й� : %d\n", stu.no);
	printf("������� : %.1f\n", stu.s.average);
}
// 3, 10��° ��
// ����ü �տ� typedef�� ����Ͽ���.

// 8, 15��° ��
// typedef�� ����Ͽ� ����ü�� �̸��� �ٽ� �������ְ� �ִ�.
// ����ü�� �������ϴ� ��� 2������ �ִ�.
// 1. 3, 8��° ��
//    ����ü �տ� typedef�� ����Ͽ� ����ü �ڿ� �̸��� ���´�.
// 2. 15��° ��
//	  ����ü ���� �� ���� typedef�� ����Ͽ� ����

// 13, 18��° ��
// �������� ����ü�� ����ϱ� ���� ����ü���� ����ϴ� struct�� �Է����� �ʾƵ� �ȴ�.