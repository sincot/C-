#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	long Sn = 0;
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		int j = 0;
		int ret = 0;
		for (j = 0; j <= i; j++)
		{
			ret += n * (int)pow(10, j);
		}
		Sn += ret;
	}
	printf("%ld", Sn);
	return 0;
}
*/

/*
int print(int n)
{
	if (n < 9)
	{
		return n;
	}
    
	return print(n / 10) + n % 10;
}
 
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = print(n);
	printf("%d", ret);

	return 0;
}
*/

/*
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);

	return 0;
}
*/

//递归实现n的阶乘
/*
int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * fact(n - 1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fact(n);
	printf("%d", ret);

	return 0;
}
*/

//非递归实现n的阶乘
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d", ret);

	return 0;
}
*/

/*
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}
*/


//整型数组冒泡排序
/*
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,4,5,6,7,3,2,4,7,8,5,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr, sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

//模拟实现strlen函数
/*
int simulate_strlen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "watergraphically";
	int ret = simulate_strlen(arr);
	printf("%d", ret);

	return 0;
}
*/

//找单身
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	printf("%d", ret);

	return 0;
}
*/

/*
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n ^ m)>>i)&1 == 1)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}
*/

//不创建两个临时变量交换两个数的内容
/*
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a = %d, b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：a = %d, b = %d\n", a, b);

	return 0;
}
*/

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	//奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}

	return 0;
}
*/

/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}
*/

//写一个函数判断当前机器是大端还是小端，如果是小端返回1，如果是大端返回0.
/*
int my_system(int i)
{
	return *(char*)&i;
}

int main()
{
	int i = 1;
	int ret = my_system(i);
	if (ret == 1)
	{
		printf("小端\n");
	}
	else if(ret == 0)
	{
		printf("大端\n");
	}

	return 0;
}
*/
