#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�//�������
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ����������
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ���дһ��
//	fputs("qwertyuiop\n", pf);
//	fputs("xxxxxxxxxx\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[256] = { 0 };
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ���дһ��
//	//fgets(arr, 255, pf);
//	//printf("%s", arr);
//	//fgets(arr, 255, pf);
//	//printf("%s", arr);
//	while (fgets(arr, 256, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char arr[256] = { 0 };
//	//���ļ�
//	FILE* pf = fopen("test.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�ر��ļ�
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
//	struct S s= { "����",20,95.5};
//	//���ļ�
//	FILE* pf = fopen("test2.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fprintf(pf, "%s %d %lf", s.name, s.age, s.d);
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.d));
//	fprintf(stdout, "%s %d %lf\n", s.name, s.age, s.d);
//	//�ر��ļ�
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
//	printf("%s\n", buf);//�ַ���
//	//��buf�ַ�������ȡ�ṹ������
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
//	struct S s = { "����",20,95.5 };
//	//д�ļ� -�����Ƶķ�ʽд
//	FILE* pf = fopen("test3.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����Ƶķ�ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//�ر��ļ�
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
	struct S s = { "����",20,95.5 };
	//д�ļ� -�����Ƶķ�ʽд
	FILE* pf = fopen("test3.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//�����Ƶķ�ʽ���ļ�
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", s.name, s.age, s.d);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}