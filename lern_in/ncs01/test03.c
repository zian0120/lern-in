#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int num;
	int user_input;
	int count = 1;

	
	srand(time(NULL));
	num = rand() % 100 + 1;

	printf("Let's start game\n");

	for (;;)
	{
		printf("Input number");
		scanf("%d", &user_input);

		if (user_input == num)
		{
			printf("correct!\n");
			printf("You tried %d times\n", count);
			break;
		}
		else if (user_input > num)
		{
			printf("smaller than input number\n");
		}
		else if (user_input < num)
		{
			printf("larger than input number\n");
		}

		count++;
	}

}