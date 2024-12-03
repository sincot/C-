#define  _CRT_SECURE_NO_WARNINGS

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Stu
{
	char name[20];
	int age;
};


int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}

int main()
{
	//测试使用qsort来排序结构体数据
	struct Stu s[] = { {"zhangsan", 15},{"lisi", 30},{"wangwu", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
void cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp(((char*)base + j * width), ((char*)base + (j + 1) * width)) > 0)
			{
				Swap(((char*)base + j * width), ((char*)base + (j + 1) * width), width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
	long n = 0;
	scanf("%ld", &n);
	int count = 0;//计算位数
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int k = n;
	int x = n;
	while (k)
	{
		k /= 10;
		count++;
	}
	printf("%ld为%d位数\n", n, count);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		//正序
		arr1[i] = n / pow(10, count - 1 - i);
		n = n % (int)pow(10, count - 1 - i);
	}
	printf("顺序输出为：");
	for (i = 0; i < count; i++)
	{
		printf("%d,", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < count; i++)
	{
		//逆序
		arr2[i] = x % 10;
		x /= 10;
	}
	printf("逆序输出为：");
	for (i = 0; i < count; i++)
	{
		printf("%d,", arr2[i]);
	}

	return 0;
}


#include<stdio.h>
#define N 100
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
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/

/*
#include<stdio.h>
#define N 100
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a[N];
	int i = 0;
	int max = 0;
	int min = 100;
	while (n != 0)
	{
		a[i] = n;
		i++;
		scanf("%d", &n);
	}

	int j = 0;
	int p = 0;//记录下标
	int q = 0;
	for (j = 0; j < i; j++)
	{
		if (a[j] > max)
		{
			max = a[j];
			p = j;
		}
		if (a[j] < min)
		{
			min = a[j];
			q = j;
		}
	}
	printf("最大值：%d，下标：%d\n", max, p);
	printf("最小值：%d，下标：%d\n", min, q);

	for (j = 0; j < i; j++)
	{
		printf("%d ", a[j]);
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
	int arr[n];
	int i = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
		sum += arr[i];
	}
	printf("%d", sum);
	return 0;
}

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int max = 0;
	int min = 100;
	int i = 0;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d", max - min);

	return 0;
}


#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j + 1] > arr[j])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int arr1[n];
	int arr2[m];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int a = 0;
	int b = 0;
	while (a < n && b < m)
	{
		if (arr1[a] < arr2[b])
		{
			printf("%d ", arr1[a]);
			a++;
		}
		else
		{
			printf("%d ", arr2[b]);
			b++;
		}
	}
	if (a < n)
	{
		for (; a < n; a++)
		{
			printf("%d ", arr1[a]);
		}
	}
	else if (b < m)
	{
		for (; b < m; b++)
		{
			printf("%d ", arr2[b]);
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
	int arr[100] = { 0 };
	int max = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	int flag = 0;
	if (max == arr[n-1])
	{
		for (i = 0; i < n-1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				flag = 1;
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				flag = 1;
			}
		}
	}

	if (flag == 1)
	{
		printf("unsorted");
	}
	else
	{
		printf("sorted");
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
	int arr[n + 1];
	int x = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	arr[n] = x;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/