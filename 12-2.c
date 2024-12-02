#define  _CRT_SECURE_NO_WARNINGS
/*
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[3] = { arr1, arr2, arr3 };

	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);

	return 0;
}
*/

/*
void print(int (*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print(arr, 3, 5);

	return 0;
}
*/

/*
#include<stdio.h>
#define N 15
int main()
{
	int high, i, x, low, mid, a[N] = { 4,9,14,16,17,19,28,33,42,51,64,75,84,91,100 };
	scanf("%d", &x);
	int left = 0;
	int right = N - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		printf("查找区间下界，上界，中间点[%d, %d, %d]\n", left, right, mid);
		if (a[mid] > x)
		{
			right = mid - 1;
			//mid = (right + left) / 2;
			//printf("查找区间下界，上届，中间点[%d, %d, %d]\n", left, right, mid);
		}
		else if (a[mid] < x)
		{
			left = mid + 1;
			//mid = (left + right) / 2;
			//printf("查找区间下界，上届，中间点[%d, %d, %d]\n", left, right, mid);
		}
		else
		{
			printf("查找成功，%d的下标：%d", x, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("查找区间下界，上界[%d，%d]，查找失败", left, right);
	}
	return 0;
}
*/


/*
#include<stdio.h>
#define N 10
int main()
{
	int i, x, t, a[10] = { 63,72,24,91,35,12,49,107,57,84 };
	scanf("%d", &x);
	for (i = 0; i < 10; i++)
	{
		if (a[i] == x)
		{
			printf("查找成功，%d的下标：%d", x, i);
			break;
		}
	}
	if (i == 10)
	{
		printf("查找失败");
	}
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
	int arr[100] = { 0 };
	for (i = 2; i <= n; i++)
	{
		int j = 0;
		int sum = 0;
		int k = 0;
		for (j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				sum += j;
				arr[k] = j;
				k++;
			}
		}
		if (sum == i)
		{
			printf("%d=", i);
			int t = 0;
			for (t = 0; t < k; t++)
			{
				if (t == k - 1)
					printf("%d", arr[t]);
				else
					printf("%d+", arr[t]);
			}
			printf("\n");
		}
	}

	return 0;
}
*/

/*
#include <stdio.h>
#define N 5
int main()
{
	float score[N], aver, sum = 0;
	int  i;
	int  count = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%f", &score[i]);
		sum += score[i];
	}
	aver = sum / N;
	for (i = 0; i < N; i++)
	{
		if (score[i] > aver)
		{
			count++;
		}
	}
	printf("aver=%f\ncount=%d", aver, count);

	return 0;
}
*/

/*
#include <stdio.h>
#define N 10
int main()
{
	int a[N], i, max, min, s = 0;
	max = 0;
	min = 100;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		s += a[i];
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	int count = 0;
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
		count++;
		if (count == 4)
		{
			count = 0;
			printf("\n");
		}
	}
	printf("\n");
	printf("最大值：%d\n", max);
	printf("最小值：%d\n", min);
	printf("平均值：%f", (float)s / N);

	return 0;
}
*/


/*
#include <stdio.h>
#define  M 13
int main()
{
	int days[M] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month, day, sum = 0;
	scanf("%d%d%d", &year, &month, &day);
	int flag = 0;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		flag = 1;
	}
	if (flag == 1)
	{
		days[2] = 29;
	}
	int i = 0;
	for (i = 0; i < month; i++)
	{
		sum += days[i];
	}
	sum += day;
	printf("这一天是这一年的第%d天", sum);

	return 0;
}
*/
