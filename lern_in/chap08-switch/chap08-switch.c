#include <stdio.h>
#include <string.h>

int game();
int game_switch();

int main()
{
	game();
	game_switch();
}


//윷놀이 게임
int game()
{
	int infront;
	char pp[5];
	printf("윷놀이시작!");
	scanf_s("%d", &infront);

	if (infront == 1) strcpy_s(pp, "도");
	else if (infront == 2) strcpy_s(pp, "개");
	else if (infront == 3) strcpy_s(pp, "걸");
	else if (infront == 4) strcpy_s(pp, "윷");
	else if (infront == 5) strcpy_s(pp, "모");
	else strcpy_s(pp, "꽝");


	printf("%d= %s\n", infront, pp);

	return 0;

}


//윷놀이 게임의 switch 버전
int game_switch()
{
	int infront;
	char pp[5];
	printf("윷놀이시작!");
	scanf_s("%d", &infront);

	switch (infront)
	{
	case 1:
		strcpy_s(pp,"도");
		break;
	case 2:
		strcpy_s(pp, "개");
		break;
	case 3:
		strcpy_s(pp, "걸");
		break;
	case 4:
		strcpy_s(pp, "윷");
		break;
	case 5:
		strcpy_s(pp, "모");
		break;

	default :
		strcpy_s(pp, "꽝");
		break;
	}


	printf("%d= %s\n", infront, pp);

	return 0;

}

