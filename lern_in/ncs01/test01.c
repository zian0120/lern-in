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

	printf("1���� 20 ������ ������ 2�Ǵ� 3�� ����� �ƴ� ���� ������ %d��.", total);

}