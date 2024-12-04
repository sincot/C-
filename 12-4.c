#define  _CRT_SECURE_NO_WARNINGS

/*
struct Stu
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;

//假设p的值为0x100000.
//已知，结构体Test类型的变量大小是20个字节
//0x1在16进制中表示为1，所以加上0x1相当于加上了1
int main()
{
	printf("%p", p + 0x1);
	//p这里是结构体指针，加上1跳过一个结构体类型，而一个结构体类型的大小为20个字节
	//由于p的值是16进制，所以要将20转换为16进制，表示为0x14，
	//所以p+0x1相当于0x100000+0x14=0x100014
	printf("%p", (unsigned long)p + 0x1);
	//将p强制类型转换为unsigned long类型，所以0x100000表示为一个数，即1048576
	//所以(unsigned long)p + 0x1相当于1048576+1=1048577，转换为16进制为0x100001
	printf("%p", (unsigned int*)p + 0x1);
	//将p强制类型转换为(unsigned int*)，加上1相当于跳过了一个int类型，
	// 而int类型的大小为4个字节，
	//所以 (unsigned int*)p + 0x1相当于0x100000+4=0x100004
	return 0;
}
*/


/*
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}
//将数组的存储具象化,小端存储
//(01 00 00 00)(02 00 00 00)(03 00 00 00)(04 00 00 00)
//&a取出整个数组的地址，+1跳过一个数组的大小，所以ptr1指向最后一个00的后面；
//a是数组名，表示数组首元素的地址，强制类型转换为int类型，
//此时a不再表示地址而是一个整数，整数+1，再强制类型转换为int*的指针，
//将(int)a+1当成一个地址，此时ptr2指向的是第二个00的前面；
//ptr[-1]相当于*(ptr1 - 1),ptr1是一个int*的指针，-1向前跳过1个int类型，
//所以ptr[-1]指向的是04的前面，向后访问一个int类型，即为00 00 00 04,所以打印出来的是4；
//*ptr2从第二个00的前面，向后访问1个int类型，即00 00 00 02，
//所以打印的结果为2 00 00 00;
*/

/*
int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

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
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int x = 0;
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			continue;
		}
		else
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}


#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			if (arr[i] == arr[i - j])
			{
				k = 1;
				break;
			}
		}
		if (k == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}


#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x = 0;
	scanf("%d", &x);
	int count = 0;

	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}
*/


#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	while(scanf("%d", &n) != EOF)
	{
		int i = 0;
		int arr[20] = { 0 };
		int k = 0;
		int j = 0;
		int count = 0;
		for (i = 2; i <= n; i++)
		{
			arr[k] = i;
			k++;
		}
		for (j = 2; j <= sqrt(n); j++)
		{
			int m = 0;
			for (m = 1; m < k; m++)
			{
				if(arr[m] % j == 0 && arr[m] != j && arr[m] != 0)
				{
					count++;
					arr[m] = 0;
				}
			}
		}
		for (j = 0; j < k; j++)
		{
			if (arr[j] != 0)
			{
				printf("%d ", arr[j]);
			}
		}
		printf("\n");
		printf("%d", count);
	}

	return 0;
}

/*
#include <stdio.h>
int main()
{
	float arr[5][5];
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		double sum = 0.0;
		for (j = 0; j < 5; j++)
		{
			scanf("%f ", &arr[i][j]);
			printf("%f ", arr[i][j]);
			sum += arr[i][j];
		}
		printf("%.1f ", sum);
		printf("\n");
	}

	return 0;
}
*/


/*
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int arr[n][m];
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);

	printf("%d", arr[x - 1][y - 1]);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[n][m];
	int i = 0;
	int max = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%d ", &arr[i][j]);
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d", x + 1, y + 1);

	return 0;
}
*/
