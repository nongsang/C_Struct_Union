#include <stdio.h>

struct Student
{
	char no[11];	// char no[10];			// 이 부분 유심하자
	char name[20];
	double total;
};

int main()
{
	struct Student stu = { "2011181026", "Shin", 105 };
	struct Student* p = { NULL };
	struct Student** pp = { NULL };

	p = &stu;
	pp = &p;

	printf("stu\n");
	printf("stu.no : %s\n" , stu.no);
	printf("stu.name: %s\n" , stu.name);
	printf("stu.total : %f\n", stu.total);

	printf("\n");

	printf("p\n");
	printf("p->no : %s\n", p->no);				// p->no == (*p).no
	printf("p->name: %s\n", p->name);			// p->name == (*p).name
	printf("p->total : %f\n", p->total);		// p->total == (*p).total

	printf("\n");

	printf("pp\n");
	printf("(*pp)->no : %s\n", (*pp)->no);				// (*pp)->no == (**pp).no
	printf("(*pp)->name: %s\n", (*pp)->name);			// (*pp)->name == (**pp).name
	printf("(*pp)->total : %f\n", (*pp)->total);		// (*pp)->total == (**pp).total
}
// 5번째 줄
// 문자열을 저장하는 경우 문자열의 길이 + 1 로 배열을 정하자
// 문자열의 길이로 배열을 정하는 경우 바로 뒤에 오는 문자열이 배열에 추가된다.
// 따라서 2011181026Shin으로 출력이 된다.
// 10번째에 '\0'이 6으로 저장이 되면서 그대로 출력을 하게 된다.
// 따라서 '\0'이 나올때까지 출력하게 된다.

// 26 ~ 29번째 줄
// 구조체를 포인터로 정의했을 경우 접근 방식이다.
// ->연산자를 통하여 접근을 한다.
// (*p).no으로 포인터임을 명시해도 좋지만 ->가 좀더 직관적이다.

// 34 ~ 36번째 줄
// 구조체 이중 포인터를 접근하는 방식이다.
// (**pp).no로 출력할 수 있지만 (*pp)->no로 출력이 가능하다.