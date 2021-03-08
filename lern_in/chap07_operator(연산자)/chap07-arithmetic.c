/*
* chap-arithmetic.c
* �������
*/

#include <stdio.h>

/*
* ���� ������
* ���׿�����(++, --)
* ����: �ӵ��� ������.
*/
void arithPlusMinus()
{
	int x = 5;

	// ������
	x++; // x = x + 1
	x--; // x = x - 1

	// ������
	++x; // x = x + 1
	--x; // x = x - 1

	printf("x=%d\n", x);

	int p1 = ++x; // x�� ���� 1 ���� �Ŀ� �� ����� p1�� ����
	int p2 = x++; // x�� ���� p1�� ������ �� x�� 1�� ���Ѵ�.
	int m1 = --x; // x�� ���� 1 �� �Ŀ� �� ����� m1�� ����
	int m2 = x--; // x�� ���� m1�� ������ �� x���� 1�� ����.

	printf("p1(%d), p2(%d), m1(%d), m2(%d)\n", p1, p2, m1, m2);
}


/*
* �⺻ ������
*/
void arithBasic()
{
	int data1 = 5, data2 = 3;   /* �� ������ �ʱⰪ�� 5�� 3���� ���� */

	int result1 = data1 + data2;       /* ����           */
	int result2 = data1 * data2;       /* ����            */
	int result3 = data1 / data2;       /* ������ (��)     */
	int result4 = data1 % data2;       /* ������ (������) */

	printf("result : %d, %d, %d, %d\n", result1, result2, result3, result4);
}

/*
* �⺻ ������
*/
void arithBasic2()
{
	float data1 = 5.0f, data2 = 3.0f;   /* �� ������ �ʱⰪ�� 5�� 3���� ���� */

	float result1 = data1 + data2;       /* ����           */
	float result2 = data1 * data2;       /* ����            */
	float result3 = data1 / data2;       /* ������(��.�Ҽ�������)     */

	printf("result : %f, %f, %20.10f %20.10f \n",
		result1, result2, result3, (data1 / data2));
}

void main()
{
	arithBasic();
	arithBasic2();
	arithPlusMinus();
}
