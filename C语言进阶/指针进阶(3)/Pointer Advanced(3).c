#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
//函数指针,通过函数指针调用
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	void(*pf)() = test;
//	(*pf)();
//	test();
//	pf();
//
//	return 0;
//}


//函数指针数组
//存放函数指针的数组  
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("****  1.add   2.sub   ****\n");
//	printf("****  3.mul   4.div   ****\n");
//	printf("****  0.exit          ****\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//转移表
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if(input >= 1 && input<=4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);	
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//
//	return 0;
//}



////指向函数指针数组的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };//整型数组
//	int(*p)[10] = &arr;//p必须是数组指针
//	int* arr2[5];
//	int* (*p2)[5] = &arr2;
//
//	int (*pf)(int,int) = &Add;//函数指针
//
//	int (*pfarr[4])(int, int) = &Add;//函数指针数组,pfarr是一个存放函数指针的数组,这个数组有四个元素，每个元素是函数指针
//	int (*(*p3)[4])(int, int) = &pfarr;//p3就是指向函数指针数组的指针
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pfarr[4])(int, int) = {Add,Sub,Mul,Div};
//	int (*(*p3)[4])(int, int) = &pfarr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = (*p3)[i](8,10);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//回调函数
//void test()//test就是回调函数
//{
//	printf("hehe\n");
//}
//void print_hehe(void(*p)())
//{
//	if (1)
//		p();
//}
//int main()
//{
//	print_hehe(test);
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("**************************\n");
//	printf("****  1.add   2.sub   ****\n");
//	printf("****  3.mul   4.div   ****\n");
//	printf("****  0.exit          ****\n");
//	printf("**************************\n");
//}
//
//void calc(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("ret=%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				calc(Add);
//				break;
//			case 2:
//				calc(Sub);
//				break;
//			case 3:
//				calc(Mul);
//				break;
//			case 4:
//				calc(Div);
//				break;
//			case 0:
//				printf("退出计算器\n");
//							break;
//			default:
//				printf("选择错误\n");
//							break;
//		}
//	} while (input);
//	return 0;
//}



//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0; 
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//qsort//库函数 基于快速排序算法实现的一个排序的函数
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
}
int cmp_int(const void* el, const void* e2)
{
	return (*(int*)el - *(int*)e2);
}
void test2()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
//使用qsort排序结构体
struct Stu
{
	char name[20];
	int age;
	double score;
};
int cmp_stu_by_age(const void* el,const void*e2)
{
	return ((struct Stu*)el)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu arr[3] = { {"zhang",20,60.0,},{"lisi",25,65.1},{"wangwu",30,90.5}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

int main()
{
	test3();
	return 0;
}