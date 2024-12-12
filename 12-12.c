#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
void Swap1(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("交换后：a = %d, b = %d", a, b);
	return 0;
}
*/

/*
void Swap2(int* pa, int* pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

int main()
{
	int a = 10;
	int b = 20;
	Swap(&a, &b);
	printf("a = %d b = %d", a, b);
}
*/

/*
void Swap3(int* px, int* py)
{
	int* pt = px;
	px = py;
	py = pt;
}

int main()
{
	int a = 10;
	int b = 20;
	Swap3(&a, &b);
	printf("a = %d, b = %d", a, b);
	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    long h = 0;
    float score = 0.0f;
    long arr1[n];
    float arr2[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%ld %f", &h, &score);
        arr1[i] = h;
        arr2[i] = score;
    }

    for (i = 0; i < n - 1; i++)
    {
        int j = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr2[j] < arr2[j + 1])
            {
                int tmp = arr1[j + 1];
                arr1[j + 1] = arr1[j];
                arr1[j] = tmp;
                float tmp1 = arr2[j + 1];
                arr2[j + 1] = arr2[j];
                arr2[j] = tmp1;
            }
        }
    }
    printf("%ld %.1f", arr1[k - 1], arr2[k - 1]);
    return 0;
}
*/

/*
int main()
{
    int n = 0;
    int i = 0;
    int sum = 1;
    for (i = 1; i < 10; i++)
    {
        sum = (sum + 1) * 2;
    }

    printf("%d", sum);
    return 0;
}
*/


/*
#include <stdio.h>
void swap(int* p1, int* p2);

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    swap(&n, &m);
    printf("%d %d", n, m);
    return 0;
}

void swap(int* px, int* py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
*/


/*
#include <stdio.h>
#define N 10
int main()
{
    int i = 0;
    int arr[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int* left = &arr[0];
    int* right = &arr[N - 1];

    while (left < right)
    {
        int tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }

    for (i = 0; i < N; i++)
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
    int a[10], * p;
    //输入10个整数存入数组a  
    for (p = a; p < a + 10; p++)
    {
        scanf("%d", p);
    }

    p = a;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n");
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int a[10], * p;
    //输入10个整数存入数组a  
    for (p = a; p < a + 10; p++)
    {
        scanf("%d", p);
    }

    p = a;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n");
    return 0;
}
*/


/*
#include<stdio.h>
#define M 3
main()
{
    int a[M], i;
    int* max, * min;
    for (i = 0; i < M; i++)
    {
        scanf("%d", &a[i]);
    }

    max = &a[0];
    min = &a[0];
    for (i = 1; i < M; i++)
    {
        if (a[i] > *max)
        {
            max = &a[i];
        }
        if (a[i] < *min)
        {
            min = &a[i];
        }
    }

    printf("min=%d\nmax=%d", *min, *max);

    return 0;
}
*/

