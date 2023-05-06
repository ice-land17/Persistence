#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


////结构体类型的声明
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[8];//性别
//	float score;
//}s1,s2,s3;//s1,s2,s3是通过struct Stu类型创建的变量
//
//typedef struct Stu Stu;
//int main()
//{
//	struct Stu s4;
//	struct Stu s5; 
//	Stu s6;
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1 = {10,15};
////结构体变量的定义和初始化
//struct S
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct Point p = { 100,200 };
//	struct S ss = { 'w',{100,20},5.5,"hello" };
//	printf("%c\n", ss.c);
//	printf("%d %d\n",ss.sp.x,ss.sp.y);
//	printf("%lf\n", ss.d);
//	printf("%s\n", ss.arr);
//	return 0;
//}


//结构成员访问操作符
//.
//->.

//结构体传参


int main()
{
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		printf("%d\n", i);
		printf("hehe\n");
	}
	return 0;
}