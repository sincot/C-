#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define EASY_BOOM 10

void InitBoard(char board[ROWS][COLS], int r, int c, char character)
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

void PrintBoard(char board[ROWS][COLS], int r, int c)
{
	printf("------ɨ����Ϸ----------\n");
	int i = 0;
	for (i = 0; i <= r; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		int j = 0;
		printf("%d ", i);
		for(j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetBoom(char boom[ROWS][COLS], int r, int c)
{
	int num = EASY_BOOM;

	while (num)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;

		if (boom[x][y] == '0')
		{
			boom[x][y] = '1';
			num--;
		}
	}
}

int SumBoom(char boom[ROWS][COLS], int x, int y)
{
	return boom[x - 1][y - 1] + boom[x - 1][y] + boom[x - 1][y + 1]
		+ boom[x][y - 1] + boom[x][y + 1] + boom[x + 1][y - 1]
		+ boom[x + 1][y] + boom[x + 1][y + 1] - 8 * '0';
}

void ClearBoom(char boom[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int sum = 0;
	int x = 0;
	int y = 0;

	while (sum < (r * c - EASY_BOOM))
	{
		printf("��������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (boom[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ���Ϸ����\n");
				PrintBoard(boom, r, c);
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					int count = SumBoom(boom, x, y);
					show[x][y] = count + '0';
					PrintBoard(show, r, c);
					sum++;
				}
				else
				{
					printf("�����Ѿ����Ų�\n");
				}
			}
		}
		else
		{
			printf("����Ƿ�\n");
		}
	}
	if (sum == (r * c - EASY_BOOM))
	{
		printf("��ϲ�㣬��Ϸʤ��\n");
		PrintBoard(boom, r, c);
	}
}
void game()
{
	char boom[ROWS][COLS];
	char show[ROWS][COLS];

	//��ʼ������
	InitBoard(boom, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	/*InitBoard(boom, ROWS, COLS);
	InitBoard(show, ROWS, COLS)*/;

	//��ӡ����
	//printf("-------չʾ����--------\n");
	PrintBoard(show, ROW, COL);
	/*printf("-------������----------\n");
	PrintBoard(boom, ROW, COL);*/

	//������
	SetBoom(boom, ROW, COL);
	//PrintBoard(boom, ROW, COL);
	// 
	//ɨ��
	ClearBoom(boom, show, ROW, COL);
}

void menu()
{
	printf("*********************\n");
	printf("****  1. play   *****\n");
	printf("****  0. exit   *****\n");
	printf("*********************\n");
}	

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���ַǷ�\n");
		}
	} while (input);

	return 0;
}
