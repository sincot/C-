#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
int main()
{
	int* p;
	*p = 20;
	printf("%d", *p);

	return 0;
}
*/

/*
int* test()
{
	int i = 10;
	return &i;
}

int main()
{
	int* p = test();
	printf("%d", *p);
	return 0;
}
*/

/*
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）
int main()
{
	int empty = 20;
	int sum = 20;

	while (empty / 2)
	{
		sum += empty / 2;
		empty = empty / 2 + (empty % 2);
	}

	printf("%d", sum);

	return 0;
}
*/


/*
//用C语言在屏幕上输出13*13的菱形
int main()
{
	int i = 0;
	int j = 0;
	int n = 13;

	for (i = 1; i <= (n/2 + 1); i++)
	{
		for (j = (n/2); j > i; j--)
		{
			printf(" ");
		}
		for (j = 0; j < (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n /2; i > 0; i--)
	{
		for (j = n / 2; j > i; j--)
		{
			printf(" ");
		}
		for (j = (2 * i - 1); j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/


/*
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
// 如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


int NarNum(int i, int n)
{
	int j = 0;
	int sum = 0;
	for (j = n; j > 0; j--)
	{
		int k = i;
  		k %= 10;
		sum += (int)pow(k, n);
		i /= 10;
	}
	return sum;
}

int main()
{
	int i = 0;
	
	for (i = 0; i <= 100000; i++)
	{
		int n = 0;//位数
		int k = i;
		do
		{
			n++;
			k /= 10;
		} while (k);
		         
		if (i == NarNum(i, n))
		{
			printf("%d ", i);
		}
	}
	

	return 0;
}
*/

/*
//递归求斐波那契数列
int Fib(int n)
{
	
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);

	return 0;
}
*/

/*
//迭代求斐波那契数列
long Fib(int n)
{
	int a = 1;
	int b = 1;
	long c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	long ret = Fib(n);
	printf("%ld", ret);

	return 0;
}
*/

/*
//编写一个函数实现n的k次方，使用递归实现。
double power(int n, int k)
{
	if (k < 0)
	{
		return 1.0 / (n * power(n, -(k + 1)));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * power(n, k - 1);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = power(n, k);
	printf("%lf", ret);

	return 0;
}
*/

/*
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return DigitSum(n / 10) + n % 10;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d", ret);
	return 0;
}
*/

/*
//按顺序打印数的每一位
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

//模拟实现strlen函数
/*
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
	char arr[] = "abcdefg";
	char* p = arr;
	int ret = my_strlen(p);
	printf("%d", ret);

	return 0;
}
*/

/*
int my_strlen(char* p)
{
	char* q = p;
	while (*p != '\0')
	{
		p++;
	}
	return p - q;
}

int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d", ret);

	return 0;
}
*/

/*
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
	int arr[] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d", ret);

	return 0;
}
*/


//冒泡排序
void bubble_sort(char* str, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (*(str + j) > *(str + j + 1))
			{
				int tmp = *(str + j);
				*(str + j) = *(str + j + 1);
				*(str + j + 1) = tmp;
				int flag = 0;
			}
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
