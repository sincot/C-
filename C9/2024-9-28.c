//写一个函数交换两个整型变量的内容（用函数）
/*
int Swap(int* px, int* py)
{
    int z = 0;
    z = *px;
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
    printf("交换前:a = %d b = %d\n",a, b);
    //交换
    Swap(&a, &b);
    printf("交换后:a = %d b = %d\n",a, b);

    return 0;
}
*/


//写一个函数判断一个数是不是素数(sqrt函数)&is_prime函数
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
            printf("%d ", i);
            count++;
        }
    }
    printf("count = %d\n", count);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
    int k = 0;
    for(k = 2; k <= sqrt(n); k++)
    {
        if(n % k == 0)
        {
            return 0;
        }
    }
    return 1;
}

int  main()
{
    int i = 0;
    int count = 0;

    for(i = 100; i <= 200; i++)
    {
        if(is_prime(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("count = %d", count);

    return 0;
}
*/


//写一个函数判断一个数是不是闰年
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     for(i = 1000; i <= 2000; i++)
//     {
//         if(i % 4 == 0)
//         {
//             if(i % 100 != 0)
//             {
//                 printf("%d ", i);
//             }
//             else if(i % 400 == 0)
//             {
//                 printf("%d ", i);
//             }
//         }
//     }
//     return 0;
// }


/*
#include <stdio.h>
int main()
{
    int i = 0;

    for(i = 1000; i <= 2000; i++)
    {
        if((i%4 == 0 && i%100 != 0)||(i%400 == 0))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
*/


/*
int is_leap_year(int y)
{
    if(((y%4==0)&&(y%100!=0))||(y%400==0))
       return 1;
    else
       return 0;
}

#include <stdio.h>
int main()
{
    int year = 0;

    for(year = 1000; year <= 2000; year++)
    {
        if(is_leap_year(year))
        {
            printf("%d ", year);
        }
    }
    return 0;
}
*/


//写一个函数，实现一个整型有序数组的查找
/*
#include <stdio.h>
#include <windows.h>

int binary_search(int arr[], int k, int sz)
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
    return -1;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);

    int ret = binary_search(arr, k, sz);
    
    if(ret == -1)
    {
        printf("找不到");
    }
    else
    {
        printf("找到了,下标是:%d", ret);
    }

    return 0;
}
*/



//写一个函数，每调用一次这个函数，就会将num的值增加1


// int ADD(int* p)
// {
//     (*p)++;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 0;
//     ADD(&num);
//     printf("%d\n", num);
//     ADD(&num);
//     printf("%d\n", num);

//     return 0;
// }


// #include <stdio.h>

// int Add(int n)
// {
//     return n+1;
// }

// int main()
// {
//     int num = 0;
//     num = Add(num);
//     printf("%d\n", num);
//     num = Add(num);
//     printf("%d\n", num);

//     return 0;
// }