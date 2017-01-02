#include <stdio.h>

struct Student
{
	char no[10];
	char name[20];
	double total;
};

int main()
{
	struct Student student[3];			// 구조체를 배열로 만들어서 3개를 생성
	int i = 0;

	for (i = 0; i < 3; ++i)
	{
		printf("학번 이름 총점 순으로 입력하세요\n");
		scanf("%s %s %lf", student[i].no, student[i].name, &student[i].total);	// 배열에 문자열을 저장할 때 &를 쓰지 않는다.
	}
	
	printf("\n");

	//student[1].no = "234";			// 불가능
	//student[1].name = "바보";			// 불가능
	student[1].total = 34;

	strcpy(student[1].no, "234");
	strcpy(student[1].name, "바보");

	for (i = 0; i < 3; ++i)
	{
		printf("학번 : %s\n", student[i].no);
		printf("이름 : %s\n", student[i].name);
		printf("총점 : %f\n", student[i].total);
	}
}
// 5, 6번째 줄
// 멤버변수를 배열로 정의하였다.

// 12번째 줄
// 구조체를 배열로 만들어서 3개를 생성한다.

// 18번째 줄
// 배열에 문자열을 저장할 때에는 &를 쓰지 않는다.
// 배열의 이름은 주소값을 가리키므로 배열 자체가 주소값으로 들어가기 때문이다.

// 23, 24번째 줄
// 배열에 문자열을 할당하는 수행을 하고 있다.
// 하지만 가능하지 않다.

// (매우 중요~~~~~~~~~~~~~~~~~~~)
// no, name은 배열이다.
// 배열의 이름은 주소값을 나타내며 주소값에 문자열을 저장한다고 해석해야한다.
// 주소값에 문자열을 저장하는 것은 타당하지 않으므로 부정된다.

// 25번째 줄
// 구조체 안의 total은 double형 변수 이므로 할당이 가능하다.

// 27, 28번째 줄
// 23, 24번째 줄의 기능을 수행하는 방법이다.
// strcpy를 사용하여 할당한다.
// 나중에 다시 설명한다.