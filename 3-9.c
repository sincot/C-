#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//ʹ��strlen����
/*
int main()
{
	char arr[] = "watergraphically@gmail.com";
	printf("%zd", strlen(arr));
	return 0;
}
*/

//ģ��ʵ��strlen����
//1.������
/*
size_t simulate_strlen(char* str)
{
	size_t count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
*/

//2.ָ��-ָ��
/*
size_t simulate_strlen(char* str)
{
	char* q = str;
	while (*str)
	{
		str++;
	}
	return str - q;
}
*/

//3.�ݹ�
/*
size_t simulate_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return 1 + simulate_strlen(str + 1);
}

int main()
{
	char arr[] = "watergraphically@gmail.com";
	size_t ret = simulate_strlen(arr);
	printf("%zd", ret);

	return 0;
}
*/

//ʹ��strcpy����
/*
int main()
{
	char arr1[] = "watergraphically";
	char arr2[20] = { 0 };
	strcpy(arr2, arr1);
	printf("%s", arr2);

	return 0;
}
*/

//ģ��ʵ��strcpy����
/*
void simulate_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[] = "watergraphically@gmail.com";
	char arr2[30] = { 0 };
	simulate_strcpy(arr2, arr1);
	printf("%s", arr2);

	return 0;
}
*/

/*
char* simulate_strcpy(char* dest, char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "watergraphically";
	char arr2[30] = { 0 };
	char* ret = simulate_strcpy(arr2, arr1);
	printf("%s", ret);

	return 0;
}
*/
// ʹ��strcat����
/*
int main()
{
	char arr1[] = "world";
	char arr2[20] = "hello ";
	strcat(arr2, arr1);
	printf("%s", arr2);

	return 0;
}
*/

/*
int main()
{
	char arr[20] = "hello ";
	strcat(arr, arr);
	printf("%s", arr);

	return 0;
}
*/

//ģ��ʵ��strcat����
/*
void simulate_strcat(char* dest, const char* src)
{
	assert(dest && src);
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
	char arr1[] = "@gmail.com";
	char arr2[30] = "watergraphically";
	simulate_strcat(arr2, arr1);
	printf("%s", arr2);

	return 0;
}
*/

/*
char* simulate_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;

	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "@gmail.com";
	char arr2[30] = "watergraphically";
	char* ret = simulate_strcat(arr2, arr1);
	printf("%s", ret);

	return 0;
}
*/

// ʹ��strcmp����
/*
int main()
{
	char arr1[] = "abcq";
	char arr2[] = "abcdefghijk";
	char arr3[] = "abcq";
	char arr4[] = "abcq";
	char arr5[] = "abcqe";
	char arr6[] = "abcqw";

	printf("%d\n", strcmp(arr1, arr2));
	printf("%d\n", strcmp(arr3, arr4));
	printf("%d\n", strcmp(arr5, arr6));

	return 0;
}
*/

//ģ��ʵ��strcmp����
/*
int simulate_strcmp(const char* str1, const char* str2)
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
	char arr1[] = "watergraphically";
	char arr2[] = "watergeographlly";
	int ret = simulate_strcmp(arr1, arr2);

	if (ret > 0)
	{
		printf("arr1 > arr2");
	}
	else if (ret == 0)
	{
		printf("arr1 == arr2");
	}
	else
	{
		printf("arr1 < arr2");
	}

	return 0;
}


// ʹ��strncpy����
/*
int main()
{
	char arr1[] = "hello C";
	char arr2[] = "###############";
	strncpy(arr2, arr1, 9);
	printf("%s", arr2);

	return 0;
}
*/

//ģ��ʵ��strncpy����
/*
void simulate_strncpy(char* dest, const char* src, int num)
{
	assert(dest && src);
	
	for (num; *src != '\0' && num > 0; num--)
	{
		*dest++ = *src++;
	}
	for (; num > 0; num--)
	{
		*dest++ = '\0';
	}
}

int main()
{
	char arr1[] = "@gmail.com";
	char arr2[20] = "*******************";
	simulate_strncpy(arr2, arr1, 18);
	printf("%s", arr2);

	return 0;
}
*/

/*
char* simulate_strncpy(char* dest, const char* src, int num)
{
	assert(dest && src);
	char* ret = dest;
	for (num; num > 0 && *src != '\0'; num--)
	{
		*dest++ = *src++;
	}
	for (; num > 0; num--)
	{
		*dest++ = '\0';
	}
	return ret;
}

int main()
{
	char arr1[] = "@gmail.com";
	char arr2[20] = "*******************";
	char* ret = simulate_strncpy(arr2, arr1, 18);
	printf("%s", ret);

	return 0;
}
*/

// ʹ��strncat����
/*
int main()
{
	char arr1[] = "@gmail.com";
	char arr2[40] = "watergraphically";
	strncat(arr2, arr1, 15);

	return 0;
}
*/


//ģ��ʵ��strncat����
/*
void simulate_strncat(char* dest, const char* src, int num)
{
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}
	for (num; num > 0 && *src != '\0'; num--)
	{
		*dest++ = *src++;
	}
}

int main()
{
	char arr1[] = "@gmail.com";
	char arr2[40] = "watergraphically";
	simulate_strncat(arr2, arr1, 10);
	printf("%s", arr2);

	return 0;
}
*/

/*
char* simulate_strncat(char* dest, const char* src, int num)
{
	assert(dest && src);
	char* ret = dest;

	while (*dest)
	{
		dest++;
	}
	for (num; num > 0 && *src != '\0'; num--)
	{
		*dest++ = *src++;
	}
	return ret;
}

int main()
{
	char arr1[] = "@gmail.com";
	char arr2[40] = "watergraphically";
	char* ret = simulate_strncat(arr2, arr1, 10);
	printf("%s", ret);

	return 0;
}
*/

// ʹ��strncmp����
/*
int main()
{
	char arr1[] = "watergraphically";
	char arr2[] = "watergeographily";
	int ret = strncmp(arr1, arr2, 7);

	if (ret > 0)
	{
		printf("���Ƚ�ǰ%d���ַ�ʱ:arr1 > arr2", 7);
	}
	else if (ret == 0)
	{
		printf("���Ƚ�ǰ%d���ַ�ʱ:arr1 == arr2", 7);
	}
	else
	{
		printf("���Ƚ�ǰ%d���ַ�ʱ:arr1 < arr2", 7);
	}

	return 0;
}
*/

//ģ��ʵ��strncmp����
/*
int simulate_strncmp(const char* str1, const char* str2, int num)
{
	assert(str1 && str2);
	while (num && (*str1 == *str2))
	{
		num--;
		if (num == 0)
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
	char arr1[] = "watergraphically";
	char arr2[] = "watergeographily";
	int ret = simulate_strncmp(arr1, arr2, 7);

	if (ret > 0)
	{
		printf("���Ƚ�ǰ%d���ַ�ʱ:arr1 > arr2", 7);
	}
	else if (ret == 0)
	{
		printf("���Ƚ�ǰ%d���ַ�ʱ:arr1 == arr2", 7);
	}
	else
	{
		printf("���Ƚ�ǰ%d���ַ�ʱ:arr1 < arr2", 7);
	}

	return 0;
}
*/


// ʹ��strstr����
/*
int main()
{
	char arr1[] = "watergraphicallllyy@gmail.com";
	char arr2[] = "lly";
	char* ret = strstr(arr1, arr2);
	printf("%s", ret);

	return 0;
}
*/


//ģ��ʵ��strstr����
/*
const char* simulate_strstr(const char* dest, const char* src)
{
	assert(dest && src);
	const char* s1 = NULL;
	const char* s2 = src;
	const char* cur = dest;

	if (*s2 == '\0')
	{
		return NULL;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = src;
		while (*s1 == *s2)
		{
			s1++;
			s2++;
			if (*s2 == '\0')
			{
				return cur;
			}
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "watergraphicallllyy@gmail.com";
	char arr2[] = "lly";
	char* ret = simulate_strstr(arr1, arr2);
	printf("%s", ret);

	return 0;
}
*/

/*
int main()
{
	char arr[] = "watergraphically@gmail.com";
	char* sep = "@ .";
	char* str = NULL;
	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	{
		printf("%s\n", str);
	}

	return 0;
}
*/

/*
#include <errno.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		printf("%s\n", strerror(i));
	}

	return 0;
}
*/
