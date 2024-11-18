//按照顺序打印它的每一位接受一个整型值（无符号）
/*
#include <stdio.h>
int print(unsigned int n)
{
    if(n > 9)
    {
        print(n / 10);
    }
    printf("%d ", n % 10);
}

int main()
{
    unsigned int num = 0;
    scanf("%u", &num);
    print(num);
    return 0;
}
*/


//编写函数不允许创建临时变量，求字符串长度
/*
#include <stdio.h>

int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1+my_strlen(str+1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("%d ", len);
    return 0;
}
*/

//求字符串长度
/*
#include <stdio.h>

int my_strlen(char arr[])
{
    int count = 0;
    while(arr[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("%d ", len);
    return 0;
}
*/


/*
#include <stdio.h>

int my_strlen(char* str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("%d ", len);
    return 0;
}
*/


/*
#include <stdio.h>
int my_strlen(char str[])
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("%d ", len);
    return 0;
}
*/


//求n的阶乘
/*
#include <stdio.h>

int fac(int n)
{
    if(n <= 1)
    return 1;
    else
    return n * fac(n - 1);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fac(n);
    printf("ret = %d ", ret);
    return 0;
}
*/


//求第n个斐波拉契数

#include <stdio.h>
int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 0;

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
    scanf("%d ", &n);
    int ret = Fib(n);
    printf("%d ", ret);
    return 0;
}

