int power(int a, int b)
{
    int i = 0;
    int ret = 1;
    for (i = 1; i <= b; i++)
    {
        ret = ret * a;
    }
    return ret;
}

int main()
{
    int a, b, s;
    scanf("%d%d", &a, &b);
    s = power(a, b);     
    printf("%d\n", s);
    return 0;
}


#include <stdio.h>
int gcd(int a, int b)
{
    int c = 0;
    while (c = a % b)
    {
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int ret = gcd(a, b);
    printf("最大公约数为：%d\n", ret);
    printf("最小公倍数为：%d", a * b / ret);

    return 0;
}


#include <stdio.h>
int  power(int x, int n)
{
    int t = 1;
    int i;
    for (i = 0; i < n; i++)
    {
        t = t * x;
    }
    return t;
}

int main()
{
    int a, b, s;
    scanf("%d%d", &a, &b);
    /*调用power( )函数，计算并输出a的b次幂*/
    /********** Begin **********/
    s = power(a, b);
    printf("%d\n", s);
    /********** End **********/
    /*调用power( )函数，计算并输出a的3次幂*/
    /********** Begin **********/
    int s1 = power(a, 3);
    printf("%d\n", s1);
    /********** End **********/
    /*调用power( )函数，计算并输出2的a+b次幂*/
    int s2 = power(2, a + b);
    printf("%d\n", s2);
    /*调用power( )函数，求a的3次幂的b+2次幂 */
    /********** Begin **********/
    int s3 = power(s1, b + 2);
    printf("%d", s3);
    /********** End **********/
    return 0;
}


#include <stdio.h>
void  prime(int m);                         //prime()函数声明
int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        prime(a[i]);  //调用无返回值函数，判断a[i]是否是素数
    }
    return 0;
}
/*****定义void  prime(int m) *****/
/********** Begin **********/
void prime(int m)
{
    if (m <= 1)
    {
        printf("1不是素数\n");
    }
    else
    {
        int i = 0;
        int flag = 1;
        for (i = 2; i <= sqrt(m); i++)
        {
            if (m % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d 是素数.\n", m);
        }
        else
        {
            printf("%d 不是素数.\n", m);
        }
    }
}


#include<stdio.h>
/*****定义fun()函数*****/
double fun(int n)
{
    int i = 0;
    double sum = 0.0;
    for (i = 1; i <= n; i++)
    {
        if (i % 5 == 0 || i % 9 == 0)
        {
            sum = sum + 1.0 / i;
        }
    }
    return sum;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    double ret = fun(n);
    printf("%.2lf", ret);

    return 0;
}


#include <stdio.h>
/********** Begin **********/
int fun(int a, int b)
{
    int s1 = b % 10;//千位
    int s2 = a / 10;//百位
    int s3 = b / 10;
    int s4 = a % 10;
    int sum = s1 * 1000 + s2 * 100 + s3 * 10 + s4;
    return sum;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = fun(a, b);
    printf("c=%d", c);
    return 0;
}

