#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void game()
{
	char boom[ROWS][COLS];
	char show[ROWS][COLS];

	//��ʼ��
	Initboard(boom, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	//��ӡ����
	Printboard(show, ROW, COL);

	//������
	Setboard(boom, ROW, COL);

	//�Ų���
	Fineboom(boom, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���ַǷ�������������");
		}
	} while (input);

	return 0;
}