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

//����p��ֵΪ0x100000.
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//0x1��16�����б�ʾΪ1�����Լ���0x1�൱�ڼ�����1
int main()
{
	printf("%p", p + 0x1);
	//p�����ǽṹ��ָ�룬����1����һ���ṹ�����ͣ���һ���ṹ�����͵Ĵ�СΪ20���ֽ�
	//����p��ֵ��16���ƣ�����Ҫ��20ת��Ϊ16���ƣ���ʾΪ0x14��
	//����p+0x1�൱��0x100000+0x14=0x100014
	printf("%p", (unsigned long)p + 0x1);
	//��pǿ������ת��Ϊunsigned long���ͣ�����0x100000��ʾΪһ��������1048576
	//����(unsigned long)p + 0x1�൱��1048576+1=1048577��ת��Ϊ16����Ϊ0x100001
	printf("%p", (unsigned int*)p + 0x1);
	//��pǿ������ת��Ϊ(unsigned int*)������1�൱��������һ��int���ͣ�
	// ��int���͵Ĵ�СΪ4���ֽڣ�
	//���� (unsigned int*)p + 0x1�൱��0x100000+4=0x100004
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
//������Ĵ洢����,С�˴洢
//(01 00 00 00)(02 00 00 00)(03 00 00 00)(04 00 00 00)
//&aȡ����������ĵ�ַ��+1����һ������Ĵ�С������ptr1ָ�����һ��00�ĺ��棻
//a������������ʾ������Ԫ�صĵ�ַ��ǿ������ת��Ϊint���ͣ�
//��ʱa���ٱ�ʾ��ַ����һ������������+1����ǿ������ת��Ϊint*��ָ�룬
//��(int)a+1����һ����ַ����ʱptr2ָ����ǵڶ���00��ǰ�棻
//ptr[-1]�൱��*(ptr1 - 1),ptr1��һ��int*��ָ�룬-1��ǰ����1��int���ͣ�
//����ptr[-1]ָ�����04��ǰ�棬������һ��int���ͣ���Ϊ00 00 00 04,���Դ�ӡ��������4��
//*ptr2�ӵڶ���00��ǰ�棬������1��int���ͣ���00 00 00 02��
//���Դ�ӡ�Ľ��Ϊ2 00 00 00;
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
