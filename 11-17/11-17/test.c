#define _CRT_SECURE_NO_WARNINGS 1

/*
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	*p = 20;
	free(p);
	p = NULL;

	return 0;
}
*/


/*
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		p[i] = i;
	}

	free(p);
	p = NULL;
	return 0;
}
*/


/*
int main()
{
	int a = 10;
	int* p = &a;

	free(p);
	p = NULL;

	return 0;
}
*/


/*
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}

	free(p);
	p = NULL;

	return 0;
}
*/

/*
int main()
{
	int* p = (int*)malloc(40);
	//......
	free(p);
	p = NULL;
	//......
	free(p);

	return 0;
}
*/


/*
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	
	while (scanf("%d %d", &n, &m) == 2)
	{
		int i = n;
		int j = m;
		int r = 0;
		while (r = i % j)
		{
			i = j;
			j = r;
		}

		printf("%d ", (m * n) / j + j);
	}
	return 0;
}
*/


/*
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}

	return 0;
}
*/


/*
//交换两个变量
#include <stdio.h>
void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前;a=%d b=%d\n", a, b);

	Swap(&a, &b);
	printf("交换后:a=%d b=%d", a, b);
	return 0;
}
*/


//写一个函数判断一个数是不是素数
/*
#include <stdio.h>
int is_prime(int n)
{
	int i = 0;
	if (n == 2)
	{
		return 1;
	}

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = is_prime(n);

	if (ret == 1)
	{
		printf("Yes");
	}
	else if(ret == 0)
	{
		printf("No");
	}

	return 0;
}
*/


//写一个函数判断某一年是不是闰年
/*
#include <stdio.h>
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		return 1;
	}
	return 0;
}

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		int ret = is_leap_year(y);
		if (ret == 1)
		{
			printf("%d ", y);
		}
	}

	return 0;
}
*/


/*
#include <stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
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
			return 1;
		}

	}
	
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 4;

	int ret = binary_search(arr, k, sz);

	if (ret == 1)
	{
		printf("找到了");
	}
	else
	{
		printf("找不到");
	}

	return 0;
}
*/

