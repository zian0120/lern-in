#include <stdio.h>
#include <stdbool.h>
#include <string.h>



//���Ǽ���//������ ����� ��ȯ
void change_num()
{
	int result = -5;

	result = (result < 0) ? result = result * (-1) : 0;

	printf("��� = %d\n", result);

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
	bool a; //���� ���� true -1 false 0
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


//���� ���� �Է� ���� 90�̻� A,80�̻� B,70�̻� C ,60 �̻� D
void score()
{
	int score;
	char grade;
	printf("�����Է�?");
	scanf_s("%d", &score);


	if (score >= 90) 
	{
		grade = 'A';
	}
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade  = 'F';

	printf("����=%d\n", score);
	printf("���� = %c\n", grade);


}

//������ ����
int game()
{
	int infront;
	char pp[5];
	printf("�����̽���!");
	scanf_s("%d", &infront);

	if (infront == 1) strcpy_s(pp, "��");
	else if (infront == 2) strcpy_s(pp, "��");
	else if (infront == 3) strcpy_s(pp, "��");
	else if (infront == 4) strcpy_s(pp, "��");
	else if (infront == 5) strcpy_s(pp, "��");
	else strcpy_s(pp, "��");


	printf("%d= %s\n", infront, pp);

	return 0;

}

//������ ������ switch ����
int game_switch()
{
	int infront;
	char pp[5];
	printf("�����̽���!");
	scanf_s("%d", &infront);

	switch (infront)
	{
	case 1:
		strcpy_s(pp, "��");
		break;
	case 2:
		strcpy_s(pp, "��");
		break;
	case 3:
		strcpy_s(pp, "��");
		break;
	case 4:
		strcpy_s(pp, "��");
		break;
	case 5:
		strcpy_s(pp, "��");
		break;

	default:
		strcpy_s(pp, "��");
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