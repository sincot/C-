#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
/*
int main()
{
	int day = 0;
	scanf("%d", &day);

	if (day == 1)
	{
		printf("��������\n");
	}
	else if (day == 2)
	{
		printf("�д�ѧӢ���\n");
	}
	else if (day == 3)
	{
		printf("�����ݽṹ�γ̺�java�γ�\n");
	}
	else if (day == 4 || day == 5)
	{
		printf("�д�ѧ����κ���ɢ��ѧ��\n");
		printf("�ӿ�\n");
	}
	else
	{
		printf("��Ϣ\n");
	}

	return 0;
}
*/

/*
int main()
{
	int i = 0;
	scanf("%d", &i);

	if (i < 0)
	{
		printf("��������\n");
	}
	else
	{
		if (i % 2 == 0)
		{
			printf("%d��ż��\n", i);
		}
		else
		{
			printf("%d������\n", i);
		}
	}

	return 0;
}
*/


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	if (day >= 1 && day <= 7)
//	{
//		if (day >= 1 && day <= 3)
//		{
//			printf("�����\n");
//		}
//		else if (day == 5)
//		{
//			printf("�����\n");
//		}
//		else
//		{
//			printf("�����\n");
//		}
//	}
//	else
//	{
//		printf("���ڴ���\n");
//	}
//
//	return 0;
//}

/*
int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 5:
		printf("�����\n");
		break;
	case 4:
	case 6:
	case 7:
		printf("�����\n");
		break;
	default:
		printf("���ڴ���\n");
		break;
	}
	return 0;
}
*/

/*
int main()
{
	int i = 2;

	while (i)
	{
		if (i == 1)
		{
			break;
		}
		printf("�ż� ");
		i--;
	}
	return 0;
}
*/

/*
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}
*/

/*
int main()
{
	int i = 0;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	while (i < sz)
	{
		printf("%d ", arr[i]);
		i++;
	}

	return 0;
}

int main()
{
	int i = 0;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr;
	for (p = &arr; p < p + sz; p++)
	{
		printf("%d ", *p);
	}
	return 0;
}
*/

/*
#include <string.h>
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


////��ĳλ���м�λ
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//
//	do
//	{
//		count++;
//		n /= 10;
//	} while (n);
//	printf("%d", count);
//
//	return 0;
//}


////��ӡ0~100֮�������
//#include <math.h>
//int main()
//{
//	int i = 0; 
//	for (i = 0; i <= 100; i++)
//	{		
//		int flag = 1;//��ʾ������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag && i >= 2)
//		{
//			printf("%d ", i);
//		}	
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[2][5] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//			goto next;
//		}
//		printf("\n");
//	}
//next:
//
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	while (i)
//	{
//		printf("jiejie\n");
//		if (i == 5)
//		{
//			int j = 5;
//			while (j)
//			{
//				printf("haha\n");
//				continue;//continue��
//				j--;
//			}
//			i--;
//		}
//		continue;//continueһ
//		i--;
//	}
//	return 0;
//}

//ʹ��strlen����
/*
#include <string.h>

int main()
{
	char arr[] = "watergraphically@gmail.com";
	size_t ret = strlen(arr);
	printf("%zd", ret);

	return 0;
}
*/

//ģ��ʵ��strlen����
// 
//����
/*
size_t simulate_strlen(char* str)
{
	size_t count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
*/

//ָ��-ָ��
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

//�ݹ�
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

//ģ��ʵ��strcmp����
/*
int simulate_strcmp(char* str1, char* str2)
{
	assert(str1 && str2);
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
	char arr2[] = "watergeography";
	int ret = simulate_strcmp(arr1, arr2);

	if (ret > 0)
	{
		printf("arr1 > arr2\n");
	}
	else if (ret < 0)
	{
		printf("arr1 < arr2\n");
	}
	else
	{
		printf("arr1 = arr2\n");
	}

	return 0;
}
*/

//ģ��ʵ��strncpy����
/*
void simulate_strncpy(char* dest, char* src, int num)
{
	assert(dest && src);
	while (num && (*dest++ = *src++))
	{
		num--;
		if (num == 0)
		{
			*dest = '\0';
			break;
		}
	}
}

int main()
{
	char arr1[] = "watergraphically@gmail.com";
	char arr2[30] = { 0 };
	simulate_strncpy(arr2, arr1, 10);
	printf("%s", arr2);

	return 0;
}
*/

//ģ��ʵ��strncat����
/*
void simulate_strncat(char* dest, char* src, int num)
{
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}
	while (num && (*dest++ = *src++))
	{
		num--;
		if (num == 0)
		{
			*dest = '\0';
			break;
		}
	}
}

int main()
{
	char arr1[] = "@gmail.com";
	char arr2[30] = "watergraphically";
	simulate_strncat(arr2, arr1, 6);
	printf("%s", arr2);

	return 0;
}
*/

//ģ��ʵ��strncmp����
/*
int simulate_strncmp(char* str1, char* str2, int num)
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
	char arr2[] = "watergeography";
	int ret = simulate_strncmp(arr1, arr2, 7);

	if (ret > 0)
	{
		printf("arr1 > arr2\n");
	}
	else if (ret < 0)
	{
		printf("arr1 < arr2\n");
	}
	else
	{
		printf("arr1 == arr2\n");
	}
	return 0;
}
*/

//ģ��ʵ��strstr����
/*
char* simulate_strstr(char* str1, char* str2)
{
	assert(str1 && str2);
	char* s1 = NULL;
	char* s2 = str2;
	char* cur = str1;

	if (s2 == ' ')
	{
		return NULL;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
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
	char arr1[] = "watergraphicalllyylc";
	char arr2[] = "";
	char* ret = simulate_strstr(arr1, arr2);
	printf("%s", ret);

	return 0;
}
*/

//int main()
//{
//	printf("%d\n", isspace(' '));
//	printf("%d\n", isspace('\f'));
//	printf("%d\n", isspace('\n'));
//	printf("%d\n", isspace('\r'));
//	printf("%d\n", isspace('\t'));
//	printf("%d\n", isspace('\v'));
//	printf("%d\n", isspace('b'));
//
//	return 0;
//}

/*
int main()
{
	printf("%d ", isxdigit('0'));
	printf("%d ", isxdigit('1'));
	printf("%d ", isxdigit('2'));
	printf("%d ", isxdigit('3'));
	printf("%d ", isxdigit('4'));
	printf("%d ", isxdigit('5'));
	printf("%d ", isxdigit('6'));
	printf("%d ", isxdigit('7'));
	printf("%d ", isxdigit('8'));
	printf("%d ", isxdigit('9'));
	printf("%d ", isxdigit('a'));
	printf("%d ", isxdigit('b'));
	printf("%d ", isxdigit('c'));
	printf("%d ", isxdigit('d'));
	printf("%d ", isxdigit('e'));
	printf("%d ", isxdigit('f'));
	printf("%d ", isxdigit('A'));
	printf("%d ", isxdigit('B'));
	printf("%d ", isxdigit('C'));
	printf("%d ", isxdigit('D'));
	printf("%d ", isxdigit('E'));
	printf("%d ", isxdigit('F'));
	printf("%d ", isxdigit('G')); 
	printf("%d\n", isxdigit('g'));

	return 0;
}
*/

//int main()
//{
//	char c = 'a';
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c ", c + i);
//	}
//	printf("\n");
//	for (i = 0; i < 26; i++)
//	{
//		printf("%d ", islower(c + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	char c = 'A';
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c ", c + i);
//	}
//	printf("\n");
//	for (i = 0; i < 26; i++)
//	{
//		printf("%d ", isupper(c + i));
//	}
//
//	return 0;
//}

/*
int main()
{
	char a = 'a';
	char b = 'A';
	char c = '0';
	int i = 0;
	//Сд��ĸa~z
	printf("Сд��ĸ\n");
	for (i = 0; i < 26; i++)
	{
		printf("%c ", a + i);
	}
	printf("\n");
	for (i = 0; i < 26; i++)
	{
		printf("%d ", isalnum(a + i));
	}
	printf("\n");

	//��д��ĸA~Z
	printf("��д��ĸ\n");
	for (i = 0; i < 26; i++)
	{
		printf("%c ", b + i);
	}
	printf("\n");
	for (i = 0; i < 26; i++)
	{
		printf("%d ", isalnum(a + i));
	}
	printf("\n");

	//����0~9
	printf("����\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", isalnum(c + i));
	}
	return 0;
}
*/

/*
int main()
{
	char arr[] = "WATERGRAPHICALLY@AMAIL.COM";
	int i = 0;
	int sz = strlen(arr);

	for (i = 0; i < sz; i++)
	{
		printf("%c ", tolower(arr[i]));
	}

	return 0;
}*/

/*
int main()
{
	char arr[] = "watergraphically@gmail.com";
	int i = 0;
	int sz = strlen(arr);

	for (i = 0; i < sz; i++)
	{
		printf("%c ", toupper(arr[i]));
	}

	return 0;
}
*/

