#include <stdio.h>

///////곱셈하기/////////
int mult(int num1, int num2)
{
	int result = num1 * num2;

	return result;
}

int multiply()
{
	int Unum1, Unum2;
	int count = 0;

	for (;;)
	{
		printf("곱셈을 해보겠습니다.\n첫번째 숫자를 입력하시오!\n");
		scanf_s("%d", &Unum1);
		printf("두번째 숫자를 입력하시오.\n");
		scanf_s("%d", &Unum2);

		int result = mult(Unum1, Unum2);

		printf("두수를 곱한값은 %d입니다!\n", result);

		if (Unum1 == 0 && Unum2 == 0)
		{
			break;
		}

		count++;
	}
	printf("연산은 %d번 하였습니다.\n", count);
}

void ctn()
{
	int m, n;

	for (m = 5; m < 7; m++)
	{
		for (n = 0; n < 3; n++)
		{

			if (m == 5 && n == 1)continue;
			//다시 처음으로 돌아가서 다음진행
			//설정된 m(5) - n(1)은 삭제된 값이 출력.

			printf("m(%d) - n(%d)\n", m, n);
		}
	}

}

void main()
{
	multiply();
	ctn();
}