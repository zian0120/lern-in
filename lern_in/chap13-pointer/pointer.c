
//a,b,c�� ����� ���� �����ͷ� ����t�� �����غ���

#include <stdio.h>

int main()
{
	char a = 0x12, b = 0x34;
	short c = 0x5678;
	int t;
	
	char* ptr = (char*)&t;

	*(short*)ptr = c; //.. 78 56 ?? ?? ..
	*(ptr + 2) = b;   //.. 78 56 34 ?? ..
	*(ptr + 3) = a;   //.. 78 56 34 12

	printf("0x%x", t);
	
	return 0;

}