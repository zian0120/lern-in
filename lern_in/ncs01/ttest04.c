#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


typedef struct  _student
{
	char name[10];
	int ban;
	int no;
	int kor;
	int eng;
	int math;
}STUDENT;

#define DATA_FILE_PATH "c:\\Workspace\\data_student.dat"

int getTotal(STUDENT* p_data)
{
	return p_data->kor + p_data->math + p_data->eng;
}

float getAverage(STUDENT* p_data)
{
	float avg = (p_data->kor + p_data->math + p_data->eng) / 3.0f;
	int temp = (avg + 0.005) * 100.0;
	float round_avg = temp / 100.0;

	return round_avg;
}

int main(void)
{
	int num_menu = 0;
	while (1)
	{
		printf("----------------------------------------------------------\n");
		printf("1. Input student information\n");
		printf("2. Print all student information\n");
		printf("Select menu (1~2): ");

		scanf("%d", &num_menu);

		if (num_menu == 1)
		{
			STUDENT data = { 0, };
			FILE* fp;
			int size_data = sizeof(STUDENT);
			void* p_data = (void*)&data;

			printf("--------------------------------------------------------\n");
			printf("Name : ");
			scanf("%s", data.name);

			printf("Class : ");
			scanf("%d", &(data.ban));

			printf("Student No: ");
			scanf("%d", &(data.no));

			printf("Korean score : ");
			scanf("%d", &(data.kor));

			printf("English score : ");
			scanf("%d", &(data.eng));

			printf("Math score : ");
			scanf("%d", &(data.math));

			fp = fopen(DATA_FILE_PATH, "ab+");

			fwrite(p_data, 1, size_data, fp);

			fclose(fp);
		}
		else if (num_menu == 2)
		{
			FILE* fp = NULL;

			fp = fopen(DATA_FILE_PATH, "rb+");

			if (fp == NULL)
			{
				printf("No data file exists. %s \n Please input data first\n", DATA_FILE_PATH);

				continue;
			}
			else
			{
				int size_file = 0;
				int size_data = sizeof(STUDENT);
				int data_count = 0;

				void* p_buffer = 0;

				STUDENT* p_data;

				fseek(fp, 0, SEEK_END);
				size_file = ftell(fp);
				rewind(fp);				

				if (size_file % size_data != 0)
				{
					printf("Data file is corrupted. Please delete file and input data again\n");
					fclose(fp);					

					break;
				}
				else
				{
					p_buffer = malloc(size_file);
					memset(p_buffer, 0x00, size_file);

					fread(p_buffer, 1, size_file, fp);

					data_count = size_file / size_data;
					p_data = (STUDENT*)p_buffer;

					printf("----------------------------------------------------------\n");
					printf("Name\tClass\tNo\tKor\tEng\tMath\tTotal\tAvg\n");

					for (int i = 0; i < data_count; i++)
					{						
						printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", p_data->name, p_data->ban, p_data->no, p_data->kor, p_data->eng, p_data->math, getTotal(p_data), getAverage(p_data)); 

						p_data++; 
					}

					free(p_buffer);
				}

				fclose(fp);
			}
		}
		else
		{
			printf("Program terminated\n");
			break;
		}

	}
}