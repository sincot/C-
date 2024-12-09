#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

/*
int involve(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	int i = 0;

	for (i = 0; i < len1; i++)
	{
		int tmp = arr1[0];
		int j = 0;
		for (j = 0; j < len1 - 1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[len1 - 1] = tmp;

		if (strcmp(arr2, arr1) == 0)
		{
			return 1;
		}
	}
	return 0;
}
*/

/*
char* involve(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return NULL;
	}
	strncat(arr1, arr1, len1);
	return strstr(arr1, arr2);
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "defabc";
	char* ret = involve(arr1, arr2);

	if (ret == NULL)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}

	return 0;
}
*/


/*
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[10][10] = { 0 };

	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
*/


/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < n && flag == 1; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}
*/


/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i = 0;
	int flag1 = 0;//sheng
	int flag2 = 0;//jiang

	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if (arr[i] == arr[i - 1])
			{
				;
			}
			else
			{
				flag2 = 1;
			}
		}
	}

	if (flag1 + flag2 <= 1)
	{
		printf("sorted");
	}
	else
	{
		printf("unsorted");
	}

	return 0;
}
*/

/*
enum Day
{
	Mon = 1,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun,
};

int main()
{
	printf("%d ", sizeof(enum Day));

	return 0;
}
*/


//判断当前电脑是大端存储还是小端存储
/*
int check_sys()
{
	int a = 1;
	return (char*)a;
}
*/

/*
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
*/

/*
union Un
{
	char arr[5];
	int i;
};

union Un
{
	int i;
	char arr[5];
};

union Un
{
	char c;
	char c;
	char c;
	char c;
	char c;
	int i;
};
*/

/*
#define N 80
int mystrlen(char ch[])
{
	int i = 0;
	while (ch[i] != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char ch[N];
	//printf("请输入字符串:\n");
	gets(ch);
	printf("%d\n", mystrlen(ch));
	return 0;
}
*/

/*
long fact(int n);

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	for (i = 1; i <= n; i++)
	{
		long ret = fact(i);
		printf("%d！=%d\n", i, ret);
	}
	return 0;
}

long fact(int n)
{
	static int j = 1;
	j = n * j;
	return j;
}
*/