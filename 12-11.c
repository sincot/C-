#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
struct S
{
	char arr[10];
	int age;
	float score;
};
*/
/*
int main()
{
	struct S s = { "zhangsan", 25, 50.5f };

	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
	fclose(pf);
	pf = NULL;

	return 0;
}
*/

/*
int main()
{
	struct S s = { 0 };

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
	printf("%s %d %f", s.arr, s.age, s.score);
	fclose(pf);
	pf = NULL;

	return 0;
}
*/

/*
struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { "zhangsan", 25, 50.5f };
	//以二进制的形式写到文件中
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//以二进制的方式写
	fwrite(&s, sizeof(struct S), 1, pf);

	fclose(pf);
	pf = NULL;

	return 0;
}
*/

/*
struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { 0 };
	//以二进制的形式读到文件中
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//二进制的方式读
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %f", s.arr, s.age, s.score);

	fclose(pf);
	pf = NULL;

	return 0;
}
*/


/*
struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { "zhangsan", 20, 55.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };
	//把s中的格式化数据转换成字符串放到buf中
	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);

	//s中的内容变成了字符串，即“zhangsan 20 55.500000"
	printf("%s\n", buf);

	//从字符串buf中获取一个格式化的数据到tmp中
	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
	printf("%s", tmp.arr);

	return 0;
}
*/


/*
int main()
{
	FILE* pf = fopen("test.txt", "r");
	//text.txt中存储的内容为abcdef
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//读文件
	//定位文件指针
	fseek(pf, 2, SEEK_SET);
	int ch = fgetc(pf);
	printf("%c\n", ch);
	//打印的结果为c
	fseek(pf, 2, SEEK_CUR);
	ch = fgetc(pf);
	printf("%c\n", ch);
	//打印的结果为f
	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}
*/

/*
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int c = 0;//int，非cagr,要求处理eof
	FILE* fp = fopen("test.txt", "r");
	if (!fp)
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc当读取失败的时候或者遇到文件结束的时候，都会返回EOF
	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	//判断是什么原因结束的
	if (ferror(fp))
	{
		puts("I/O error when reading");
	}
	else if(feof(fp))
	{
		puts("End of file reached successfully");
	}

	return 0;
}
*/