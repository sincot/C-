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
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣�
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
//��C��������Ļ�����13*13������
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
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
// ��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������


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
		int n = 0;//λ��
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
//�ݹ���쳲���������
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
//������쳲���������
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
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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
//��˳���ӡ����ÿһλ
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

//ģ��ʵ��strlen����
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


//ð������
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
