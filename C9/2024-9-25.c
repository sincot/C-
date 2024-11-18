//打印1~10,用for循环
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     for(i = 1; i <= 10; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     int y = 0;

//     for(x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
//     {
//         printf("hehe\n");
//     }
//     return 0;
// }

//计算n的阶乘
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int n = 0;
//     int ret = 1;

//     scanf("%d", &n);
//     for(i = 1; i <= n; i++)
//     {
//         ret = ret * i;
//     }

//     printf("%d\n", ret);
//     return 0;
// }


//计算1~10阶乘之和
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int ret = 1;
//     int sum = 0;
//     int n = 0;

//     scanf("%d", &n);

//     for(i = 1; i <= n; i++)
//     {
//         ret = ret * i;
//         sum = sum + ret;
//     }

//     printf("%d\n", sum);
//     return 0;
// }

//在一个有序数组中查找某个数字(二分查找)
// #include <stdio.h>
// int main()
// {
//     char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//     int k = 7;
//     int sz = sizeof(arr) / sizeof(arr[0]);

//     int left = 0;
//     int right = sz - 1;

//     while(left <= right)
//     {
//       int mid = (left + right) / 2;
      
//         if(arr[mid] < k)
//       {
//         left = mid + 1; 
//       }
//         else if(arr[mid] > k)
//       {
//         right = mid - 1;
//       }
//        else
//       {
//         printf("zhaodaole,xiabiaoshi:%d\n", mid);
//         break;
//       }
//     }
    
//     if(left > right)
//     {
//       printf("zhaobudao\n");
//     }
    
//     return 0;
// }



//二分查找
// #include <stdio.h>
// int main()
// {
//   char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//   int k = 7;

//   int sz = sizeof(arr) / sizeof(arr[0]);
//   int left = 0;
//   int right = sz - 1;

//   while(left <= right)
//   {
//     int mid = left + (right - left) / 2;

//     if(arr[mid] < k)
//     {
//       left = mid + 1;
//     }
//     else if(arr[mid] > k)
//     {
//       right = mid - 1;
//     }
//     else
//     {
//       printf("zhaodaole,xiabiaoshi:%d\n", mid);
//       break;
//     }

//     if(left > right)
//     {
//       printf("zhaobudao\n");
//     }
//   }
//   return 0;
// }


//编写代码，演示多个字符从两端移动，向中间汇聚
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//   char arr1[] = "welcome to hugongshang!!!";
//   char arr2[] = "#########################";

//   int left = 0;
//   int right = strlen(arr2) - 1;

//   while(left <= right)
//   {
//     arr2[left] = arr1[left];
//     arr2[right] = arr1[right];
//     Sleep(1000);
//     //清空屏幕
//     system("cls");
//     printf("%s\n", arr2);
//     left++;
//     right--;
//   }

//   return 0;
// }



//编写代码，模拟用户登录情景，并且只能登陆三次（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则推出程序）
// #include <stdio.h>
// #include <windows.h>
// int main()
// {
//   int i = 0;
//   char password[] = "abcdef";

//   for(i = 0; i < 3; i++)
//   {
//     printf("请输入密码\n");
//     scanf("%s", password);

//     if(strcmp(password, "abcdef") == 0)
//     {
//       printf("输入正确\n");
//     }
//     else
//     {
//       printf("密码错误\n");
//     }
//   }

//   if(i == 3)
//   {
//     printf("请重新输入\n");
//   }
//   return 0;
// }
