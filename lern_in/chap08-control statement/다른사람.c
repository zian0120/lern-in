# include <stdio.h>
void main()
{
    //국어, 영어, 수학 ...총점..평균은  ...  avg=평균 
    //1. 선언..정수-int 실수-double
    int kor, eng, mat, tot; //국어, 영어, 수학,  총점
    double avg;

    //2. 입력...직접대입.-> scanf("자료형", &변수) 
     //kor=60;
    printf("국어점수 입력!");
    scanf("%d", &kor); //국어점수를 키보드에서 입력을 받겠다. 
    fflush(stdin);

    //eng=70;
    printf("영어점수 입력!");
    scanf("%d", &eng); //영어점수를 키보드에서 입력을 받겠다. 
    fflush(stdin);

    //mat=70;   
    printf("수학점수 입력!");
    scanf("%d", &mat); //수학점수를 키보드에서 입력을 받겠다. 




//3. 처리 ....값을 구하는 과정
    tot = kor + eng + mat;
    avg = (double)tot / 3;  // 정수/정수 = 정수... 
//출력
    printf("국어 = %d\n", kor);
    printf("영어 = %d\n", eng);
    printf("수학 = %d\n", mat);
    printf("총점 = %d\n", tot);
    printf("평점 = %6.2f\n", avg);
    //5는 전체자리 .2는 

}