/*
* printf(...) 함수 예제
*/
#include <stdio.h>
#include <limits.h>

#define TITLE "C표준 라이브러리와 표준 출력함수(printf)"

#define MAX_CHAR    127
#define MAX_SHORT   32767
#define MAX_INT     2147483647
#define MAX_UCHAR   0xff        // 256 의 16진수
#define MAX_USHORT  0xffff      // 65535 의 16진수
#define MAX_UINT    0xffffffff  // 4294967295 의 16진수

void printBasic();
void printWidth();
void printUnsigned();
void printUnsignedChar();
void printOct();
void printHex();
void printExponent();
void printControlCode();
void printControlTab();
void printCR();

void main()
{
    printf("%s\n", TITLE);
    // printBasic();
    // printWidth();
    // printUnsigned();
    // printUnsigned();
    // printUnsignedChar();
    // printOct();
    // printHex();
    // printExponent();
    // printControlCode();
    // printControlTab();
    printCR();
}

/*
* Windows: CRLF(\r\n), 0x0d0x0a
* Linux: LF(\n), 0x0a
* Mac: CR(\r), 0x0d
*/
void printCR()
{
    printf("         *         *         *         *\n");
    printf("1234567890123456789012345678901234567890\n");
    printf("1234567890\rabc");
}

/*
* 탭(tab) : \t
* 기본 : 8자리(바이트)
* 일반적으로 4자리
*/
void printControlTab()
{
    printf("         *         *         *         *\n");
    printf("1234567890123456789012345678901234567890\n");
    printf("a\tab\tdef\tg\th");
}
/*
* 백슬래시(\):
* 출력: \, %, "
*/
void printControlCode()
{
    printf("'소크라테스'가 \\이렇게 말했습니다.\\ \"너 자신을 알라\"라고!\n");
    printf("올해의 실적은 150(%%) 성장하였습니다.\n");
}

void printExponent()
{
    float f = 12.13f;
    printf("float: (%f), (%e), (%E)\n", f, f, f);
}

void printOct()
{
    printf("oct: char(%o), short(%o), int(%o), uchar(%o), ushort(%o), uint(%o)\n",
        MAX_CHAR, MAX_SHORT, MAX_INT, MAX_UCHAR, MAX_USHORT, MAX_UINT);
}
void printHex()
{
    printf("oct: char(%x), short(%x), int(%x), uchar(%x), ushort(%x), uint(%x)\n",
        MAX_CHAR, MAX_SHORT, MAX_INT, MAX_UCHAR, MAX_USHORT, MAX_UINT);
}

void printUnsignedChar()
{
    int sx = MAX_INT;
    unsigned int ux = MAX_UINT;
    printf("int(%d)(%u), unsigned int(%u) \n", sx + 1, sx, ux);
}

/*
* 부호없는 정수 출력(%u)
*/
void printUnsigned()
{
    printf("char(%3c), short(%5d), int(%10d)\n", MAX_CHAR, MAX_SHORT, MAX_INT);
    printf("char(%3c), short(%5d), int(%10u)\n", MAX_UCHAR, MAX_USHORT, MAX_UINT);
}


void printWidth()
{
    char ch = 'a';
    short st = 1234;
    int integer = 1234567890;
    float real = 0.123456f;
    double real2 = 0.123456789;

    /*
     * [출력폭] [ % + 전체칸수 + d ] [ % + 전체자리수 + . + 소수점 자리수 + f ]
     * 1. 오른쪽 정렬
     * 2. 지정된 자릿수보다 값이 크면 자릿수는 무시
     * 3. 실수(%10f)는 자리수에 소숫점이 포함, 소숫점 이하는 기본 6자리
     * 4. 실수(%20.10f)는 전체 자릿수는 20자리, 소숫점 이하는 10자리, 소숫점은 전체 자릿수에 포함
    */
    printf("char(%4c), short(%5d), int(%5d), float(%9.6f), double(%15f)(%15.10f)\n",
        ch, st, integer, real, real2, real2);
    printf("char(%-4c), short(%-5d), int(%-5d), float(%-9.6f), double(%-15f)(%-15.10f)\n",
        ch, st, integer, real, real2, real2);
}
void printBasic()
{
    char ch = 'a';
    short st = 1234;
    int integer = 1234567890;
    float real = 0.123456f;
    double real2 = 0.123456789;

    // format: 실수형 -> %f는 기본적으로 소숫점 이하 6자리까지 출력
    // format: 실수형 -> %.10f
    printf("char(%c), short(%d), int(%d), float(%f), double(%.10f)\n",
        ch, st, integer, real, real2);

    printf("char(%c), short(%d), int(%d), float(%f), double(%.10f)\n",
        'b', 4321, 987654321, 0.654321, 0.987654321);
}