
   

#include <stdio.h>
#include <string.h>





//���� 10���� �Է¹޾� Ȧ���̸� ó������ �����ϰ� ¦���̸� �ڿ������� ����..
 //   1 2                      0                   9
//��) 1,2,3,4,5,6,7,8,9,10   => 1,3,5,7,9,10,8,6,4,2
int a[10];

void main() 
{
    //////////////////////////////////////////�ƽ��� ���ϱ�
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
        pr("���� �Է�?");
        scanf("%d", &su);
        na = su % 2;
        if (na == 0) //¦ ��  
        {
            calleven(su);
        }
        else //Ȧ ��  
        {
            callodd(su);
        }
    }
}
void    calleven(int aa)
{
    static int p2 = 0; // �Է��� ���� ¦����  �� �ڿ��� ����.. 
    a[9 - p2] = aa;
    p2++;
}
void    callodd(int aa)
{
    static   int p1 = 0; // �Է��� ���� Ȧ�� ��   �� �տ����̺���  
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