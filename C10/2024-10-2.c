// #include <stdio.h>
// int main()
// {
//     char arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//     int i = 0;
//     scanf("%d ", &i);
//     printf("%d ", arr[i]);
//     return 0;
// }

//打印二维数组的每个元素
// #include <stdio.h>
// int main()
// {
//     char arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    
//     int i = 0;
//     for(i = 0; i < 3; i++)
//     {
//         int j = 0;
//         for(j = 0; j < 4; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


//打印二维数组的每个元素地址
// #include <stdio.h>
// int main()
// {
//     int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

//     int i = 0;
//     for(i = 0; i < 3; i++)
//     {
//         int j = 0;
//         for(j = 0; j < 4; j++)
//         {
//             printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//         }
//     }
//     return 0;
// }


//实现冒泡排序
/*
void bouble_sort(char arr[], int sz)
{
    int i = 0;
    for(i = 0; i < sz - 1; i++)
    {
        int j = 0;
        for(j = 0; j < sz - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
}

#include <stdio.h>
int main()
{
    char arr[] = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);

    bouble_sort(arr, sz);

    int k = 0;
    for(k = 0; k < sz; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
*/


//打印一维数组的每个字符
// #include <stdio.h>
// int main()
// {
//     char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//     int i = 0;
//     for(i = 0; i < 10; i++)
//     {
//         printf("%d ", i);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int i = 0;
//     for(i = 0; i < sz; i++)
//     {
//         printf("arr[%d] = %d", i, arr[i]);
//     }
//     return 0;
// }


//打印数组的每个元素地址
// #include <stdio.h>
// int main()
// {
//     char arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//     int i = 0;
//     for(i = 0; i < 10; i++)
//     {
//         printf("arr[%d] = %p\n", i, &arr[i]);
//     }
//     return 0;
// }