//结构体的使用
// #include <stdio.h>
// struct stu 
//     {
//         //结构体的成员
//         char name[10];
//         int age;
//         char sex[10];
//         char tele[10]; 
//     };

// void print(struct stu* ps)
// {
//     printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//     printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
// }

// int main()
// {
//     struct stu s = {"zhangsan", 18, "nan", "1234567890"};

//     printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//     print(&s);
//     return 0;
// }

// #include <stdio.h>

// #define ADD(x, y) x+y
// int Add(int x, int y)
// {
//     return (x + y);
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);

//     int sum = ADD(a, b);
//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);

//     printf("%d %d", a/b, a%b);
    
//     return 0;
// }

//用if语句来判断一个数是不是奇数

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     scanf("%d", &i);

//     if(i % 2 == 1)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no\n");
//     }
//     return 0;
// }

//输出1~100之间的奇数，用while循环，for循环
// #include <stdio.h>
// int  main()
// {
//     int i = 0;
//     while(i <= 100)
//     {
//         if(i % 2 == 1)
//             printf("%d\n", i);
//             i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     for(i = 1; i <= 100; i++)
//     {
//         if(i % 2 == 1)
//         printf("%d\n", i);
//     }
//     return 0;
// }

//用while打印1~10数字
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     while(i <= 10)
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

//运用getchar,输入密码，假设密码是一个字符串
// #include <stdio.h>
// int main()
// {
//     char password[20] = { 0 };
//     printf("请输入密码:");
//     scanf("%s", password);

//     int ch = 0;
//     while((ch = getchar()) != '\n')
//     {
//         ;
//     }

//     printf("请确认密码(Y/N):>");
//     int ret = getchar();

//     if('Y' == ret)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     scanf("%d", &i);

//     switch(i)
//     {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//             printf("weekday\n");
//             break;
//         case 6:
//         case 7:
//             printf("weekend\n");
//             break;
//         default:
//             printf("dectory\n");
//             break;
//     }

//     return 0;
// }

//ASCII码
// #include <stdio.h>
// int main()
// {
//     int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int i = 0;
//     while(i < sz)
//     {
//         printf("%c", arr[i]);
//         i++;
//     }

//     return 0;
// }


//出生日期输入输出
// #include <stdio.h>
// int main()
// {
//     int year = 0;
//     int month = 0;
//     int date = 0;

//     scanf("%4d%2d%2d", &year, &month, &date);
//     printf("year=%d\n", year);
//     printf("month=%02d\n", month);
//     printf("date=%02d\n", date);

//     return 0;
// }


//学生基本信息输入输出
// #include <stdio.h>
// int main()
// {
//     int id = 0;
//     float c = 0.0f;
//     float math = 0.0f;
//     float eng = 0.0f;

//     scanf("%d;%f,%f,%f", &id, &c, &math, &eng);

//     printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);

//     return 0;
// }

//printf的返回值
// #include <stdio.h>
// int main()
// {
//     int i = printf("Hello world!");

//     printf("\n%d\n", i);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("printf(\"Hello world!\\n\")");
    
//     return 0;
// }

//找最大数
// #include <stdio.h>
// int main()
// {
       //生成4个数
//     char arr[4] = {0};
//     int i = 0;
//     while(i < 4)
//     {
//         scanf("%d", &arr[i]);
//         i++;
//     }

//     int max = arr[0];
//     i = 1;
       //找最大值
//     while(i < 4)
//     {
//         if(arr[i] > max)
//         {
//             max = arr[i];
//             i++;
//         }
//     }
//     printf("%d\n", max);

//     return 0;
// }


//计算球的体积
// #include <stdio.h>
// int main()
// {
//     double v = 0.0;
//     int r = 0;
//     scanf("%d", &r);

//     v = 4/3 * 3.1415926 * r * r * r;

//     printf("%.3lf\n", v);

//     return 0;
// }


//计算体重指数
// #include <stdio.h>
// int main()
// {
//     int weight = 0;
//     int height = 0;
//     scanf("%d %d", &weight, &height);

//     float bmi = weight/(height/100.0)/(height/100.0);

//     printf("%.2f\n", bmi);

//     return 0;
// }