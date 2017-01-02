#include <stdio.h>

typedef struct Score		// typedef를 사용
{
	double math;
	double english;
	double average;
} score;					// 재정의

typedef struct Student		// typedef를 사용
{
	int no;
	score s;				// 재정의한 구조체의 사용
} student;					// 재정의

int main()
{
	student stu = { 203, {49, 20, 0} };				// 구조체 초기화 방법

	stu.s.average = stu.s.math + stu.s.english / 2;

	printf("학번 : %d\n", stu.no);
	printf("평균점수 : %.1f\n", stu.s.average);
}
// 3, 10번째 줄
// 구조체 앞에 typedef를 사용하였다.

// 8, 14번째 줄
// typedef를 사용하여 구조체의 이름을 다시 정의해주고 있다.

// 13, 18번째 줄
// 재정의한 구조체는 사용하기 위해 구조체임을 명시하는 struct를 입력하지 않아도 된다.