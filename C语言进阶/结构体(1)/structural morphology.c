#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stddef.h>



//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};  
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	//struct S1 s;
//	//struct S2 s2;
//	printf("%u\n", offsetof(struct S1, c1));
//	printf("%u\n", offsetof(struct S1, i));
//	printf("%u\n", offsetof(struct S1, c2));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}


////�޸�Ĭ�϶�����
//#pragma pack(1)
//struct S
//{
//	char c;
//	double d;
//};
//#pragma pack()
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


////λ�κͽṹ������
//struct A//�ṹ��
//{
//	int _a;
//	int _b;
//	int _c;
//	int _d;
//};
//struct A//λ��
//{
//	int _a��2;
//	int _b��5;
//	int _c��10;
//	int _d��30;
//};

//ö�ٵĹؼ��� :enum
//���ϵĹؼ��� :union
//������(������)�Ĺؼ���:union
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	if (1 == *(char*)&i)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}
//�жϴ��С��
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;

	return u.c;//
}

int main()
{
	if (1 == check_sys())
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	//int i = 1;
	//01 00 00 00
	/*if (1 == *(char*)&i)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}*/
	return 0;
}