#include <stdio.h>

struct Score
{
	double math;
	double english;
	double total;
};

struct Student
{
	int no;
	struct Score s;				// Student ����ü �ȿ� Score ����ü�� �־ ���Ǹ� �����.
};

int main()
{
	//struct Student stu = { 203, 49 ,20 ,0 };		// ����ü�� �ʱ�ȭ�� ���ʴ�� �����ϸ� �ȴ�.	
	struct Student stu = { 203, {49, 20, 0} };		// ����ü�� �������ֱ� ���� ��ȣ�� �����ָ� ����.

	stu.no = 2011181026;
	stu.s.math = 90.3;
	stu.s.english = 85.3;
	stu.s.total = stu.s.math + stu.s.english;

	printf("�й� : %d\n", stu.no);
	printf("������� : %.1f\n", stu.s.total/2);
}
// 13��° ��
// Student ����ü �ȿ� Score ����ü�� �����Ͽ� �����ߴ�.
// Student ����ü�� ���� �� �̹� ���ǵ� ����ü�� ��Ȱ���Ͽ� ���� ��.
// C++�� ����� ����� ����.

// 18, 19��° ��
// ��ø ����ü�� �ʱ�ȭ �ϴ� ����̴�.
// 1. ������� ����
// 2. ����ü�� �����Ͽ� {}�� ����

// 21 ~ 24��° ��
// ����ü ��������� ���� �Ҵ��ϴ� ���
// ��ø�� ����ü�� ���� �����ڸ� ��ø���� ����Ͽ��� �Ѵ�.