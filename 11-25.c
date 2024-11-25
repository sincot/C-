#define _CRT_SECURE_NO_WARNINGS
//求最小公倍数
/*
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int i = 1;
	while (m * i % n)
	{
		i++;
	}
	printf("%d", m * i);

	return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <assert.h>

void reserve(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	//逆序字符串
	reserve(arr, arr + len - 1);// I like hugongshang.

	char* start = arr;
	char* end = start;
	//逆序字母
	while (*start != '\0')
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reserve(start, end-1);
		if (*end != '\0')
		{
			end++;
		}
		start = end;
	}
	printf("%s", arr);
	return 0;
}
*/

//设计程序来判断当前机器的字节序
#include <stdio.h>
int main()
{
	int a = 1;
	if (*(char*)&a == 1)
	{
		printf("小端");
	}
	else
		printf("大端");

	return 0;
}