#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




//struct S1
//{
//	int num;
//	double d;
//	int arr[];//���������Ա
//};
//struct S2
//{
//	int num;
//	double d;
//	int arr[0];//[0]Ҳ�����������Ա
//};
//struct S3
//{
//	int num;
//	int arr[0];//[0]Ҳ�����������Ա
//};
//int main()
//{
//	/*printf("%d\n", sizeof(struct S3));*/
//	struct S3*ps=(struct S3*)malloc(sizeof(struct S3)+40);
//	if(ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->num = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", ps->arr[i]);
//	//}
//	
//	//����
//	struct S3* ptr = (struct S3*)realloc(ps, sizeof(struct S3) + 80);
//	if (ptr == NULL)
//	{
//		perror("realloc\n");
//			return 1;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		ps->arr[i]=i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S4
//{
//	int num;
//	int* arr;
//};
//int main()
//{
//	struct S4* ps = (struct S4*)malloc(szieof(struct S4));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->arr = (int*)malloc(40);
//	if (ps->arr = NULL);
//	{
//		free(ps);
//		ps = NULL;
//		return 1;
//	}
//	//ʹ��
//	
//	//�ͷ�
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	return 0;
//}