#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
void game()
{
	//����1~100֮��������
	int r = rand() % 100 + 1;

	int u = 0;

	//�Ƚ�
	while (1)
	{
		printf("��������Ҫ�µ�����:>");
		scanf("%d", &u);

		if (u > r)
		{
			printf("�´���\n");
		}
		else if (u < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ���������ˣ� �����ǣ�%d\n", r);
			break;
		}
	}
	
}

int main()
{
	int input = 0;

	//��������������
	srand((unsigned int)time(NULL));

	do
	{
		printf("���������֣�1��ʾ��ʼ��Ϸ��0��ʾ�˳���Ϸ:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			printf("��ʼ��������Ϸ\n");
			game();
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("����������������������\n");
		}
		}
	} while (input);
	
	return 0;
}
*/

/*
int bin_search(int arr[], int k, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	//Ҫ���ҵ�����
	int k = 0;
	scanf("%d", &k);

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int ret = bin_search(arr, k, left, right);

	if (ret >= 0)
	{
		printf("�ҵ��ˣ��±���:%d", ret);
	}
	else
	{
		printf("�Ҳ���");
	}

	return 0;
}
*/

/*
int main()
{
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d\t", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}
*/

/*
int is_leap_year(int y)
{
	return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

int main()
{
	int year = 0;
	scanf("%d", &year);

	if (is_leap_year(year))
	{
		printf("%d������", year);
	}
	else
	{
		printf("%d��������", year);
	}

	return 0;
}
*/

/*
int is_prime(int n)
{
	int flag = 1;//������
	int i = 0;

	if (n <= 1)
	{
		return -flag;
	}

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return -flag;
		}
	}

	return flag;
}

int main()
{
	int n = 0;
	for (n = 100; n <= 200; n++)
	{
		if (is_prime(n) > 0)
		{
			printf("%d ", n);
		}
	}

	return 0;
}
*/

/*
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		right--;
		left++;
	}
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	printf("\n");
	reverse(arr, sz);
	print(arr, sz);
	printf("\n");
	init(arr, sz);
	print(arr, sz);

	return 0;
}
*/

