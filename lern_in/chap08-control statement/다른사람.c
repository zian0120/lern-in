# include <stdio.h>
void main()
{
    //����, ����, ���� ...����..�����  ...  avg=��� 
    //1. ����..����-int �Ǽ�-double
    int kor, eng, mat, tot; //����, ����, ����,  ����
    double avg;

    //2. �Է�...��������.-> scanf("�ڷ���", &����) 
     //kor=60;
    printf("�������� �Է�!");
    scanf("%d", &kor); //���������� Ű���忡�� �Է��� �ްڴ�. 
    fflush(stdin);

    //eng=70;
    printf("�������� �Է�!");
    scanf("%d", &eng); //���������� Ű���忡�� �Է��� �ްڴ�. 
    fflush(stdin);

    //mat=70;   
    printf("�������� �Է�!");
    scanf("%d", &mat); //���������� Ű���忡�� �Է��� �ްڴ�. 




//3. ó�� ....���� ���ϴ� ����
    tot = kor + eng + mat;
    avg = (double)tot / 3;  // ����/���� = ����... 
//���
    printf("���� = %d\n", kor);
    printf("���� = %d\n", eng);
    printf("���� = %d\n", mat);
    printf("���� = %d\n", tot);
    printf("���� = %6.2f\n", avg);
    //5�� ��ü�ڸ� .2�� 

}