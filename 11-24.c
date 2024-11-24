#define _CRT_SECURE_NO_WARNINGS
/*
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n", a, b, c);
	return 0;
}
*/

//求二进制中1的个数
/*
#include <stdio.h>
int Num(unsigned int num)
{
	int count = 0;
	while(num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}

	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = Num(num);
	printf("%d", ret);

	return 0;
}
*/

/*
#include <stdio.h>
int Num(int n)
{
	int count = 0;
	int i = 0;
	for(i = 1; i <= 32; i++)
	{
		if ((n >> i) & 1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = Num(num);
	printf("%d", ret);

	return 0;
}
*/

/*
#include <stdio.h>
int Num(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = Num(num);
	printf("%d", ret);

	return 0;
}
*/

//两个int整数m和n的二进制表达式中，有多少个（bit）不同
/*
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int count = 0;
	for (i = 1; i <= 32; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int count = 0;
	for (i = 1; i <= 32; i++)
	{
		if (((m ^ n) >> i) & 1 == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int k = m ^ n;
	int count = 0;
	while (k)
	{
		k = k & (k - 1);
		count++;
	}
	printf("%d", count);

	return 0;
}
*/

//打印整数二进制的奇数位和偶数位
/*
#include <stdio.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}
*/

//获得某年某月的天数
/*
#include <stdio.h>
int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d %d", &y, &m);

	d = arr[m];
	int ret = is_leap_year(y);
	if (ret == 1 && m == 2)
	{
		d++;
	}
	printf("%d", d);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
//模拟实现strcpy
#include <assert.h>
#include <stdio.h>
char* my_strcpy(char* dest, const char* scr)
{
	assert(dest && scr);
	char* ret = dest;
	while (*scr != '\0')
	{
		*dest++ = *scr++;
	}
	return ret;
}

int main()
{
	char arr1[] = "###############";
	char arr2[] = "hunan gongshang";
	my_strcpy(arr1, arr2);

	printf("%s", arr1);
	return 0;
}
*/

//写一个函数打印arr数组的内容，不使用数组下标，使用指针
/*
#include <stdio.h>
int main()
{
	char arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	char* p = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}
*/


//将一个字符串逆序，并且打印
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[10];
	gets(arr);
	int len = strlen(arr);
	int left = 0;
	int right = len - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

	printf("%s", arr);

	return 0;
}
*/


//struct student
//{
//	int num;
//	char name[20];
//	float score;
//}stu;

/*
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) == 3)
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
			{
				printf("等腰三角形\n");
			}
			else if (a == b && b == c)
			{
				printf("等边三角形\n");
			}
			else
			{
				printf("普通三角形\n");
			}
		}
		else
		{
			printf("不能组成三角形\n");
		}
	}

	return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
	int m = 0;//项数
	int n = 0;//重复的数
	scanf("%d %d", &n, &m);

	int i = 0;
	int sum = n;
	for (i = 1; i < m; i++)
	{
		sum += n * pow(10, i) + n;
	}
	printf("%d", sum);
	return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 0;//位数
		int j = i;
		int sum = 0;
		while (j)
		{
			n++;
			j /= 10;
		}
		j = i;
		int k = 0;
		for (k = 0; k < n; k++)
		{
			sum += pow(j % 10, n);
			j /= 10;
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 1; i <= line; i++)
	{
		int j = 0;
		for (j = 1; j <= line - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= line - 1; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j < 2*(line - i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int money = 0;
	scanf("%d", &money);
	int toal = money;
	int empty = money;
	while (empty / 2)
	{
		toal += empty / 2;
		empty = empty % 2 + empty / 2;
	}
	printf("%d", toal);
	return 0;
}
*/