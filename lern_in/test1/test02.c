/*
* 5 명의 이름을 입력받아 내림차순정렬
*/

#include <stdio.h>
#include <string.h>




void main(void)
{
	char name[5][10];
	int i,j; 

	for(i = 0; i < 5; i++)
	{
		printf("Input name");
		gets(name[i]);
	}

	char temp[10];

	for (i = 0; i<5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (strcmp (name[i],name[j]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s", name[i]);
		printf("\n");
	}
}

