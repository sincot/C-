#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������Ϸ
void clear()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");

	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���2�����ڹػ���������롰�������㡱����ֹͣ�ػ�\n");
		scanf("%s", input);

		if (strcmp(input, "��������") == 0)
		{
			system("shutdown -a");//ȡ���ػ�
			break;
		}
	}
}

void game()
{
	//���������
	int r = rand() % 100 + 1;

	int guess = 0;
	int count = 7;//���Ʋ�������

	while (count)
	{
		scanf("%d", &guess);

		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�����ˣ�������:%d", r);
			break;
		}
		count--;
	}

	if (count == 0)
	{
		//�ػ�����
		clear();
	}
}

int main()
{
	int input = 0;

	//������������
	srand((unsigned int)time(NULL));

	do
	{
		printf("����������>:");//����1��ʾ��ʼ��Ϸ������0��ʾ�˳���Ϸ
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
			printf("���������������������\n");
			break;
		}
	} while (input);
	
	return 0;
}