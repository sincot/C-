//顺序打印它的每一位接受一个整型值（无符号)
/*
#include <stdio.h>

void print(int n)
{
    if(n > 9)
    {
        print(n / 10);
    }
    printf("%d\n", n%10);
}

int main()
{
    unsigned int num = 0;
    scanf("%u", &num);
    print(num);

    return 0;
}
*/


//编写函数不允许创建临时变量，求字符串长度