// #include <stdio.h>
// int main()
// {
//     char ch = 0;

//     while(scanf("% c", &ch) != EOF)
//     {
//         if(ch >= 'a' && ch <= 'z')
//        {
//         printf("%c\n", ch-32);
//        } 
//         else if(ch >= 'A' && ch <= 'Z')
//        {
//         printf("%c\n", ch + 32);
//        }
//     }

//     return 0;
// }



/*
#include <stdio.h>
int main()
{
    char ch = 0;
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    printf("%c is an alphabet\n", ch);
    else
    printf("%c is not an alphabet\n", ch);

    return 0;
}
*/



/*
#include <stdio.h>
int main()
{
    int i = 0;
    int max = 0;
    int n = 0;

    for(i = 1; i <= 3; i++)
    {
        scanf("%d", &n);
        if(n > max)
        {
            max = n;
        }
    }

    printf("%d ", max);
    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    int sum = 0;
    for(i = 10000; i<= 99999; i++)
    {
        int n = 0;       
        for(n = 1; n <= 4; n++)
        {
            int k = (int)pow(10, n);
            sum = sum + ((i%k) * (i/k));
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
*/
/*
int main()
{
    int a = 0;

    int* pi = &a;
    float* pf = &a;

    return 0;
}

int main()
{
    int* p;
    *p = 10;

    return 0;
}

int main()
{
    int* p = NULL;
    if(p3 != NULL)
    {
        *p = 100;
    }
}


float values[5];
float *vp;
for(vp  = &values[0]; vp < &values[5]; )
{
    *vp++ = 0;
}

float values[5];
float *vp;
for(vp = &values[5]; vp > &values[0]; )
{
    *--vp = 0;
}

float values[5];
float *vp;
for(vp = &values[5]; vp > &values[0]; vp--)
{
    *vp = 0;
}


int main()
{
    int a = 10;
    int* pa = &a;
    int** ppa = &pa;

    **ppa = 20;
    return 0;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int* parr[10] = {&a, &b, &c};
    
    return 0;
}
*/