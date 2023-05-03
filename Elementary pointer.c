#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//初阶指针



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc+1);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* q = NULL;
//	if (q != NULL)
//	{
//
//	}
//	p = NULL;
//	return 0;
//}



////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量（一级指针）
//	int** ppa = &pa;//ppa是一个二级指针
//	int*** pppa = &ppa;//pppa就是三级指针
//	return 0;
//}


//指针数组-存放指针的数组
//整型数组
//int main()
//{
//	int arr[5];//指针数组-存放整形的数组
//	char ch [6];//字符数组-存放字符的数组
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	int d = 13;
//	int e = 14;
//	int* arr2[5] = { &a,&b,&c,&d,&e };//指针数组
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(arr2[i]));
//	}
//	return 0;
//}



int main()
{
	int data1[] = { 1,2,3,4,5 };
	int data2[] = { 2,3,4,5,6 };
	int data3[] = { 3,4,5,6,7 };
	int* arr[3] = {data1,data2,data3};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}