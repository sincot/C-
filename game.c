#include "game.h"

void Initboard(char board[ROWS][COLS], int r, int c, char character)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			board[i][j] = character;
		}
	}
}

void Printboard(char board[ROWS][COLS], int r, int c)
{
	printf("------扫雷游戏-----\n");
	int i = 0;
	for (i = 0; i <= r; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Setboom(char boom[ROWS][COLS], int r, int c)
{
	int num = EASY_COUNT;
	
	while (num--)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;

		if (boom[x][y] == '0')
		{
			boom[x][y] = '1';
		}
	}
}

int SumBoom(char boom[ROWS][COLS], int x, int y)
{
	return boom[x - 1][y - 1] + boom[x - 1][y] + boom[x - 1][y + 1]
		+ boom[x][y - 1] + boom[x][y + 1] + boom[x + 1][y - 1]
		+ boom[x + 1][y] + boom[x + 1][y + 1] - 8 * '0';
}

void Fineboom(char boom[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int num = EASY_COUNT;

	int x = 0;
	int y = 0;
	int win = 0;

	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (show[x][y] == '*')
			{
				char sum = SumBoom(boom, x, y) + '0';
				show[x][y] = sum;
				win++;
			}
			else if (boom[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Printboard(boom, r, c);
			}
			else
			{
				printf("该坐标已经被排查\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}

		if (win == (r * c - num))
		{
			printf("恭喜你，游戏胜利\n");
			Printboard(boom, r, c);
		}
	}
}