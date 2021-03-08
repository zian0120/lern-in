
/*
for함수에서 사용할 변수 선언
for(시작조건;종결조건;조건변화수식)
{
	명령문;
}
종결조건이 거짓이 되면 반복이 끝난다.
*/

#include<stdio.h>

//1부터 100까지의 숫자를 모두 더한값 출력하기
int zeroto100()
{
	int sum = 0, num;

	for (num = 1; num <= 100; num++)
	{
		printf("num(%d)+sum(%d)=", num, sum);
		sum = num + sum;
		printf("%d\n", sum);
		
	}
	printf("result : num=%d , sum=%d\n", num, sum);
	/*반복문이 끝난뒤 num = 101 이 나옴, 
	num <= 100 조건의 결과값이 거짓이 되어 종료했기 때문.*/
	
	return 0;
}


//구구단 전체 출력
int ShowMultiplication(int step) //step 매개변수 추가해주기
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		//printf("2 * %d = %d\n", i, 2 * i);

		printf("%d * %d = %d\n", step, i, step* i);
	}
}


//시간
int time()
{
	int Utime, Umin;

	printf("시간을 입력해라");
	scanf_s("%d", &Utime);
	printf("분을 입력해라");
	scanf_s("%d", &Umin);

	int time,min;

	for (time = 1; time <= 12; time++)
	{
		for (min = 1;min <= 60; min++)
		{
			if(time==Utime &&min==Umin)
			{
				printf("%d시 %d분\n", time, min);
			}

		}
	}

}

//10000원으로 살수있는 커피,빵,과자의 갯수를 구하라
//거스름돈있으면 출력해라
int buy()
{
	int coffee, bread, snack;
	int money,less;
	
	printf("coffee\tbread\tsnack\tless\n");
	printf("-------------------------------\n");
	
	for (coffee = 1; coffee <= 10; coffee++)
	{
		for (bread = 1; bread <= 10; bread++)
		{
			for ( snack = 1; snack <= 10; snack++)
			{
				money = coffee * 3000 + bread * 2000 + snack * 1000;
				
				if (money <= 10000)
				{
					less = 10000 - money;

					printf("%d \t %d \t %d\t 잔돈:%d\n", coffee, bread, snack, less);
				
				}
			}
		}
	}
}

void Uwhile()
{
	int num = 1;

	while (num <= 10)
	{
		printf("안녕하세요");

		num++;
	}
}

int main()
{
	zeroto100();
	//time();
	buy();
	Uwhile();

	//구구단전체출력
	int m;
	for (m = 2; m <= 9; m++)
	{
		ShowMultiplication(m);
	}
	
}