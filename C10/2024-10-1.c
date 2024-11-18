//写代码将三个整数按从大到小输出
/*
int Swap(int* px, int* py)//交换时需要一个中间变量
{
    int z = *px;
    *px = *py;
    *py = z;
}

#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if(a < c)
    {
        Swap(&a, &c);
    }
    if(a < b)
    {
        Swap(&a, &b);
    }
    if(b < c)
    {
        Swap(&b, &c);
    }

    printf("%d %d %d", a, b, c);
    return 0;
}
*/



//写一个代码，打印1~100之间所有三的倍数的数字
/*
#include <stdio.h>
int main()
{
    int i = 0;

    for(i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
*/



//给定两个数，求这两个数的最大公约数（低效与高效）

//低效
/*
#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    int min = (num1 < num2) ? num1 : num2;
    int m = min;
    
    while(1)
    {
        if(num1%m==0 && num2%m==0)
        {
            printf("%d ", m);
            break;
        }
        m--;
    }
    
    return 0;
}
*/

//高效
/*
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    while(a%b)
    {
      int c = a % b;
      a = b;
      b = c;
    }
    printf("%d ", b);

    return 0;
}
*/


//打印1000~2000之间的闰年
/*
#include <stdio.h>
int main()
{
    int year = 0;

    for(year = 1000; year <= 2000; year++)
    {
        if(((year%4==0)&&(year%100!=0))||(year%400==0))
        printf("%d ", year);
    }

    return 0;
}
*/


//打印100~200之间的素数
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    int count = 0;
    
    for(i = 100; i <= 200; i++)
    {
        int j = 0;
        int flag = 1;
        for(j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            count++;
            printf("%d ", i);
        }
    }
    
    printf("count = %d", count);
    return 0;
}
*/


//编写程序数一下1到100的所有整数中出现多少个数字9
/*
#include <stdio.h>
int main()
{
    int i = 0;
    int count = 0;

    for(i = 1; i <= 100; i++)
    {
        if(i % 10 == 9)
        {
            count++;
        }
        if(i / 10 == 9)
        {
            count++;
        }
    }

    printf("count = %d", count);
    return 0;
}
*/


//分数求和，1-1/2+1/3-1/4+1/5·····+1/99-1/100
/*
#include <stdio.h>
int main()
{
    int i = 0;
    double sum = 0;
    int flag = 1;

    for(i = 1; i <= 100; i++)
    {
        sum = sum + flag * (1.0 / i);
        flag =  -flag;
    }

    printf("%f ", sum);
    
    return 0;
}
*/


//求10个整数中最大值
/*
#include <stdio.h>
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    //生成10个数，下标0~9
    for(i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int max = arr[0];

    //比较
    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d ", max);
    return 0;
}
*/


//在屏幕上输入9*9乘法口诀表
/*
#include <stdio.h>
int main()
{
    int i = 0;
    for(i = 1; i <= 9; i++)
    {
        int j = 0;
        for(j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}
*/


//二分查找
/*
#include <stdio.h>
int main()
{
    char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else if(arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("zhaodaole,xiabiaoshi:>%d", mid);
            break;
        }
    }

    if(left > right)
    {
        printf("zhaobudao");
    }

    return 0;
}
*/


/*
int binary_search(char arr[], int k, int sz)
{
    int left = 0;
    int right = sz - 1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else if(arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid; 
        }
    }

    if(left > right)
    {
        return -1;
    }
}

#include <windows.h>
#include <stdio.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);

    int ret = binary_search(arr, k, sz);

    printf("下标是:>%d ", ret);
    return 0;
}
*/


//实现一个函数交换两个整数的内容
/*
int Swap(int* px, int* py)
{
    int z = *px;
    *px = *py;
    *py = z;
}

#include <windows.h>
#include <stdio.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    printf("交换前:a=%d b=%d\n", a, b);

    Swap(&a, &b);

    printf("交换后:a=%d b=%d\n", a, b);
    return 0;
}
*/


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己定
/*
#include <stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    scanf("%d ", &n);

    for(i = 1; i <= n; i++)
    {
        int j = 0;
        for(j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
*/