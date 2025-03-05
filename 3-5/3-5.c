//模拟实现strlen函数
#include <stdio.h>
#include <assert.h>
/*
int my_strlen(char* p)
{
	char* q = p;
	while (*p)
	{
		p++;
	}
	return p - q;
}
*/

/*
int my_strlen(char* p)
{
	int count = 0;
	while (*p)
	{
		p++;
		count++;
	}
	return count;
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
*/
/*
int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d", ret);

	return 0;
}
*/

//模拟实现strcpy函数
/*
void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);;
	assert(src != NULL);

	while ((*dest++ = *src++))
	{
		;
	}
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "#########";
	my_strcpy(arr2, arr1);
	return 0;
}
*/

//模拟实现strcat函数
/*
void my_strcat(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[] = "world";
	char arr2[20] = "hello ";
	my_strcat(arr2, arr1);
	printf("%s", arr2);

	return 0;
}
*/


//模拟实现strcmp函数
/*
int my_strcmp(char* str1, char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}

	return *str1 - *str2;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcw";
	int ret = my_strcmp(arr1, arr2);

	if (ret < 0)
	{
		printf("abcdef < abcw\n");
	}
	else if (ret == 0)
	{
		printf("abcdef = abcw\n");
	}
	else
	{
		printf("abcdef > abcw");
	}
	return 0;
}
*/

//实现冒泡排序
/*
#include <stdio.h>
void bubble_sort(int* p, int sz)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				int tmp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/


//用qsort优化冒泡排序
/*
#include <stdio.h>
#include <stdlib.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

float cmp_float(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

int cmp_str_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_str_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int main()
{
	//float arr[] = { 9.0,8.1,3.2,4.5,5.7,8.9 };
	struct Stu arr[] = { {"zhangsan", 29}, {"lisi", 18}, {"wangwu", 38}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_str_age);
	
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	

	return 0;
}
*/

/*
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(void* p1, void* p2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp_int(((char*)base + j * width), ((char*)base + (j + 1) * width)))
			{
				Swap(((char*)base + j * width), (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[] = { 9,3,4,5,6,7,3,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/
