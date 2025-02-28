#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
void game()
{
	//生成1~100之间的随机数
	int r = rand() % 100 + 1;

	int u = 0;

	//比较
	while (1)
	{
		printf("请输入你要猜的数字:>");
		scanf("%d", &u);

		if (u > r)
		{
			printf("猜大了\n");
		}
		else if (u < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜您，猜中了， 数字是：%d\n", r);
			break;
		}
	}
	
}

int main()
{
	int input = 0;

	//生成随机数的起点
	srand((unsigned int)time(NULL));

	do
	{
		printf("请输入数字，1表示开始游戏，0表示退出游戏:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			printf("开始猜数字游戏\n");
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("输入数字有误，请重新输入\n");
		}
		}
	} while (input);
	
	return 0;
}
*/

/*
int bin_search(int arr[], int k, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	//要查找的数字
	int k = 0;
	scanf("%d", &k);

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int ret = bin_search(arr, k, left, right);

	if (ret >= 0)
	{
		printf("找到了，下标是:%d", ret);
	}
	else
	{
		printf("找不到");
	}

	return 0;
}
*/

/*
int main()
{
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d\t", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}
*/

/*
int is_leap_year(int y)
{
	return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

int main()
{
	int year = 0;
	scanf("%d", &year);

	if (is_leap_year(year))
	{
		printf("%d是闰年", year);
	}
	else
	{
		printf("%d不是闰年", year);
	}

	return 0;
}
*/

/*
int is_prime(int n)
{
	int flag = 1;//是素数
	int i = 0;

	if (n <= 1)
	{
		return -flag;
	}

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return -flag;
		}
	}

	return flag;
}

int main()
{
	int n = 0;
	for (n = 100; n <= 200; n++)
	{
		if (is_prime(n) > 0)
		{
			printf("%d ", n);
		}
	}

	return 0;
}
*/

/*
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		right--;
		left++;
	}
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	printf("\n");
	reverse(arr, sz);
	print(arr, sz);
	printf("\n");
	init(arr, sz);
	print(arr, sz);

	return 0;
}
*/

