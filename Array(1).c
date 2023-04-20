#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



////数组的创建
//int main()
//{
//	//数组：一组相同类型元素的集合
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[100] = { 0 };
//	return 0;
//}


////数组的初始化
//int main()
//{
//	int arr1[10] = { 1,2,3,4 };//不完全初始化
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10,11 };//初始值设定项值太多
//	char ch1[] = { 'a','b','c' };
//	char ch2[] = { 'a','98','c' };
//	return 0;
//}


//计算数组元素个数
//int main()
//{
//	int arr[100] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//计算数组元素个数的写法
//int main()
//{
//	int arr[300] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr)[0];
//	int i = 0;
//		for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}




////一维数组在内存中的存储
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p \n", i, &arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p <===> %p\n", i, &arr[i]);
//	}
//	return 0;
//}



////二维数组的创建
//int main()
//{
//	int arr[3][5]= {1,2,3,4,5,6 };//初始化了一部分，不完全初始化
//		  //行  列
//
//	return 0;
//}


//二维数组的创建,访问
//int main()
//{
//	int arr2[][5] = { {1,2},{4,5},{5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}



////访问地址
//int main()
//{
//	int arr[3][5] = { {1,2},{4,5},{5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}



////数组越界
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10, };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//数组名是什么;就是数组首元素的地址
//绝大数情况下没问题，有两个列外；
//(1)siezeof(数组名),数组名不是首元素的地址，数组名表示整个数组.
//(2)&数组名，数组名不是数组首元素的地址，数组名表示整个数组，取出的是整个数组的地址.
//int main()
//{	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	/*printf("%d\n", sizeof(arr));*/
//	return 0;
//}

void bubble_sort(int arr[],int sz)
{ 
	

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟冒泡排序过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//写一个冒泡排序的函数，来排序arr数组的内容
	/*冒泡排序:数组中2个相邻的元素进行比较，如果不满足顺序就交换
	排序为升序!*/
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}