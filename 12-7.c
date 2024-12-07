#define  _CRT_SECURE_NO_WARNINGS

//模拟实现strlen函数
/*
size_t my_strlen(const char* str)
{
	size_t count = 0;
	assert(str);
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
*/

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <math.h>

/*
size_t my_strlen(const char arr[])
{
	size_t i = 0;
	size_t count = 0;
	assert(arr);
	while (arr[i] != '\0')
	{
		i++;
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	
	printf("%d", my_strlen(arr));

	return 0;
}
*/

/*
size_t my_strlen(const char* str)
{
	assert(str);
	char* s = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - s);
}

int main()
{
	char arr[] = "guanzhou";

	printf("%d", my_strlen(arr));

	return 0;
}
*/

/*
size_t my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}

	return 1 + my_strlen(str + 1);
}

int main()
{
	char arr[] = "huananligongdaxue";
	
	printf("%u", my_strlen(arr));
	return 0;
}
*/


//模拟实现strcpy函数
/*
char* my_strcpy(char* str1, const char* str2)
{
	assert(str1 && str2);
	char* ret = str1;
	while (*str2 != '\0')
	{
		*str1++ = *str2++;
	}
	return ret;
}

int main()
{
	char arr1[] = "welcome to guanzhou";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);

	return 0;
}
*/

//模拟实现strcat函数
/*
char* my_strcat(char* str1, const char* str2)
{
	assert(str1 && str2);
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1++ = *str2++;
	}
	*str1 = '\0';

	return ret;
}

int main()
{
	char arr1[100] = "guanzhou ";
	char arr2[] = "welcome you";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}
*/

//模拟实现strncpy函数
/*
// 自定义的my_strncpy函数，模拟实现strncpy的功能
char* my_strncpy(char* dest, const char* src, size_t n) {
	char* original_dest = dest;
	// 循环复制，直到复制了n个字符或者遇到源字符串结束符'\0'
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	// 如果n还有剩余，用'\0'填充目标字符串剩余部分
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return original_dest;
}

int main() {
	char dest[] = "welcome to huanan";
	char src[] = "Hello";
	// 调用自定义的函数进行字符串复制，这里复制前5个字符
	my_strncpy(dest, src, 5);
	printf("%s\n", dest);
	return 0;
}
*/

/*
char* my_strncpy(char* dest, const char* src, size_t num) 
{
	assert(dest && src);
	char* ret = dest;
	size_t i = 0;
	for (i = 0; i < num && src[i] != '\0'; i++) 
	{
		dest[i] = src[i];
	}
	// 若源字符串长度小于5，用'\0'填充目标字符串剩余部分
	for (; i < num; i++) 
	{
		dest[i] = '\0';
	}
	return ret;
}

int main() {
	char arr1[] = "welcome to huanan";
	char arr2[] = "hello";
	my_strncpy(arr1, arr2, 5);
	printf("%s\n", arr1);
	return 0;
}
*/

//模拟实现strncat函数
/*
char* my_strncat(char* dest, char* src, size_t n)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}

	*dest = '\0';

	return ret;
}

int main()
{
	char arr1[20] = "welcome ";
	char arr2[] = "to huanan";
	my_strncat(arr1, arr2, 9);
	printf("%s", arr1);
	return 0;
}
*/

//模拟实现strncmp函数
/*
int my_strncmp(const char* dest, const char* src, size_t n)
{
	assert(dest && src);
	
	while (*dest++ == *src++ && n > 0)
	{
		n--;
	}
	return (*dest - *src);
}

int main()
{
	char* arr1[] = "abcdef";
	char* arr2[] = "abcq";
	int ret = my_strncmp(arr1, arr2, 3);

	if (ret > 0)
		printf(">");
	else if (ret == 0)
		printf("==");
	else
		printf("<");

	return 0;
}
*/


//模拟实现strstr函数
/*
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;

	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p;
		}
		p++;
	}

	return NULL;
}

int main()
{
	char arr1[] = "abbbcbbbcbdef";
	char arr2[] = "bbbc";
	char* ret = my_strstr(arr1, arr2);

	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s", ret);
	}

	return 0;
}
*/


/*
int main()
{
	const char* sep = "@.";
	char email[] = "watergraphically@gmail.com";
	char cp[30] = { 0 };
	strcpy(cp, email);

	char* ret = NULL;
	for(ret = strtok(cp, sep);
		ret != NULL;
		ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}

	return 0;
}
*/

//模拟实现memcpy
/*
void* my_memcpy(void* str2, void* str1, size_t n)
{
	assert(str1 && str2);
	void* ret = str2;
	while (n--)
	{
		*(char*)str2 = *(char*)str1;
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
 	}
	return ret;
}

int main()
{
	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1, 18);

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}
*/

//模拟实现memmove函数
/*
void* my_memmove(void* dest, void* src, size_t n)
{
	assert(dest && src);
	void* ret = dest;

	if (dest < src)
	{
		while (n--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (n--)
		{
			*((char*)dest + n) = *((char*)src + n);
		}
	}

	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	my_memmove(arr, arr + 2, 20);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/


/*
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,3,2 };
	int ret = memcmp(arr1, arr2, 12);
	printf("%d\n", ret);

	return 0;
}
*/


/*
int main()
{
	int input = 0;
	while (scanf("%d", &input) == 1)
	{
		int n = 0;
		int i = 0;
		int sum = 0;
		int j = 0;
		while (input)
		{
			n = input % 10;
			input /= 10;

			if (n % 2 == 1)
			{
				i = 1;
			}
			else
			{
				i = 0;
			}
			sum += i * pow(10, j++);
		}

		printf("%d", sum);
	}
	
	return 0;
}
*/

/*
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (i + j < n - 1)
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}
	}

	return 0;
}
*/


/*
int main()
{
	double price = 0.0;
	int month = 0;
	int day = 0;
	int flag = 0;

	while (scanf("%lf %d %d %d", &price, &month, &day, &flag) == 4)
	{
		if (month == 11 && day == 11)
		{
			price = price * 0.7 - flag * 50;
		}
		else if (month == 12 && day == 12)
		{
			price = price * 0.8 - flag * 50;
		}

		if (price < 0.0)
		{
			printf("0\n");
		}
		else
		{
			printf("%.2f\n", price);
		}

	}

	return 0;
}
*/

/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = 0;
	int i = 0;
	int j = 0;
	int num = 1;
	for (i = 0; i < n; i++)
	{
		for (m = 1; m <= n - i; m++)
		{
			printf("  ");
		}
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == 1)
			{
				num = 1;
			}
			else
			{
				num = num * (i - j + 1) / j;
			}
			printf("%d ", num);
		}
		printf("\n");
	}

	return 0;
}
*/


/*
int main() {
	int rows = 0;
	int coef = 1;
	scanf("%d", &rows);

	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int space = 0;
		int j = 0;
		for (space = 1; space <= rows - i; space++)
		{
			printf("   ");
		}
		for(j = 0; j <= i; j++) 
		{
			if (j == 0 || i == 0) 
			{
				coef = 1;
			}
			else 
			{
				coef = coef * (i - j + 1) / j;
			}
			printf("%6d", coef);
		}
		printf("\n");
	}

	return 0;
}
*/

