#define _CRT_SECURE_NO_WARNINGS
//����С������
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
	//�����ַ���
	reserve(arr, arr + len - 1);// I like hugongshang.

	char* start = arr;
	char* end = start;
	//������ĸ
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

//��Ƴ������жϵ�ǰ�������ֽ���
#include <stdio.h>
int main()
{
	int a = 1;
	if (*(char*)&a == 1)
	{
		printf("С��");
	}
	else
		printf("���");

	return 0;
}