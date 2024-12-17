#define _CRT_SECURE_NO_WARNINGS

/*
#include<stdio.h>
#define N 20
int main()
{

    int a[N] = { 0 }, b[N] = { 0 };
    int i, j, k, anum, bnum, c[N + N];
    scanf("%d", &anum);   //输入数组a元素个数
    for (i = 0; i < anum; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &bnum);   //输入数组b元素个数
    for (i = 0; i < bnum; i++)
    {
        scanf("%d", &b[i]);
    }
    int* pa = &a[0];
    int* pb = &b[0];
    j = 0;
    k = 0;

    while (j < anum && k < bnum)
    {
        if (*pa > *pb)
        {
            printf("%d ", *pb);
            pb++;
            k++;
        }
        else
        {
            printf("%d ", *pa);
            pa++;
            j++;
        }
    }

    if (j < anum)
    {
        for (; j < anum; pa++)
        {
            j++;
            printf("%d ", *pa);
        }
    }
    else
    {
        for (; k < bnum; pb++)
        {
            k++;
            printf("%d ", *pb);
        }
    }

    return 0;
}
*/


/*
#include <stdio.h>
#define N 100

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int arr[N] = { 0 };
    int min = 100;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    int* parr = &arr[0];
    *parr = min;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/


/*
#include <stdio.h>
#define N 100

int main()
{

    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int arr[N] = { 0 };
    int min = 100;
    int* parr1 = NULL;
    int* parr2 = NULL;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    parr1 = &arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            parr2 = &arr[i];
        }
    }
    int tmp = *parr1;
    *parr1 = *parr2;
    *parr2 = tmp;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/


/*
#include <stdio.h>
#define N 100

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int m = 0;
    int arr[N] = { 0 };
    int sum = 0;
    int* parr1 = NULL;
    int* parr2 = NULL;
    int flag = 0;//无序
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            flag = 1;//有序
        }
    }
    parr1 = &arr[0];
    if (flag == 1)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    while (m < n - 1 && flag == 0)
    {
        int min = 100;
        for (i = m; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                parr2 = &arr[i];
            }
        }
        int tmp = *parr1;
        *parr1 = *parr2;
        *parr2 = tmp;

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        parr1++;
        m++;
        printf("\n");
    }
    return 0;
}
*/


/*
#include<stdio.h>
#define M  5
#define N  3
int main()
{
    int arr[M][N] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("每个学生的平均分：\n");
    for (i = 0; i < M; i++)
    {
        float sum = 0.0f;
        for (j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("%.1f ", sum / N);
        printf("\n");
    }
    printf("每门课的平均分：\n");
    for (j = 0; j < N; j++)
    {
        float ret = 0.0f;
        for (i = 0; i < M; i++)
        {
            ret += arr[i][j];
        }
        printf("%.1f ", ret / M);
    }

    return 0;
}
*/


/*
#include<stdio.h>
#define N 50
int main()
{
    int a[N][N], i, j, n;
    scanf("%d", &n);  //输入打印行数
    int num = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                num = 1;
            }
            else
            {
                num = num * (i - j + 1) / j;
            }
            printf("%d\t", num);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int arr[N] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = 0;
    scanf("%d", &m);
    for (i = n - 1; i >= 0; i--)
    {
        if (m < arr[i])
        {
            arr[i + 1] = arr[i];
        }
        else if (m >= arr[i])
        {
            arr[i + 1] = m;
            break;
        }
    }
    if (m < arr[1])
    {
        arr[0] = m;
    }
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int k = 0;
    int j = 1;
    int tmp = 0;
    int arr[N] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int* parr1 = &arr[1];
    int* parr2 = &arr[0];
    while (k < n - 1)
    {
        if (*parr1 < *parr2)
        {
            for (i = 0; i < j; i++)
            {
                if (arr[i] > *parr1)
                {
                    tmp = *parr1;
                    *parr1 = arr[i];
                    arr[i] = tmp;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        parr1++;
        parr2++;
        k++;
        j++;
    }
    return 0;
}
*/

/*
#define N 100
#include <stdio.h>
void reserve(int* left, int* right)
{
    while (left < right)
    {
        int tmp = *left;
        *left = *right;
        *right = tmp;
        right--;
        left++;
    }
}

int main()
{
    int n = 0;
    scanf("%d ", &n);
    int arr[N] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = 0;
    scanf("%d", &m);
    reserve(arr, arr + m - 1);
    reserve(arr + m, arr + n - 1);
    reserve(arr, arr + n -1);

    for (i = 0; i < n; i++)
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
    int i = 0;
    char arr[26] = { 0 };
    char ch = 0;
    char i = 0;
    while ((ch = getchar()) != EOF && ch != '\0')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            arr[ch - 97]++;
        }
    }
    for (i = 0; i < 26; i++)
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
    int start = 0;
    scanf("%d", &start);
    int empty = start;
    int sum = start;

    while (empty >= 3)
    {
        sum += empty / 3;
        empty = empty % 3 + empty / 3;
    }

    printf("%d", sum);
    return 0;
}
*/

/*
#include <stdio.h>

double fun(int n)
{
    double s = 0.0;
    int i = 0;
    int a = 2;
    int b = 1;
    int c = 0;
    for (i = 0; i < n; i++)
    {
        s = s + (double)a / b;
        c = a;
        a = a + b;
        b = c;
    }
    return s;
}

void main() {
    int n;
    scanf("%d", &n);
    printf("%lf\n", fun(n));
}
*/


/*
#include <stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    scanf("%d %d", &n1, &n2);
    int i = 0;
    int count = 0;
    for (i = n1; i <= n2; i++)
    {
        int j = 0;
        int sum = 0;
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
*/



/*
#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if(n > 0)
        {
            n = n - pow(2, i);
            count++;
        }
        else
        {
            break;
        }
    }

    if (count % 2 == 1)
    {
        printf("ming");
    }
    else
    {
        printf("hua");
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        printf("hua");
    }
    else
    {
        printf("ming");
    }

    return 0;
}
*/


/*
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[1000] = { 0 };
    int arr1[1000] = { 0 };
    int i = 0;
    int k = 0;
    int min = 0;
    int count = 1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= 2)
        {
            arr1[k] = arr[i];
            k++;
        }
        else if (count == 1)
        {
            min = arr[0];
            for (i = 1; i < n; i++)
            {
                if (min > arr[i])
                {
                    min = arr[i];
                }
            }
        }
    }
    if (count >= 2)
    {
        min = arr1[0];
        for (i = 1; i < k; i++)
        {
            if (min > arr1[i])
            {
                min = arr1[i];
            }
        }
    }
    printf("%d", min);

    return 0;
}
*/


