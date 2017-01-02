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
	struct Score s;				// Student 구조체 안에 Score 구조체를 넣어서 정의를 해줬다.
};

int main()
{
	//struct Student stu = { 203, 49 ,20 ,0 };		// 구조체의 초기화는 차례대로 저장하면 된다.	
	struct Student stu = { 203, {49, 20, 0} };		// 구조체를 구분해주기 위해 괄호로 묶어주면 좋다.

	stu.no = 2011181026;
	stu.s.math = 90.3;
	stu.s.english = 85.3;
	stu.s.total = stu.s.math + stu.s.english;

	printf("학번 : %d\n", stu.no);
	printf("평균점수 : %.1f\n", stu.s.total/2);
}
// 13번째 줄
// Student 구조체 안에 Score 구조체를 생성하여 정의했다.
// Student 구조체를 만들 때 이미 정의된 구조체를 재활용하여 만든 것.
// C++의 상속의 개념과 같다.

// 18, 19번째 줄
// 중첩 구조체를 초기화 하는 방법이다.
// 1. 순서대로 저장
// 2. 구조체를 구분하여 {}로 저장

// 21 ~ 24번째 줄
// 구조체 멤버변수에 값을 할당하는 방법
// 중첩된 구조체는 접근 연산자를 중첩으로 사용하여야 한다.