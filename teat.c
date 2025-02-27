#define _CRT_SECURE_NO_WARNINGS

/*
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	int tmp = 0;
	if (a < b)
	{
		tmp = b;
		b = a;
		a = tmp;
	}
	if (a < c)
	{
		tmp = c;
		c = a;
		a = tmp;
	}
	if (b < c)
	{
		tmp = c;
		c = b;
		b = tmp;
	}

	printf("%d %d %d", a, b, c);

	return 0;
}
*/


/*
#include <stdio.h>

int main()
{ 
	int i = 0;
	int j = 0;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
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
	int i = 0;
	int flag = 1;
	double sum = 0.0;

	for (i = 1; i <= 100; i++)
	{
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("%lf", sum);

	return 0;
}
*/

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
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
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
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);

	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	scanf("%d", &arr[0]);
	int max = arr[0];

	for (i = 1; i < 10; i++)
	{
		scanf("%d", &arr[i]);
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
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a + b <= c)
		{
			printf("Not a triangle!\n");
		}
		else
		{
			if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b && b != c) || (a == c && c != b)
				|| (b == c && c != a))
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
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
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;//是素数
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//不是素数
				break;
			}
		}

		if (flag)
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
	int i = 0;
	int arr[10] = { 0 };
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("%d", sum / 10);

	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int arr1[5] = { 1, 3, 5, 7, 9 };
	int arr2[5] = { 2, 4, 6, 8, 10 };

	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0, j = 0; i < sz, j < sz; i++, j++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[j];
		arr2[j] = tmp;
	}

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr2[j]);
	}

	return 0;
}
*/

#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);

	int arr1[m];
	int arr2[n];
	int i = 0;
	int j = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (j = 0; j < n; j++)
	{
		scanf("%d", &arr2[j]);
	}

	i = 0;
	j = 0;
	while (i < m && j < n)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}

	if (i < m)
	{
		for (; i < m; i++)
		{
			printf("%d ", arr1[i]);
		}
	}
	else
	{
		for (; j < n; j++)
		{
			printf("%d ", arr2[j]);
		}
	}

	return 0;
}