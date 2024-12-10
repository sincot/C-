#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
int main()
{
	int arr[10] = { 0 };
	//动态内存开辟
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//使用开辟的内存空间
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}
*/

/*
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//打印
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//释放
	free(p);
	//置空
	p = NULL;

	return 0;
}
*/


/*
int main()
{
	long n = 0;
	long m = 0;
	while (scanf("%d %d", &n, &m) == 2)
	{
		int c = 0;
		int a = n;
		int b = m;

		while (c = a % b)
		{
			a = b;
			b = c;
		}
		printf("%d", b + m * n / b);
	}
	return 0;
}
*/


/*
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
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
struct S
{
	int n;
	int arr[];
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
	}

	//释放
	free(ps);
	ps = NULL;

	return 0;
}
*/

/*
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//读文件
	char ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}

	return 0;
}
*/

/*
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//写一行数据
	fputs("hello\n", pf);
	fputs("hello", pf);

	fclose(pf);
	pf = NULL;

	return 0;
}
*/

/*
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	//读一行数据
	char arr[20];
	fgets(arr, 3, pf);

	printf("%s\n", arr);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}
*/

/*
struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { "zhangsan", 25, 50.5f };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
	fprintf(stdout, "%s %d %f\n", s.arr, s.age, s.score);

	fclose(pf);
	pf = NULL;

	return 0;
}
*/

