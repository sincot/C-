#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
int main()
{
    int i = 0;
    int j = 0;
    int n = 0;

    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
*/

/*
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
*/

/*
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = sz - 1;

    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }

    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

/*
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum / sz);

    return 0;
}
*/

/*
int main()
{
    int arr1[5] = { 1,3,5,7,9 };
    int arr2[5] = { 2,4,6,8,10 };
    int sz = sizeof(arr1) / sizeof(arr1[0]);

    int i = 0;
    for (i = 0; i < sz; i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
*/

//调试
/*
int main()
{
    int i = 0;
    int arr[10] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < sz; i++)
    {
        arr[i] = i;
    }
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

/*
//结果是12 4
int main()
{
    int i = 1;
    int ret = (++i) + (++i) + (++i);

    printf("%d\n", ret);
    printf("%d\n", i);

    return 0;
}
*/