#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////一级指针传参
//void test(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *ptr);
//		ptr++;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(p, sz);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	char* arr[5];
	int* arr2[4];
	int (*pf1)(int, int) = Add;
	int (*pf2)(int, int) = Sub;
	int (*pf3)(int, int) = Mul;
	int (*pf4)(int, int) = Div;
	int (*pf[4])(int, int) = { Add,Sub,Mul,Div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = pf[i](8, 2);
		printf("%d\n", ret);
	}
	return 0;
}