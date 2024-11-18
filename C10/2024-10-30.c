//打印一个数的每一位 
/*
#include <stdio.h>
int print(int n)
{
    if(n > 9)
    {
        print(n / 10);
    }
    printf("%d ", n % 10);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    print(n);
    return 0;
}
*/


/*
//字符串逆序（递归实现）
#include <stdio.h>
int Swap (int arr[], int sz)
{
    int left = 0;
    int right = sz - 2;

    if(left <= right)
    {
        int temp = left;
        left = right;
        right = temp;
    }
}

int main()
{
    int arr[] = {};
    scanf("%c", &arr);
    int sz = sizeof(arr) / sizeof(arr[0]);
    int arr1 = Swap(arr, sz);
    printf("%c", arr1);
    return 0;
}
//打印一个数的每一位，并求和
//将数据组1中的内容和数组2中的内容进行交换（数组一样大）
*/