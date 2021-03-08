
//a,b,c에 저장된 값을 포인터로 변수t에 저장해보기

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