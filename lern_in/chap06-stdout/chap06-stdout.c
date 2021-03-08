/*
* C표준 라이브러리와 표준 출력함수
*----------------------------------------
#define stdin  (__acrt_iob_func(0))
#define stdout (__acrt_iob_func(1))
#define stderr (__acrt_iob_func(2))
-----------------------------------------
puts가 표준출력함수다
puts(char const* _Buffer);
const : constant(상수형, 불변)
variable : 변수
*/
#include <stdio.h>

#define TITLE "C표준 라이브러리와 표준 출력함수"

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
    puts("표준 스트링 함수!");
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
    printf("putchar() 출력함수\n");
    // putchar(TITLE); // 스트링을 출력할 수 없음
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
    printf("putchar() 출력함수 오류 테스트\n");
    //char rt = putchar(TITLE); // 스트링을 출력할 수 없음
    //putchar('\n');

    char ra = putchar('a');
    putchar('\n');

    // printf("rt(%c), ra(%c)\n", rt, ra);
    printf("ra(%c)\n", ra);
}
