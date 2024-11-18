//20000行有效代码的积累
/*
#include <stdio.h>

int main()
{  
    int line = 0;

    printf("加入湖工商\n");

    while(line < 20000)
    {
        printf("写代码:%d\n", line);
        line++;
    }

    if(line == 20000)
    {
        printf("好offer\n");
    }
    else
       printf("继续加油\n");

    return 0;
}
*/

//求两个任意整数的和，用函数
/*
#include <stdio.h>

int Add(int x, int y)
{
    return (x + y);
}

int main()
{
    int n1 = 0;
    int n2 = 0;

    scanf("%d %d", &n1, &n2);

    int sum = Add(n1, n2);
    printf("%d ", sum);

    return 0;
}
*/

/*
#include <stdio.h>
#include <windows.h>

int main()
{
    int input = 0;

    printf("加入湖工商\n");
    printf("要好好学习吗(1/0):");

    scanf("%d", &input);

    if(input == 1)
    {
        printf("好offer\n");
    }
    else
    {
        printf("卖红薯\n");
    }

    return 0;
}
*/

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//     char arr1[] = {"abcdef"};

//     printf("%d\n", strlen(arr1));
//     printf("%d\n", strlen(arr2));

//     return 0;
// }

//写一个函数求两个数的最大值
// #include <stdio.h>

// int max(int x, int y)
// {
//       if(x > y)
//     return x;
//       else
//     return y;
// }

// int main()    
// {
//     int a = 0;
//     int b = 0;

//     scanf("%d %d", &a, &b);

//     int c = max(a, b);

//     printf("%d\n", c);

//     return 0;
// }

//打印小飞机
// #include <stdio.h>
// int main()
// {
//     printf("     **     \n");
//     printf("     **     \n");
//     printf("************\n");
//     printf("************\n");
//     printf("    *  *    \n");
//     printf("    *  *    \n");

//     return 0;
// }


//输出学生信息
// #include <stdio.h>
// int main()
// {
//     printf("Name    Age    Gender\n");
//     printf("---------------------\n");
//     printf("Jack    18     man   \n");

//     return 0;
// }


//计算表达式的值
// #include <stdio.h>
// int main()
// {
//     int a = 40;
//     int c = 212;

//     printf("%d\n", (-8+22)*a-10+c/2);

//     return 0;
// }

//计算y的值
// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     int y = 0;
    
//     scanf("%d", &x);

//     if(x < 0)
//     y = 1;
//     else if(x == 0)
//     y = 0;
//     else
//     y = -1;

//     printf("%d\n", y);

//     return 0;
// }


//访问数组的元素
// #include <stdio.h>
// int main()
// {
//     char arr[] = {1,2,3,4,5,6,7,8,9,0};
//     int i = 0;

//     for(i = 0; i < 10; i++)
//     printf("%d\n", arr[i]);

//     return 0;
// }

