#define  _CRT_SECURE_NO_WARNINGS

//左旋转k个字符
#include <stdio.h>
#include <assert.h>
#include <string.h>

/*
void resever(char arr[], int k)
{
	int len = strlen(arr);
	k %= len;
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}
*/

/*
void reserve(char* left, char* right)
{
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void revolve(char* str, int k)
{
	int len = strlen(str);
	k %= len;
	reserve(str, str + k - 1);
	reserve(str + k, str + len - 1);
	reserve(str, str + len - 1);
}

int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	revolve(arr, k);

	printf("%s", arr);
	return 0;
}
*/


/*
int reaserch_of_num(char arr[][3], int* r, int* c, int k)
{
	int x = *r - 1;
	int y = 0;

	while (x <= *r - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			x--;
		}
		else if (arr[x][y] < k)
		{
			y++;
		}
		else
		{
			*r = x;
			*c = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;//要查找的数
	scanf("%d", &k);
	int row = 3;
	int col = 3;
	int ret = reaserch_of_num(arr, &row, &col, k);

	if (ret == 1)
	{
		printf("%d %d", row, col);
	}
	else
	{
		printf("找不到\n");
	}

	return 0;
}
*/

/*
struct num 
{
	int r;
	int c;
}n;

int reaserch_of_num(char arr[][4], int r, int c, int k)
{
	int x = r - 1;
	int y = 0;

	while (x <= r - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			x--;
		}
		else if (arr[x][y] < k)
		{
			y++;
		}
		else
		{
			n.r = x;
			n.c = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int k = 0;
	scanf("%d", &k);
	int ret = reaserch_of_num(arr, 3, 3, k);

	if (ret == 1)
	{
		printf("%d %d", n.r, n.c);
	}
	else
	{
		printf("找不到\n");
	}

	return 0;
}
*/

/*
#pragma pack(8)//设置默认对齐数为8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认

#pragma pack(1)//设置默认对齐数为1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
*/

/*
struct S
{
	int data[1000];
	int num;
};

void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ss.data[i]);
	}
	printf("%d\n", ss.num);
}

void print2(struct S* ps)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("%d\n", ps->num);
}

int main()
{
	struct S s = { {1,2,3}, 100 };
	print1(s);//传值调用
	print2(&s);//传址调用
	return 0;
}
*/

/*
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}
*/