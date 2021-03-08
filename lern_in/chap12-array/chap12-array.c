#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int sum_array()
{
	int a[5] = { 12,30,65,4,50 };
	
	int sum = 0;
	int i;

	for(i = 0;i<=sizeof(a) / sizeof(int);i++)
	{
		sum += a[i];
	}
	printf("인덱스값의 합은 %d이다.\n", sum);

}

//점수 입력받고 학생총점이랑 과목별 총점 값 구하기
int name(void)
{

	int score[5][5] = { 0, };
	char name[4][16] = { "철희","철수","영희","영수" };
	char sub[4][16] = { "국어","영어","수학","도덕" };
	int n, s, i, j;
	int total = 0;



	for (n = 0; n < 4; n++)
	{
		int total = 0;

		for (s = 0; s < 4; s++)
		{
			printf("%s의 %s점수를 입력하시오!\n", name[n], sub[s]);
			scanf_s("%d", &score[n][s]);
			total = (total + score[n][s]);
		}
		score[n][4] = total;
	}

	for (i = 0; i < 4; i++)
	{
		int total = 0;

		for (j = 0; j < 4; j++)
		{
			total = (total + score[j][i]);
		}
		score[4][i] = total;
	}

	for (n = 0; n <= 4; n++)
	{
		for (s = 0; s <= 4; s++)
		{
			printf("%5d", score[n][s]);
		}
		printf("\n");
	}
}


void lotto()
{
	srand((int)time(NULL));

	int a, i, j = 0, p = 0; //a:1-45 i=반복위치
	int lotto[6] = { 0, };

	while (1)
	{
		a = (rand() % 45) + 1; //1-45 임의의 수 발생

		for (i = 0; i < j; i++)
		{
			if (lotto[i] == a)
				p++; //p가 증가 하면 중복값이 존재
		}

		if (p == 0) //중복이 없다
			lotto[j] = a; //5
		else
			j--; //중복발생시 갯수는 1감소

		j++;

		if (j == 6)
		{
			break;
		}
	}
	
	////////////////////////////정렬//////////////////////
	
	int temp;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (lotto[i] < lotto[j])
			{
				temp = lotto[i];
				lotto[i] = lotto[j];
				lotto[j] = temp;
			}
		}
	}

	for (i = 0; i <= 5; i++)
	{
		printf("%5d", lotto[i]);
	}

}


void main()
{
	sum_array();
	name();
	lotto();
}