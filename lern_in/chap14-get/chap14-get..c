#include <stdio.h>

void input_char(void)
{
	int  input_data = getchar();
	rewind(stdin);
	printf("first input : %c\n", input_data);

	input_data = getchar();
	rewind(stdin);
	printf("second input : %c\n", input_data);
}

void input_str()
{
	char name[20];
	printf("Input your name : ");

	if (NULL != gets(name))
	{
		printf("Your name is : %s\n", name);
	}
	else
	{
		printf("input -> canceled\n");
	}
}

int ArrayToInt(char string[ ])
{
	int count = 0, num = 0;
	while (string[count] != 0)
	{
		num = num * 10 + string[count] - '0';
		count++;
	}
	return num;
}

void A_I()
{
	int first_num, second_num;
	char first_string[16], second_string[16];

	printf("input first number : ");
	gets(first_string);

	printf("input second number : ");
	gets(second_string);

	first_num = ArrayToInt(first_string);
	second_num = ArrayToInt(second_string);

	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);

}









void main(void)
{
	input_char();
	input_str();

}
