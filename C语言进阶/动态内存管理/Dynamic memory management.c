#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h> 
#include <string.h>

//int main()
//{
//	//int arr[10];//���ڴ�����40���ֽ�
//	//char arr2[40];//���ڴ�����40���ֽ�
//	//����ռ�
//	int* ptr = (int*)malloc(INT_MAX);
//	int* p = ptr;
//
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//�ͷſռ�
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}


//int main()
//{
//	int* ptr = (int*)malloc(40);
//	if (ptr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
//�����ǲ��ͷŶ�̬������ڴ��ʱ��
//��������������̬������ڴ��ɲ���ϵͳ�Զ�����
//����������򲻽�������̬�ڴ��ǲ����Զ����յģ��ͻ��γ��ڴ�й¶������

////calloc
//int main()
//{
//	int* p = (int*)malloc(40);//����10�����εĿռ�
//	int* p = (int*)calloc(10, sizeof(int));//calloc����Ŀռ�ᱻ��ʼ��Ϊ0
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)cal1oc(10, sizeof(int));
//	if (NULL != p)
//	{
//		//ʹ�ÿռ�
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//
////realloc
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//�ռ䲻������������
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//���ݳɹ�,��ʼʹ��
//
//	//����ʹ�ã����ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//1.��NULLָ��Ľ����ò���err
//����취��malloc�����ķ���ֵ�����ж�
//int main()
//{
//	int* p = (int*)malloc(1000);
//	int i  = 0;
//	if (p == NULL);
//	{
//		return 1;
//	}
//	for (i = 0; i < 250; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.�Զ�̬���ٿռ��Խ�����err
//int main()
//{
//	int* p = (int*)malloc(100);
//	int i  = 0;
//	if (p == NULL);
//	{
//		return 1;
//	}
//	for (i = 0; i < 25; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�err
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}





////4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����err
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//�ͷſռ�
//
//	free(p);
//	p = NULL;
//	return 0;
//}


////5.��ͬһ�鶯̬�ڴ����ͷ�err
//int main()
//{
//	int* p = malloc(100);
//	if (p == NULL)
//		return 1;
//	free(p);
//	free(p);//err
//	p = NULL;
//	return 0;
//}


////6.��̬�����ڴ������ͷ�(�ڴ�й©)
//void test()
//{
//	int* p = malloc(100);
//	//˭���ٵ��ڴ�˭�ͷ�
//}
//int main()
//{
//	test();
//	while (1)
//	{
//		;
//	}
//	return 0;
//}


////��������Test��������ʲô���Ľ�� ?
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//�ڴ�й©
//}
//void Test(void)
//{
//	char* str =NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//�Կ�ָ������ã��γ��˷Ƿ������ڴ棬�������
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
////��������Test��������ʲô���Ľ�� ? ��Ϊ�Եķ�ʽ
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}



////��������Test��������ʲô���Ľ��
////����ջ�ռ��ַ�����⣡
//char* GetMemory(void)
//{
//	char p[]= "hello world";
//	return p;//�������Χ֮�󷵻ص���Ұָ������
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//��������Test��������ʲô���Ľ��
//�ڴ��ͷ�����
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�����ͷ�,�����ͷ�
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

////��������Test��������ʲô���Ľ��
////�ͷ����Ժ���ʹ�ã��ᵼ��Ұָ������
////�ͷ��Ժ�Ҫ��ָ����Ϊ��
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}