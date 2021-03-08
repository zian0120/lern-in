#include <stdio.h>

int main(void)
{
	int i;
	int total = 0;

	for (i = 0; i <= 20; i++)
	{
		if ((i % 2 != 0) && (i % 3 != 0))
		{
			total = total + i;
		}
	}

	printf("1부터 20 까지의 정수중 2또는 3의 배수가 아닌 수의 총합은 %d다.", total);

}