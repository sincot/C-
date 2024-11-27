#define  _CRT_SECURE_NO_WARNINGS
//模拟实现strcpy函数
/*
#include <stdio.h>
#include <assert.h>

void my_strcpy(char* dest, char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
}

int main()
{
	char arr1[] = "####################";
	char arr2[] = "hunan gongshangdaxue";

	my_strcpy(arr1, arr2);

	printf("%s ", arr1);
	return 0;
}
*/


//调整奇数和偶数顺序
/*
#include <stdio.h>
void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if(left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
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
		scanf("%d ", &arr[i]);
	}

	move_odd_even(arr, sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/


//有序链表合并
/*
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);

	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	
	int i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d ", &arr1[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr2[i]);
	}
	int j = 0;
	int k = 0;
	while (j < n && k < m)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else
	{
		for (; k < m; k++)
		{
			printf("%d ", arr2[k]);
		}
	}


	return 0;
}
*/
