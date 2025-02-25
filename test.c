#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//猜数字游戏
void clear()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");

	while (1)
	{
		printf("请注意，你的电脑将在2分钟内关机，如果输入“我是咸鱼”，将停止关机\n");
		scanf("%s", input);

		if (strcmp(input, "我是咸鱼") == 0)
		{
			system("shutdown -a");//取消关机
			break;
		}
	}
}

void game()
{
	//生成随机数
	int r = rand() % 100 + 1;

	int guess = 0;
	int count = 7;//限制猜数次数

	while (count)
	{
		scanf("%d", &guess);

		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜中了，数字是:%d", r);
			break;
		}
		count--;
	}

	if (count == 0)
	{
		//关机函数
		clear();
	}
}

int main()
{
	int input = 0;

	//随机数生成起点
	srand((unsigned int)time(NULL));

	do
	{
		printf("请输入数字>:");//输入1表示开始游戏，输入0表示退出游戏
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入数字\n");
			break;
		}
	} while (input);
	
	return 0;
}