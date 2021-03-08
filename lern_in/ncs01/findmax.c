
   

#include <stdio.h>
#include <string.h>





//정수 10개를 입력받아 홀수이면 처음부터 저장하고 짝수이면 뒤에서부터 저장..
 //   1 2                      0                   9
//예) 1,2,3,4,5,6,7,8,9,10   => 1,3,5,7,9,10,8,6,4,2
int a[10];

void main() 
{
    //////////////////////////////////////////맥스값 구하기
    int a[] = { 45,64,32,46,87,49,15,43,55,71,88 };

    int max;
    max = callmax(a, sizeof(a) / sizeof(int));


    printf("max = %5d", max);
}

int callmax(int b[], int k)
{
    int i = 0, j, max = b[i];

    for (i = 0; i < k; i++)
    {
        if (b[i] >= max)
            max = b[i];
    }
    return max;


}

#include <stdio.h>
#include <string.h>
# define pr printf
int a[10];
void  callinput();
void  calleven(int aa);
void  callodd(int aa);
void  callout();

void main()
{
    callinput();
    callout();
}
void  callinput()
{

    int i, su, na;
    for (i = 0; i < 10; i++)
    {
        pr("수를 입력?");
        scanf("%d", &su);
        na = su % 2;
        if (na == 0) //짝 수  
        {
            calleven(su);
        }
        else //홀 수  
        {
            callodd(su);
        }
    }
}
void    calleven(int aa)
{
    static int p2 = 0; // 입력한 수의 짝수의  수 뒤에서 부터.. 
    a[9 - p2] = aa;
    p2++;
}
void    callodd(int aa)
{
    static   int p1 = 0; // 입력한 수의 홀수 의   수 앞에서ㅜ부터  
    a[p1] = aa;
    p1++;
}
void callout()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        pr("%5d", a[i]);
    }
    pr("\n");
}