//用递归方式打印一个整数的每一位
/*
#include <stdio.h>

int print(int i)
{
    if(i > 9)
    {
        print(i / 10);
    }
    printf("%d ", i % 10);
}

int main()
{
    int i = 0;
    scanf("%d ", &i);
    print(i);
    return 0;
}
*/


//用递归和非递归分别实现求n的阶乘

//非递归
/*
#include <stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {

        ret = ret * i;
    }
    printf("ret = %d ", ret);
    return 0;
}
*/

//递归
/*
int fac(int n)
{
    if(n > 1)
    {
        return n * fac(n - 1);
    }
    else
    {
        return n;
    }
}

#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);

    int ret = fac(n);
    printf("ret = %d", ret);

    return 0;
}
*/


//用递归和非递归分别实现strlen
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "abc";
    int len = strlen(arr);
    printf("%d", len);
    return 0;
}
*/


//递归
/*
#include <stdio.h>

int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1+my_strlen(str + 1);
    }
}

int main()
{
    char arr[] = "abc";
    int len = my_strlen(arr);

    printf("%d", len);
    return 0;
}
*/


//字符串逆序(将字符串的字符反向排列)
//迭代
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr[] = "abcdef";
//     int left = 0;
//     int right = strlen(arr)-1;

//     while(left < right)
//     {
//         int tem = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tem;

//         left++;
//         right--;
//     }    

//     printf("%s\n", arr);
//     return 0;
// }


//递归
/*
#include <stdio.h>
#include <string.h>

void severse(char arr[], int left, int right)
{
    int tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;

    if(left < right)
    {
        severse(arr, left+1, right-1);
    }
}

int main()
{
    char arr[] = "abcdefg";
    int left = 0;
    int sz = strlen(arr);
    int right = sz - 1;

    severse(arr, left, right);

    printf("%s", arr);
    return 0;
}
*/


/*
#include <stdio.h>
int DigitSum(unsigned int i)
{
    if(i > 9)
    {
       return DigitSum(i / 10) + i % 10;
    }  
}

int main()
{
    unsigned int i = 0;
    scanf("%u", &i);
    int sum = DigitSum(i);

    printf("%d", sum);
    return 0;
}
*/



/*
#include <stdio.h>

void reverse(char arr[], int left, int right)
{
    int tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;

    if(left < right)
    {
        reverse(arr, left+1, right-1);
    }
}

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
    char arr[] = "abcdefg";
    int left = 0;
    int sz = my_strlen(arr);
    int right = sz - 1;

    reverse(arr, left, right);

    printf("%s", arr);
    return 0;
}
*/



/*
#include <stdio.h>
#include <math.h>

double Pow(int n, int k)
{
    if(k > 0)
    {
        return n * Pow(n, k-1);
    }
    if(k == 0)
    {
        return 1;
    }
    else
    {
        return 1.0 / Pow(n, -k);
    }
}

int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);

    double ret = pow(n, k);

    printf("%lf", ret);
    return 0;
}
*/



//递归
/*
#include <stdio.h>
int Fib(int n)
{
    if(n <= 2)
    {
        return 1;
    }
    else
    {
        return Fib(n-1) + Fib(n -2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int ret = Fib(n);
    printf("%d", ret);

    return 0;
}
*/


//非递归
/*
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
    scanf("%d", &n);
    
    int ret = Fib(n);

    printf("%d", ret);
    return 0;
}
*/



/*
#include <stdio.h>
int main()
{
    char arr1[] = { 1,3,5,7,9 };
    char arr2[] = { 2,4,6,8,0 };
    int sz =sizeof(arr1) / sizeof(arr1[0]);

    int i = 0;
    for(i = 0; i < sz; i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }

    for(i = 0; i < sz; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for(i = 0; i < sz; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}
*/


/*
#include <stdio.h>
void init(char arr[], int sz)
{
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        arr[i] = 0;
    }
}

void print(char arr[], int sz)
{
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}

void reverse(char arr[], int sz)
{
    int left = 0;
    int right = sz - 1;

    while(left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;

        left++;
        right--;
    }
}

int main()
{
    char arr[] = { 1,2,3,4,5,6,7,8,9,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    print(arr, sz);
    printf("\n");
    reverse(arr, sz);
    print(arr, sz);
    printf("\n");
    init(arr, sz);
    print(arr, sz);

    return 0;
}
*/