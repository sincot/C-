#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void game()
{
	char boom[ROWS][COLS];
	char show[ROWS][COLS];

	//初始化
	Initboard(boom, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	//打印棋盘
	Printboard(show, ROW, COL);

	//放置雷
	Setboard(boom, ROW, COL);

	//排查雷
	Fineboom(boom, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("数字非法，请重新输入");
		}
	} while (input);

	return 0;
}