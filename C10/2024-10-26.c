// struct tag
// {
//     member-list;
// }variable-list;

// struct peo
// {
//     char name[20];
//     char tele[12];
//     char sex[5];
//     int high;
// }p1, p2;


/*
struct Peo
{
    char name[10];
    char tele[12];
    char sex[5];
    int high;
};

struct Stu
{
    struct peo p;
    int num;
    float f;
};

int main()
{
    struct peo p1 = {"zhangsan", "10000000000", "nan", 181};//结构体变量的创建
    struct St s = {{"lisi", "10000000001", "nu"}, 100, 3.14f};

    printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
    printf("%s %s %s %d %d %f\n", s.p1.name, s.p1.tele, s.p1.sex, s.p1.high, s.num, s.f);
    return 0;
}
*/


//写一个函数统计二进制中1的个数
/*
#include <stdio.h>
int num_of1(unsigned int i)
{
    int count = 0;
    while(i)
    {
        if(i % 2 == 1)
        {
           count++;
        }
        i = i / 2;
    }

    return count;
}

int main()
{
    int i = 0;
    scanf("%d", &i);
    int sum = num_of1(i);
    printf("%d", sum);

    return 0;
}
*/

/*
#include <stdio.h>
int num_of1(int i)
{
    int count = 0;
    int n = 0;
    for(n = 1; n <= 32; n++)
    {
        if(i&1 == 1)
        {
            count++;
        }
        i = i>>n;
    }  

    return count;
}

int main()
{
    int i = 0;
    scanf("%d", &i);
    int sum = num_of1(i);
    printf("%d", sum);
    return 0;
}
*/


/*
#include <stdio.h>
int num_of1(int i)
{
    int count = 0;
    while(i)
    {
        i = i & (i - 1);
        count++;
    }
    return count;
}

int main()
{
    int i = 0;
    scanf("%d", &i);
    int sum = num_of1(i);
    printf("%d", sum);

    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int i = 0;
    for(i = 30; i >= 0; i-=2)
    {
        printf("%d ", (num>>i)&1);
    }
    printf("\n");
    for(i=31; i >= 1; i-=2)
    {
        printf("%d ", (num>>i)&1);
    }

    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int l = 0;
    while((scanf("%d", &l)) == 1)
    {
        int i = 0;
        for(i = 0; i < l; i++)
    {
        int j = 0;
        for(j = 0; j < l; j++)
        {
            if(i == j)
            {
                printf("*");
            }
            else if((i + j) == (l - 1))
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
#include <stdio.h>
int main()
{
    int l = 0;
    scanf("%d", &l);
    int i = 0;
    for(i = 0; i < l; i++)
    {
        int j = 0;
        for(j = 0; j < l; j++)
        {
            if(i == j)
            {
                printf("*");
            }
            else if((i + j) == (l - 1))
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

    return 0;
}
*/


/*
#include <stdio.h>
int leap_year(int y)
{
    return (((y%4==0)&&(y%100!=0))||(y%400==0));
}

int main()
{
    int y = 0;
    int m = 0;
    int d = 0;
    scanf("%d %d", &y, &m);

    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    d = arr[m];

    if((leap_year(y) == 1) && (m==2))
    {
        d++;
    }

    printf("%d", d);
    return 0;
}
*/


/*
#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);

    int count = 0;
    int i = 0;
    for(i = 0; i < 32; i++)
    {
        if(((m>>i)&1) == ((n>>i)&1))
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

int main() 
{
    char ch = 0;
    while (scanf("%c", &ch) == 1)
    {
        switch(ch)
        {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        printf("Vowel\n");
        break;
        default:
        printf("Consonant\n");
        break;
        }

        while((getchar()) != '\n')
        {};
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int x = 0;
    int l = 0;
    int r = 0;
    scanf("%d %d %d", &x, &l, &r);

    if((x >= l) && (x <= r))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}


#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
 
    if((n % 4 == 0 && n%100 != 0) ||(n % 400 == 0))
    {
        printf("yes\n");
    }
    else
    {
       printf("no\n");
    }
     
    return 0;
}


#include <stdio.h>
int main()
{
    char ch = 0;
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("YES");
    }
    else
    {
       printf("NO");
    }
    
    return 0;
}


#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int m = n % 100;

    switch(m)
    {
        case 3:
        case 4:
        case 5:
        printf("spring");
        break;
        case 6:
        case 7:
        case 8:
        printf("summer");
        break;
        case 9:
        case 10:
        case 11:
        printf("autumn");
        break;
        case 12:
        case 1:
        case 2:
        printf("winter");
        break;
        default:
        break;
    }

    return 0;
}


#include <stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    scanf("%4d%02d", &year, &month);

    switch(month)
    {
        case 3:
        case 4:
        case 5:
        printf("spring");
        break;
        case 6:
        case 7:
        case 8:
        printf("summer");
        break;
        case 9:
        case 10:
        case 11:
        printf("autumn");
        break;
        case 12:
        case 1:
        case 2:
        printf("winter");
        break;
        default:
        break;
    }

    return 0;
}

#include <stdio.h>
int main()
{
    float w = 0;
    float h = 0;
    scanf("%f %f", &w, &h);

    float BMI = w / (h) / (h);

    if(BMI >= 18.5 && BMI <= 23.9)
    {
        printf("Normal");
    }
    else
    {
       printf("Abnormal");   
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int x = 0;
    scanf("%d", &x);
    int sum = x * 100;
    printf("%d", sum);
    
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d %d", a/b, a%b);
    
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 0;
    scanf("%d", &i);
    printf("%d", i%10);
    
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 0;
    scanf("%d", &i);
    i = i / 10;
    i = i % 10;
    printf("%d", i);

    return 0;
}

#include <stdio.h>
int main()
{
    int y = 0;
    int b = 0;
    int g = 0;
    scanf("%d %d", &y, &b);

    g = (y + b) % 7;
    if(g == 0)
    {
        g = 7;
        printf("%d", g);
    }
    else
    {
        printf("%d", g);
    }

    return 0;   
}
*/
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int age = 0;
    scanf("%d", &age);
    int c = 3.156*pow(10,7);
    printf("%d", c*age);

    return 0;
}
*/


