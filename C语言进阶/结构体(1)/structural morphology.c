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


////修改默认对齐数
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


////位段和结构体区别
//struct A//结构体
//{
//	int _a;
//	int _b;
//	int _c;
//	int _d;
//};
//struct A//位段
//{
//	int _a：2;
//	int _b：5;
//	int _c：10;
//	int _d：30;
//};

//枚举的关键字 :enum
//联合的关键字 :union
//联合体(共用体)的关键字:union
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
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}
//判断大端小端
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
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	//int i = 1;
	//01 00 00 00
	/*if (1 == *(char*)&i)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}*/
	return 0;
}