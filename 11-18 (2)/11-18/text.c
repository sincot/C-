#define _CRT_SECURE_NO_WARNINGS

/*
#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
	int Sub(int x, int y)
	{
		return x - y;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	Add(a, b);
	return 0;
}

printf("%d", printf("%d", printf("%d", 43)));
*/


/*
//函数的声明
int Add(int x, int y);

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int sum = Add(a, b);
	printf("%d", sum);

	return 0;
}

//函数的定义
int Add(int x, int y)
{
	return x + y;
}
*/


//按正序打印一个整数的每一位
/*
#include <stdio.h>
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


//编写函数不允许创建临时变量，求字符串长度
/*
#include <stdio.h>
int my_strlen(char* ch)
{
	if (*ch != '\0')
	{
		return 1 + my_strlen(ch + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char ch = 0;
	scanf("%s", &ch);
	int ret = my_strlen(&ch);
	printf("%d", ret);
	return 0;
}
*/


//求n的阶乘
/*
#include <stdio.h>
int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d", ret);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 2; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d", ret);

	return 0;
}
*/
//求第n个斐波那契数列
/*
#include <stdio.h>
int Fib(int n)
{
	if (n >= 3)
	{
		return Fib(n - 1) + Fib(n - 2);
	}
	else
	{
		return 1;
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
#include <stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n >= 3)
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
	int ret = fib(n);
	printf("%d", ret);

	return 0;
}
*/


/*
#include <stdio.h>
float max3(float x, float y, float z)
{
	float max = x;

	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}

	return max;
}

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%f %f %f", &a, &b, &c);

	float n1 = max3(a + b, b, c);
	float n2 = max3(a, b + c, c);
	float n3 = max3(a, b, b + c);

	double m = n1 / (n2 + n3);
	printf("%.2f", m);

	return 0;
}
*/


/*
#include <stdio.h>
int print(int i)
{
	int sum = 0;
	
	while (i)
	{
		sum = sum + i % 10;
		i = i / 10;
	}

	if (sum % 5 == 0 && sum / 5 != 0)
	{
		return 1;
	}

	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int i = 0;
	int count = 0;
	for (i = a; i <= b; i++)
	{
		int ret = print(i);
		if (ret == 1)
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
int print(long n)
{
	long sum = 0;
	while (n)
	{
		sum = sum + n % 10;
		n = n / 10;
	}

	if (sum > 9)
	{
		return print(sum);
	}
	else
	{
		return sum;
	}
}

int main()
{
	long n = 0;
	scanf("%ld", &n);
	int ret = print(n);

	printf("%d", ret);
	return 0;
}
*/


/*
#include <stdio.h>
int print(int i)
{
	int count = 0;
	while (i)
	{
		if (i % 10 == 2)
		{
			count++;
		}
		i = i / 10;
	}
	return count;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int i = 0;
	int count = 0;
	for (i = a; i <= b; i++)
	{
		int ret = print(i);
		count = count + ret;
	} 

	printf("%d", count);
	return 0;
}
*/

/*
#include <stdio.h>
float print(int k)
{
	if (k <= 60)
	{
		return 0.1;
	}
	else
	{
		return 0.2;
	}
}

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int k = 0;
	float sum = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &k);
		float ret = print(k);
		sum = sum + ret;
	}

	printf("%.1f", sum);
	return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
int print(int i)
{
	int flag = 1;
	int m = 0;
	if (i <= 1)
	{
		return 0;
	}
	else
	{
		for (m = 2; m <= sqrt(i); m++)
		{
			if (i % m == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			return i;
		}
	}

	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int sum = 0;
	int i = 0;
	for (i = a; i <= b; i++)
	{
		int ret = print(i);
		sum = sum + ret;
	}

	printf("%d", sum);
	return 0;
}
*/


#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	int arr1[] = { 0 };
	int arr2[] = { 0 };

	int i = 0;
	int sum = 0;
	for (i = 0; i < a; i++)
	{
		scanf("%d ", arr1);
		sum = sum + arr1[i];
	}
	printf("%d", sum);
	//printf("\n");
	/*int j = 0;
	for (j = 0; j < b; j++)
	{
		scanf("%d ", arr2);
	}

	int k = 0;
	*/

	return 0;
}