//在某个有序数组中查找具体的某些数字
/*
#include <stdio.h>

int main()
{
    char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else if(arr[mid] > k)
        {
            right = mid -1;
        }
        else
        {
            printf("zhaodaole,xiabiaoshi:%d", mid);
            break;
        }
    }

    if(left > right)
    {
        printf("zhaobudao");
    }
    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char arr1[] = "welcome to changsha!!!!";
    char arr2[] = "#######################";

    int left = 0;
    int right = strlen(arr2) - 1;

    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        Sleep(1000);
        system("cls");
        printf("%s\n", arr2);
        left++;
        right--;
    }
    return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char password[] = "abcdef";
    int i = 0;

    for(i = 0; i < 3; i++)
    {
        printf("qingshurumima:>");
        scanf("%s", password);

        if(strcmp(password, "abcdef") == 0)
        {
            printf("shuruchenggong\n");
            break;
        }
        else
        {
            printf("shurucouwu\n");
        }
    }
    
    if(3 == i)
    {
        printf("tuichuchengxu\n");
    }

    return 0;
}
*/


//猜数字游戏
/*
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void menu()
{
    printf("#############################\n");
    printf("#########   1.play  #########\n");
    printf("#########   0.exit  #########\n");
    printf("#############################\n");
}


void game()
{
     int guess = 0;
     int i = 0;
     int ret = rand()%100+1;

     while(i < 7)
     {
        printf("qingshurushuzi:>");
        scanf("%d", &guess);
        if(guess < ret)
        {
            printf("small\n");
        }
        else if(guess > ret)
        {
            printf("big\n");
        }
        else
        {
            printf("success\n");
            break;
        }
     }

     if(i == 7)
     {
        printf("qingchongxinkaishi\n");
     }
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {   
        menu();
        printf("qingxuanzhe:>");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
            game();
            break;

            case 0:
            printf("tuichu");
            break;
            
            default:
            printf("qingchongxinshuru");
            break;
        }
    } while (input);
    
    return 0;
}
*/