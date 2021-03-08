/*
* chap07-operator.c
* ������ ����
* ------------------------------------------------
* 1. ���Կ�����, ���������, ����������, ���迬����, ��������
* 2. �������� �켱������ �������
*/

#include <stdio.h>

#define MAX_CHAR    127
#define MAX_SHORT   32767
#define MAX_INT     2147483647
#define MAX_UCHAR   0xff        // 256
#define MAX_USHORT  0xffff      // 65535
#define MAX_UINT    0xffffffff  // 4294967295

void assignInt();
void assignUInt();
void assignFloatDouble();
void assignCasting();
void assignCastingReal();
void assignLoss();

void main()
{
	//assignInt();
	//assignUInt();
	//assignFloatDouble();
	//assignCasting();
	//assignCastingReal();
	assignLoss();
}

/*
* ���Կ�����(=), ���ٴ� �� �ƴ�.
* a�� b�� ����(a -> b) : b = a
*
* 1. ������ �Ǵ� ����� ���� ���� �������.
* 2. ������ �ڷ���
*    - char & char
*    - short & short
*    - int & int
*    - float & float
*    - double & double
* 3. ���� ������ �ڷ������� ���� �ڷ����� ũ�Ⱑ �ٸ���� �������� �ս�?
*    - signed, unsigned
*    - float(e38), double(e308) : ��ȿ�ڸ�, ������ ũ��
*/
void assignInt()
{
	int a = 1; // signed(��ȣ�� �ִ� ����)
	int b = 2;
	b = a; // b�� �������� �������.

	int c = b;

	int dd = 32767;
	char cc = dd;


	printf("a�� b�� ����(a=b), a(%d), b(%d)\n", a, b);
	printf("����� ���ÿ� c�� b�� ����(c=b), c(%d), b(%d)\n", c, b);
	printf("int -> char�� �ϰ� �Ǹ� ������ �ս� dd(%d), cc(%d)\n", dd, cc);
}

/*
* ���(+)�� ���� signed���� unsigned�� ������ ���� ������ ����
* ����(-)�� ���� signed���� unsigned�� ������ ���� ������ �߻�
  - �������ο찡 �߻��ϸ� minus(-)�� �ȴ�.
  - �� ���� unsigned�� �����ϰ� �Ǹ� �������� ���� ���� �� �ִ�.
*/
void assignUInt()
{
	int plus = 1;
	int sd = MAX_INT + plus;
	unsigned int ud = sd;

	printf("sd(%d), ud(%u)\n", sd, ud);
}

/*
* float���� Double�� ��������.
* Double���� float�� ������ �ϰԵǸ� �ս� �߻�.
*/
void assignFloatDouble()
{
	float a = 0.123456f; // �� �ڿ� f�� �ٿ��� ��.
	double b = 0.123456789; // �� ���� f�� ������ double��.

	printf("float: a(%f)\n", a); // �⺻ 6�ڸ����� ���
	printf("double: b(%15.10f)\n", b);

	// float c = b; // �սǹ߻�
	// printf("double->float: b(%15.10f)->c(%15.10f)\n", b, c);
}


/*
 * 3. ������ �ڷ����� �ٸ��� ĳ����(casting)�� �ؾ��Ѵ�.
 *    - int���� char�� ĳ������ �ϰ� �Ǹ� ������ �ս��� �߻��� �� �ִ�.
 *    - ĳ������ �ϰ� �Ǹ� �����Ϸ� ��� �߻����� �ʴ´�.
 */
void assignCasting()
{
	char c = 'A'; // 1����Ʈ ����, 1����Ʈ ����ó�� ���ȴ�.
	short cs = c; // 2����Ʈ ����
	int cx = c;   // 4����Ʈ ����

	float ff = 89.12345f;
	int df = (int)ff;       // �Ҽ��������� ���� �ҽ�
	float f1 = (float)df;   // 

	int dm = MAX_INT;
	float f2 = (float)dm;

	printf("char -> short�� ĳ������ �ʿ� ����. c(%c), cx(%c)(%d)\n", c, cs, cs);
	printf("char -> int�� ĳ������ �ʿ� ����. c(%c), cx(%c)(%d)\n", c, cx, cx);
	printf("float(%f) -> int(%d)\n", ff, df);
	printf("int(%d) -> float(%f)\n", df, f1);
	printf("int(%d) -> float(%f)\n", dm, f2);
}

void assignCastingReal()
{
	float a = 0.123456f; // �� �ڿ� f�� �ٿ�����
	double b = 0.123456789; // �� ���� f�� ������ double ��
	float c = (float)b; // �սǹ߻�

	printf("float: a(%f)\n", a); // �⺻ 6�ڸ����� ���
	printf("double: b(%15.10f)\n", b);
	printf("double->float: b(%15.10f)->c(%15.10f)\n", b, c);
}

/*
* ū �ڷ����� �����͸� ���� �ڷ������� �����ϸ� �ս��� �߻��� �� �ִ�.
*/
void assignLoss()
{
	int d1 = 255;
	int d2 = 256;
	char c1 = (char)d1;
	char c2 = (char)d2;

	printf("d1(%d)(%08x), d2(%d)(%08x), c1(%d)(%x), c2(%d)(%x)\n", d1, d1, d2, d2, c1, c1, c2, c2);
}
