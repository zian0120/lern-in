/*
* Cǥ�� ���̺귯���� ǥ�� ����Լ�
*----------------------------------------
#define stdin  (__acrt_iob_func(0))
#define stdout (__acrt_iob_func(1))
#define stderr (__acrt_iob_func(2))
-----------------------------------------
puts�� ǥ������Լ���
puts(char const* _Buffer);
const : constant(�����, �Һ�)
variable : ����
*/
#include <stdio.h>

#define TITLE "Cǥ�� ���̺귯���� ǥ�� ����Լ�"

#define PUTCHAR(c) putc((c), stdout)
#define PUTERROR(c) putc((c), stderr)

void putcharTest1();
void putcharTest2();
void putcTest3();
void putsTest4();

void main()
{
    printf("%s\n", TITLE);

    // putcharTest1();
    // putcharTest2();
    // putcTest3();
    putsTest4();
}

void putsTest4()
{
    puts("ǥ�� ��Ʈ�� �Լ�!");
    puts(TITLE);
}

void putcTest3()
{
    putc('A', stdout);
    putc('B', stdout);
    PUTCHAR('C');
    PUTERROR('E');
}

void putcharTest1()
{
    printf("putchar() ����Լ�\n");
    // putchar(TITLE); // ��Ʈ���� ����� �� ����
    putchar('a');
    putchar('\n');
    putchar('b');
    putchar('\n');
    putchar('1');
    putchar('\n');
    putchar(65);
    putchar('\n');
    putchar('A');
    putchar('\n');
}

void putcharTest2()
{
    printf("putchar() ����Լ� ���� �׽�Ʈ\n");
    //char rt = putchar(TITLE); // ��Ʈ���� ����� �� ����
    //putchar('\n');

    char ra = putchar('a');
    putchar('\n');

    // printf("rt(%c), ra(%c)\n", rt, ra);
    printf("ra(%c)\n", ra);
}
