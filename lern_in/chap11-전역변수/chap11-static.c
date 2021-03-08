/*저금통  기능을 지니는 함수를 구현하자
* 이함수는 호출시 전달되는 인자값을 저금통처럼 누적시킨다
* 그리고 누적된 금액을 출력해준다. -1이 입력될때까지 계속해서 진행하도록 main함수를 구성하자
* 제한사항 전역변수 사용하지 않기 static지역변수를 사용하라
*/

#include <stdio.h>


void pig(int money)
{
	static int sum = 0;

	sum = sum + money;

	printf("저금통에 모인돈은 %d원 이다.", sum);

}


int main()
{
	int coin;

	for (;;)
	{
		printf("저금할금액을 입력하시오!\n");

		scanf_s("%d", &coin);

		if (coin == -1)
		{
			break;
		}

		pig(coin);
	}

	return 0;
}
