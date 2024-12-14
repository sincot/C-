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
	//异或
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//计算ret的二进制中最右边的第几位是1
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
	//5与6是单独的数字，将整个数组的元素异或后，只剩5^6，结果为011
    //看异或后的数字哪一位为1，再根据这分成两组，那一位为1的组，那一位为0的组
	//分组
	//1.所有数字异或
	//2.找出异或的结果数字中哪一位为1，这一位为第n位
	//3.以第n位为1分一组，第n位为0分一组
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