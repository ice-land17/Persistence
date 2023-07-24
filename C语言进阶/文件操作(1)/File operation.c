#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件//输入操作
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件：输出操作
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	int ch = getc(stdin);
//	/*printf("%c\n", ch);*/
//	fputc(ch, stdout);
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件，写一行
//	fputs("qwertyuiop\n", pf);
//	fputs("xxxxxxxxxx\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[256] = { 0 };
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件，写一行
//	//fgets(arr, 255, pf);
//	//printf("%s", arr);
//	//fgets(arr, 255, pf);
//	//printf("%s", arr);
//	while (fgets(arr, 256, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char arr[256] = { 0 };
//	//打开文件
//	FILE* pf = fopen("test.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//int main()
//{
//	struct S s= { "张三",20,95.5};
//	//打开文件
//	FILE* pf = fopen("test2.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fprintf(pf, "%s %d %lf", s.name, s.age, s.d);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//int main()
//{
//	struct S s = { 0 };
//	//打开文件
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.d));
//	fprintf(stdout, "%s %d %lf\n", s.name, s.age, s.d);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//int main()
//{
//	char buf[256] = { 0 };
//	struct S s = { "zhangsan",20,95.5 };
//	struct S tmp = { 0 };
//	sprintf(buf, "%s %d %lf", s.name, s.age, s.d);
//	printf("%s\n", buf);//字符串
//	//从buf字符串中提取结构体数据
//	sscanf(buf, "%s %d %lf", tmp.name, &(tmp.age), &(tmp.d));
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.d);
//	return 0;
//}



//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//int main()
//{
//	struct S s = { "张三",20,95.5 };
//	//写文件 -二进制的方式写
//	FILE* pf = fopen("test3.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的方式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


struct S
{
	char name[20];
	int age;
	double d;
};
int main()
{
	struct S s = { "张三",20,95.5 };
	//写文件 -二进制的方式写
	FILE* pf = fopen("test3.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//二进制的方式读文件
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", s.name, s.age, s.d);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}