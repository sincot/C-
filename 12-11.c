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
	//�Զ����Ƶ���ʽд���ļ���
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//�Զ����Ƶķ�ʽд
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
	//�Զ����Ƶ���ʽ�����ļ���
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//�����Ƶķ�ʽ��
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
	//��s�еĸ�ʽ������ת�����ַ����ŵ�buf��
	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);

	//s�е����ݱ�����ַ���������zhangsan 20 55.500000"
	printf("%s\n", buf);

	//���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
	printf("%s", tmp.arr);

	return 0;
}
*/


/*
int main()
{
	FILE* pf = fopen("test.txt", "r");
	//text.txt�д洢������Ϊabcdef
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//���ļ�
	//��λ�ļ�ָ��
	fseek(pf, 2, SEEK_SET);
	int ch = fgetc(pf);
	printf("%c\n", ch);
	//��ӡ�Ľ��Ϊc
	fseek(pf, 2, SEEK_CUR);
	ch = fgetc(pf);
	printf("%c\n", ch);
	//��ӡ�Ľ��Ϊf
	//�ر��ļ�
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
	int c = 0;//int����cagr,Ҫ����eof
	FILE* fp = fopen("test.txt", "r");
	if (!fp)
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	//�ж���ʲôԭ�������
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