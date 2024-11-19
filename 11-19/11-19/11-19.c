#define  _CRT_SECURE_NO_WARNINGS
//数一下1~100中有多少个数字9
/*
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
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
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		int k = i;
		while (k)
		{
			if (k % 10 == 9)
			{
				count++;
			}
			k = k / 10;
		}
		
	}
	printf("%d", count);
	return 0;
}
*/


//计算1/1-1/2+1/3.....-1/100
/*
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= n; i++)
	{
		sum = sum + (1.0 / i) * flag;
		flag = -flag;
	}
	printf("%.2f", sum);
	return 0;
}
*/


//求10个整数中的最大值
/*
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//将下标为i的元素的地址取出来
	}

	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	printf("%d", max);
	return 0;
}
*/
/*
     int Add(int x, int y)
	 {
	     int z = x + y;
		 {
		 int num = 2024;
		 }
		 printf("%d", num);
		 return z;
      }
*/
//二分查找
/*
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int k = 7;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (k > arr[mid])
		{
			left++;
		}
		else if (k < arr[mid])
		{
			right--;
		}
		else
		{
			printf("找到了,下标是%d", mid);
		}
	}
	
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}
*/

//输出乘法口诀表，行数自己定
/*
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
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
	int n = 0;
	int i = 0;
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= n; j++)
		{
			if (i >= j)
			{
				printf("%d*%d=%2d ", j, i, i * j);
			}
		}
		printf("\n");
	}
	return 0;
}
*/


//输出9*9乘法口诀表
/*
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
long is_palindromic_number(long m, int count)
{
	long sum = m * pow(10, count - 1);
	m = m / 10;
	
	int i = 0;
	for (i = count - 2; i >= 0; i--)
	{
		int k = m;
		m = m % 10;
		sum = sum + m*pow(10, i);
		m = k / 10;
	}
	
	return sum;
}


int is_prime(long ret)
{
	int m = 0;
	int flag = 1;
	for (m = 2; m <= sqrt(ret); m++)
	{
		if (ret % m == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		return 1;
	}
	return 0;
}


int main()
{
	long n = 0;
	scanf("%ld", &n);
	int count = 0;
	long m = n;
	while (n)
	{
		count++;
		n = n / 10;
	}
	//printf("%d", count);
	long ret = is_palindromic_number(m, count);

	printf("%ld", ret);
	
	int rut = is_prime(ret);

	if (rut == 1)
	{
		printf("prime");
	}
	else
	{
		printf("noprime");
	}
	
	return 0;
}
*/


/*
#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	int m = 0;
	int x = 0;
	int max = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		x = sqrt(m);
		if (m == pow(x, 2))
		{
			continue;
		}
		else
		{
			if (m > max)
			{
				max = m;
			}
		}
	}
	printf("%d", max);


	return 0;
}
*/

/*
#include <stdio.h>
int print(int i)
{
	if (i == 0)
	{
		return 0;
	}
	else if (i == 1)
	{
		return 1;
	}
	else
	{
		return print(i / 2) + print(i % 2);
	}
}

int main()
{
	int t = 0;
	scanf("%d", &t);

	int i = 0;
	int a = 0;
	for (i = 0; i < t; i++)
	{
		int ret = print(i);
		printf("%d ", ret);
	}

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j <= 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}
*/


//冒泡排序
/*
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 1; j <= sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, 10);

	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
*/

//按正序打印一个整数的每一位
/*
#include <stdio.h>
void print(int n)
{
	if(n > 9)
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


//求n的阶乘
/*
#include <stdio.h>
long fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	long ret = fac(n);

	printf("%ld", ret);
	return 0;
}
*/


//模拟实现strlen函数（用递归和非递归）
/*
#include <stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	int arr[] = { 0 };
	scanf("%s", &arr);
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}
*/

/*
#include <stdio.h>
int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
}

int main()
{
	char arr[] = { 0 };
	scanf("%s", &arr);
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}
*/

//逆序打印字符串
/*
#include <stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reserve(char arr[], int left, int right)
{
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;

	if (left + 1 < right)
	{
		reserve(arr, left+1, right-1);
	}
}

int main()
{
	char arr[] = { 0 };
	scanf("%s", &arr);
	int sz = my_strlen(arr);
	int left = 0;
	int right = sz - 1;
	reserve(arr, left, right);
	printf("%s", arr);
	return 0;
}
*/