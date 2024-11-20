#define _CRT_SECURE_NO_WARNINGS
/*
#include <stdio.h>
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

void reserve(char* str)
{
	char tmp = *str;
	char len = my_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) >= 2)
	{
		reserve(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[] = { 0 };
	scanf("%s", &arr);
	reserve(arr);
	printf("%s", arr);
	return 0;
}
*/

//打印一个无符号整数的位次之和
/*
#include <stdio.h>
int digitsum(unsigned int n)
{
	if (n > 9)
	{
		return digitsum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	int ret = digitsum(n);
	printf("%d", ret);
	return 0;
}
*/


//编写一个函数实现n的k次方，用递归实现
/*
#include <stdio.h>
double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}
*/

//将数组A与B中的内容进行交换（数组一样大）
/*
#include <stdio.h>
int main()
{
	char arr1[] = { 0, 2, 4, 6 ,8 };
	char arr2[] = { 1, 3, 5, 7, 9 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
    

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
*/

/*
#include <stdio.h>
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reserve(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void Zero(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	reserve(arr, sz);
	print(arr, sz);
	Zero(arr, sz);
	print(arr, sz);

	return 0;
}
*/


#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
    
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}