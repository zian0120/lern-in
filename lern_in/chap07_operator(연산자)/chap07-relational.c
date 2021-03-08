/*
* 관계 연산자(Relational Operator)
* ----------------------------
* 1. 참(true)과 거짓(false) : 1, 0
* 2. 크다 : >
* 3. 크거나 같다 : >=
* 4. 작다 : <
* 5. 작거나 같다 : <=
* 6. 같지 않다 : !=
* 7. 같다 : ==
* ----------------------------
* 관계식의 결과 0 또는 1이 나온다.
*/

#include <stdio.h>

void RelationalOper1();
void RelationalOper2();


void main()
{
	RelationalOper1();
	RelationalOper2();
}

void RelationalOper1()
{
	char t = 1, f = 0;
	int x = 10, y = 5;

	printf("1. tf : t(%d), f(%d)\n", t, f);
	printf("2. >  : x(%d), y(%d) = (%d)\n", x, y, x > 5);
	printf("3. >= : x(%d), y(%d) = (%d)\n", x, y, x >= 5);
	printf("4. <  : x(%d), y(%d) = (%d)\n", x, y, x < 5);
	printf("5. <= : x(%d), y(%d) = (%d)\n", x, y, x <= 5);
	printf("6. != : x(%d), y(%d) = (%d)\n", x, y, x != 5);
	printf("7. == : x(%d), y(%d) = (%d)\n", x, y, x == 5);
}

void RelationalOper2()
{
	char t = 1, f = 0;
	int x = 10, y = 5;

	int r1 = x > 5;
	int r2 = x >= 5;
	int r3 = x < 5;
	int r4 = x <= 5;
	int r5 = x != 5;
	int r6 = x == 5;

	printf("1. tf : t(%d), f(%d)\n", t, f);
	printf("2. >  : x(%d), y(%d) = (%d)\n", x, y, r1);
	printf("3. >= : x(%d), y(%d) = (%d)\n", x, y, r2);
	printf("4. <  : x(%d), y(%d) = (%d)\n", x, y, r3);
	printf("5. <= : x(%d), y(%d) = (%d)\n", x, y, r4);
	printf("6. != : x(%d), y(%d) = (%d)\n", x, y, r5);
	printf("7. == : x(%d), y(%d) = (%d)\n", x, y, r6);
}