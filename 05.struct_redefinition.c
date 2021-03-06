#include <stdio.h>

typedef struct Score		// typedef를 사용
{
	double math;
	double english;
	double average;
} score;					// 재정의

struct Student
{
	int no;
	score s;				// 재정의한 구조체의 사용
};
typedef struct Student student;					// 재정의

int main()
{
	student stu = { 203, {49, 20, 0} };				// 구조체 초기화 방법

	stu.s.average = stu.s.math + stu.s.english / 2;

	printf("학번 : %d\n", stu.no);
	printf("평균점수 : %.1f\n", stu.s.average);
}
// 3, 10번째 줄
// 구조체 앞에 typedef를 사용하였다.

// 8, 15번째 줄
// typedef를 사용하여 구조체의 이름을 다시 정의해주고 있다.
// 구조체를 재정의하는 방법 2가지가 있다.
// 1. 3, 8번째 줄
//    구조체 앞에 typedef를 사용하여 구조체 뒤에 이름을 적는다.
// 2. 15번째 줄
//	  구조체 정의 후 따로 typedef를 사용하여 정의

// 13, 18번째 줄
// 재정의한 구조체는 사용하기 위해 구조체임을 명시하는 struct를 입력하지 않아도 된다.