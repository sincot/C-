#define  _CRT_SECURE_NO_WARNINGS

/*
#define M 100

int main()
{
	printf("%d\n", M);
#undef M
#define M 10
	printf("%d\n", M);

	return 0;
}
*/


/*
#define M 6

int main()
{
#if M<5
	printf("hehe\n");
#eif M == 5
	printf("jiejie\n");
#else
	printf("haha\n");
#endif

	return 0;
}
*/

/*
#define MAX 100

int main()
{
#if !defined(MAX)
	printf("max\n");
#endif

	return 0;
}
*/

/*
#include <stddef.h>

struct S
{
	char a;
	int b;
	char c;
};

#define OFFSETOF(type, m_name)  (size_t)&(((type*)0) -> m_name))

int mian()
{
	struct S s = { 0 };
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));

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
			for (j = 0; j < n - i; j++)
			{
				printf("  ");
			}
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i <= n; i++)
		{
			int j = 0;
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}
			for (j = 0; j <= n - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}
*/


/*
void find_single_num(int arr[], int sz, int* pnum1, int* pnum2)
{
	int i = 0;
	int ret = 0;
	//���
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//����ret�Ķ����������ұߵĵڼ�λ��1
	int pos = 0;
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*pnum1 ^= arr[i];
		}
		else
		{
			*pnum2 ^= arr[i];
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	//5��6�ǵ��������֣������������Ԫ������ֻʣ5^6�����Ϊ011
    //�������������һλΪ1���ٸ�����ֳ����飬��һλΪ1���飬��һλΪ0����
	//����
	//1.�����������
	//2.�ҳ����Ľ����������һλΪ1����һλΪ��nλ
	//3.�Ե�nλΪ1��һ�飬��nλΪ0��һ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	find_single_num(arr, sz, &num1, &num2);
	printf("[%d %d]", num1, num2);

	return 0;
}
*/

/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = 0;
	int b = 1;
	int c = 0;

	while (1)
	{
		if (n == a)
		{
			printf("0\n");
			break;
		}
		if (n < b)
		{
			if ((n - a) > (b - n))
			{
				printf("%d\n", b - n);
				break;
			}
			else
			{
				printf("%d\n", n - a);
				break;
			}
		}

		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
*/