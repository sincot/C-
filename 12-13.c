#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>

/*
int main()
{
	int i = 0;
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return EXIT_FAILURE;
		//EXIT_SUCCESS;
	}
	for (i = 0; i < 10; i++)
	{
		printf("file:%s line=%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
	}

	return 0;
}
*/

/*
#define MAX 1000
#define STR "hello"
#define print printf("hehe\n")

int main()
{
	printf("%d\n", MAX);
	printf("%s\n", STR);
	print;

	return 0;
}
*/

/*
#define PRINT(N) printf("the value of "#N" is %d\n", N)

int main()
{
	int a = 10;
	PRINT(a);
	printf("the value of ""a"" is %d\n", a);
	int b = 20;
	PRINT(b);
	printf("the value of ""b"" is %d\n", b);
	return 0;
}
*/


/*
#define PRINT(N, FORMAT) printf("the value of "#N" is "FORMAT, N)

int main()
{
	float f = 3.14f;
	PRINT(f, "%lf");

	return 0;
}
*/

/*
#define CAT(Class, Num) Class##Num

int main()
{
	int Class106 = 100;
	printf("%d\n", CAT(Class, 106));
	printf("%d\n", CAT(Class106));

	return 0;
}
*/


/*
#define MAX(x,y) ((x)>(y)?(x):(y))

int main()
{
	int a = 5;
	int b = 4;
	int m = MAX(a++, b++);

	printf("m = %d\n", m);
	printf("a = %d b = %d\n", a, b);
}
*/

/*
#include <stdio.h>
#include <string.h>
int fun(int score[], int m, int below[])
{
	int sum = 0;
	int i = 0;
	int k = 0;
	int j = 0;
	for (i = 0; i < m; i++)
	{
		sum = sum + score[i];

	}
	k = sum / m;
	for (i = 0; i < m; i++)
	{
		if (score[i] < k)
		{
			below[j] = score[i];
			j++;
		}
	}

	return j;
}
int main()
{
	int i, n, below[9];
	int score[9];
	for (i = 0; i < 9; i++)
		scanf("%d", &score[i]);
	n = fun(score, 9, below);
	for (i = 0; i < n; i++)
		printf("%d ", below[i]);
}
*/


/*
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[1000];
	while (getchar() != ']')
	{
		scanf("%d", &arr[i]);
		i++;
	}

	int j = 0;
	int max = arr[0];
	int min = arr[0];

	for (j = 1; j < i; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
		if (arr[j] < arr[0])
		{
			min = arr[j];
		}
	}

	int count = 0;
	for (j = 0; j < i; j++)
	{
		if (arr[j] != min && arr[j] != max)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
*/


/*
#include<stdio.h>
int main()
{

	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 10000; i >= 0; i--)
	{
		if (i % n == 0)
		{
			printf("%d", i);
			break;
		}
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
	int arr[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x = 0;
	scanf("%d", &x);

	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
*/


/*
int main()
{
	int x = 0;
	int day = 0;
	scanf("%d %d", &x, &day);

	int i = 0;
	int count = 0;
	for (i = 0; i <= day; i++)
	{
		if ((x + i) % 6 == 0 || (x + i) % 7 == 0)
		{
			count += 0;
		}
		else
		{
			count += 250;
		}
	}

	printf("%d", count);
	return 0;
}
*/

