#define _CRT_SECURE_NO_WARNINGS
//求补码的二进制中1的个数
/*
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int a = 1;
	int count = 0;
	for (i = 1; i < 32; i++)
	{
		if (n & a)
		{
			count++;
		}
		a = a << 1;
	}
	printf("%d", count);
	return 0;
}
*/


/*
int a = 10;//初始化
int x = 0;//初始化
int y = 20;//初始化
a = x = y + 1;//赋值
*/ 

/*
int a = 10;
int n = sizeof(int);
int n = sizeof(a);
*/

/*
#include <stdio.h>
int main()
{
	int a = (int)3.14;

	printf("%d", a);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a = b + 10, a, b = a + 1, a > b);
	printf("%d", c);
	return 0;
}
*/

/*
char c = 1;
printf("%u\n", sizeof(c));//结果为1
printf("%u\n", sizeof(+c));//结果为4
printf("%u\n", sizeof(-c));//结果为4
*/

/*
#include <stdio.h>
int fic(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
	{
		return fic(n - 1) + fic(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fic(n);
	printf("%d", ret);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d\n", &n);
	int arr[n];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int dcl = 0;
	scanf("%d", &dcl);
	int j = 0;
	for (j = 0; i < n; i++)
	{
		if (arr[j] != dcl)
		{
			arr[j++] = arr[i];
		}
	}
	for (i = 0; i < j; i++)
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
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	int max = 0;
	int min = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("%d", max - min);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char ch = 0;
	while (scanf(" %c", &ch) == 1)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			printf("%c", ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c", ch + 32);
		}
	}
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	char ch = 0;
	while (scanf(" %c", &ch) == 1)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			printf("%c is an alphabet\n", ch);
		}
		else
		{
			printf("%c is not an alphabet\n", ch);
		}
	}

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int i = 0;
	int s = 0;
	int max = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &s);
		if (s > max)
		{
			max = s;
		}
	}
	printf("%d", max);

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int n = 0;
	int sum = 0;
	for (n = 10000; n <= 99999; n++)
	{
		int i = 0;
		for (i = 10; i <= 10000; i *= 10)
		{
			sum = sum + (n % i) * (n / i);
		}
		if (sum == n)
		{
			printf("%d ", n);
		}
	}

	return 0;
}
*/

/*
int a = 10;//在内存中开辟一块空间
int* p = &a;//这里对变量a，取出它的地址，可以使用&操作符
*/          //a变量占用4个字节的空间，这里是将a的4个字节的第一个字节的地址存放在p变量中，p就是一个指针变量

/*
int arr[10] = { 0 };
int *p = arr;//通过指针来访问数组
int i = 0;
for (i = 0; i < 10; i++)
{
	printf("%d ", *(p + i));
}
*/


struct Peo
{
	char name[10];
	char tele[12];
	char sex[5];
	int high;
};

struct Stu
{
	struct Peo p;
	int num;
	float f;
};

void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
}

void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
}
int main()
{
	struct Peo p1 = { "zhangsan", "10000000000", "nan", 181 };//结构体变量的创建
	//结构体的初始化
	struct St s = { {"lisi", "10000000001", "nu"}, 100, 3.14f };//结构体嵌套初始化


	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);//打印
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);

	print1(p1);
	print2(&p1);
	return 0;
}
