#include <stdio.h>
#include <stdbool.h>
#include <string.h>



//조건수식//음수를 양수로 전환
void change_num()
{
	int result = -5;

	result = (result < 0) ? result = result * (-1) : 0;

	printf("결과 = %d\n", result);

}

void grade()
{
	int a;
	a = 95;

	if (a >= 90)
	{
		printf("A\n");
	}
	else
	{
		printf("B\n");
	}
}

void T_F()
{
	bool a; //논리형 변수 true -1 false 0
	a = 43 > 10;

	if (a)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}


//국어 점수 입력 학점 90이상 A,80이상 B,70이상 C ,60 이상 D
void score()
{
	int score;
	char grade;
	printf("점수입력?");
	scanf_s("%d", &score);


	if (score >= 90) 
	{
		grade = 'A';
	}
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade  = 'F';

	printf("점수=%d\n", score);
	printf("학점 = %c\n", grade);


}

//윷놀이 게임
int game()
{
	int infront;
	char pp[5];
	printf("윷놀이시작!");
	scanf_s("%d", &infront);

	if (infront == 1) strcpy_s(pp, "도");
	else if (infront == 2) strcpy_s(pp, "개");
	else if (infront == 3) strcpy_s(pp, "걸");
	else if (infront == 4) strcpy_s(pp, "윷");
	else if (infront == 5) strcpy_s(pp, "모");
	else strcpy_s(pp, "꽝");


	printf("%d= %s\n", infront, pp);

	return 0;

}

//윷놀이 게임의 switch 버전
int game_switch()
{
	int infront;
	char pp[5];
	printf("윷놀이시작!");
	scanf_s("%d", &infront);

	switch (infront)
	{
	case 1:
		strcpy_s(pp, "도");
		break;
	case 2:
		strcpy_s(pp, "개");
		break;
	case 3:
		strcpy_s(pp, "걸");
		break;
	case 4:
		strcpy_s(pp, "윷");
		break;
	case 5:
		strcpy_s(pp, "모");
		break;

	default:
		strcpy_s(pp, "꽝");
		break;
	}


	printf("%d= %s\n", infront, pp);

	return 0;

}

void main()
{
	change_num();
	score();
	game();
	game_switch();
	grade();
	T_F();
}