//计算n的阶乘（用递归与迭代）
/*
#include <stdio.h>
int fac(int n)
{
    if(n<=1)
    return 1;

    else if(n > 1)
    {
        return n * fac(n - 1);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fac(n);;
    printf("%d", ret);

    return 0;
}
*/


/*
#include <stdio.h>
int fac(int n)
{
    int ret1 = 1;
    int i = 0;
    for(i = 1; i <= n; i++)
    {
        ret1 = ret1 * i;
    }

    return ret1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fac(n);
    printf("%d", ret);

    return 0;
}
*/


//求第n个斐波那契数列
/*
#include <stdio.h>
int fib(int n)
{
    if(n < 3)
    return 1;
    else
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d", ret);
    return 0;
}
*/


/*
#include <stdio.h>
int fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    
    while(n >= 3)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d", ret);
    return 0;
}
*/


//写代码将三个整数按从大到小输出
/*
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if(a < b)
    {
        int tem = a;
        a = b;
        b = tem;
    }
    if(a < c)
    {
        int tem = a;
        a = c;
        c = tem;
    }
    if(b < c)
    {
        int tem = b;
        b = c;
        c = tem;
    }

    printf("%d %d %d", a, b, c);
    return 0;
}
*/


//写代码打印1~100之间所有3的倍数
/*
#include <stdio.h>
int main()
{
    int i = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 3 == 0)
        printf("%d ", i);
    }

    return 0;
}
*/


//给定两个数，求这两个数的最大公约数
/*
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = 0;
    
    while(a % b)
    {
        c = a % b;
        a = b;
        b = c;
    }

    printf("%d", c);
    return 0;
}
*/


//求两个数最小公约数
/*
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    int c = 0;
    int d = a * b;

    while(a % b)
    {
        c = a % b;
        a = b;
        b = c;
    }

    printf("%d", d/c);
    return 0;
}
*/


//编写程序数一下1~100的所有整数中出现了多少个数字9
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

    printf("%d", count);
    return 0;
}
*/


//计算1/1-1/2+1/3-1/4……+1/99-1/100
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
       flag = -flag;
    }

    printf("%f", sum);
    return 0;
}
*/


//求10个整数中最大值
/*
#include <stdio.h>
int main()
{
    int i = 0;
    int arr[10] = { 0 };
    int max = arr[0];

    for(i = 1; i < 10; i++)
    {
        scanf("%d ", &arr[i]);       
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d", max); 
    return 0;
}
*/


//在屏幕上输出9*9乘法口诀表
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
            printf("%d*%d = %02d ", i, j, j*i);
        }
        printf("\n");
    }

    return 0;
}
*/


//写一个函数交换两个变量
/*
void Swap(int* px, int* py)
{
    int tem = *px;
    *px = *py;
    *py = tem;
}

#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("交换前:a=%d b=%d\n", a, b);
    
    Swap(&a, &b);
    printf("交换后:a=%d b=%d\n", a, b);
    return 0;
}
*/


//实现一个函数，打印乘法口诀表，口诀表的行列数自己定
/*
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);

    int i = 0;
    for(i = 1; i <= n; i++)
    {
        int j = 0;
        for(j = 1; j <= i; j++)
        {
            printf("%d*%d= %02d ", j, i, i*j);
        }
        printf("\n");
    }

    return 0;
}
*/


/*
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    double s = (a + b + c) / 2.0;
    
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        printf("area=%f", area);
    }
    else
    {
        printf("is not triangle!");
    }

   return 0;
}
*/


/*
#include <stdio.h>
#include<math.h>
int main()
{
	float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f,%f,%f", &a, &b, &c);

    float d = b*b - (4*a*c);
    float e = (-b) / (2*a);

    if(d > 0)
    {
        double x1 = (-b + sqrt(d)) / 2*a;
        double x2 = (-b - sqrt(d)) / 2*a;
        printf("x1=%.5f\nx2=%.5f", x1, x2);
    }
    else if(d < 0)
    {
         double x1 = ((-b + sqrt(-d))) / 2*a;
         double x2 = ((-b - sqrt(-d))) / 2*a;
         printf("x1=%.5f+%.5fi\nx2=%.5f-%.5fi", e, x1, e, x2);
    }
    else
    {
        printf("x1=x2=%.5f", e);
    }

	return 0;
}
*/


/*
#include <stdio.h>
int main()
{
   int i = 0;
   int n = 0;
   scanf("%d", &n);
   long sum = 0;
   int ret = 1;

   for(i = 1; i <= n; i++)
   {
    ret = ret * i;
    printf("%d!=%d\n", i, ret);
    sum = sum + ret;
   }
   
   printf("1!+2!…+%d!=%ld\n", n, sum);
   return 0;
}
*/

//用fo循环求分数序列：2/1+3/2+5/3+8/5+13/8+21/13+……
/*
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    float fz = 2.0;
    float fm = 1.0;
    float sum = 0;

    for(i = 1; i <= n; i++)
    {
        sum = sum + fz / fm;
        float temp = fz;
        fz = fz + fm;
        fm = temp;
    }

    printf("%.2f", sum);
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
	int i, n, sum=0;
   int arr[n] = { 0 };
   n = 5;

   for(i = 0; i < n; i++)
   {
      scanf("%d ", arr[i]);
      if(arr[i] < 0)
      {
         n++;
         continue;
      }
      else
      sum = sum + arr[i];     
   }

   printf("sum=%d\n",sum);
   return 0;	
}
*/