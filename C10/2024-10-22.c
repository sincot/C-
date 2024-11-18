/*
#include <stdio.h>

int Fic(int n)
{
    if(n <= 2)
    return n;
    else
    return Fic(n-1) + Fic(n-2);
}

int main()
{
    int n = 0;
    scanf("%d ", &n);
    int ret = Fic(n);
    printf("%d", ret);
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d ", &n);
    int arr[n];
//输入N个数字
    int i = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
//确定删除的数字
    int del = 0;
    scanf("%d ", &del);

    int j = 0;//确定不删除数字存储的位置
    for(i = 0; i < n; i++)
    {
        if(arr[i] != del)
        {
            arr[j] = arr[i];
            j++;
        }
    }
//打印未删除的数字
    for(i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d ", &n);
    int arr[n];

    int i = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    int min = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("%d ", max-min);
    return 0;
}



#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d ", &n);
    int arr[n];
    int max = 0;
    int min = 0;
    int i = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
        if(arr[i] > max)
        max = arr[i];
        if(arr[i] < min)
        min = arr[i];
    }

    printf("%d ", max - min);

    return 0;
}
*/