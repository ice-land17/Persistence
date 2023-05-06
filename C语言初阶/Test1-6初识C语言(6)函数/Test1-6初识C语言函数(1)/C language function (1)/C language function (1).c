#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


////strcpy函数使用方法
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };//能把arr1中的abcdef拷贝到arr2中
//	strcpy(arr2, arr1);
//	printf("%s\n ", arr2);
//	return 0;
//}




////memset函数使用方法
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr+6, 'X', 3);
//	//1.设置内存的时候是以字节为单位的
//	//2.每个字节的内容都是一样value
//	printf("%s\n", arr);
//	return 0;
//}




////比较两个数字大小
//get_Max(int x, int y)
//{
//	/*if (x > y)
//		return x;
//	else
//		return y;*/
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d" ,&a,&b);
//	//使用函数求a和b的较大值
//	//Max();
//	int m = get_Max(a, b);
//	printf("%d \n", m);
//	return 0;
//}




//写一个函数可以交换两个整形变量的内容
// 当实参传给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参。
//形参
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前: a=%d,b=%d\n", a, b);
//	swap2(&a,&b);
//	printf("交换后: a=%d,b=%d\n", a, b);
//	return 0;	
//}



////判断素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if(n%j==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////判断是不是闰年
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int count = 0;
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n一共有多少个闰年 = %d\n", count);
//}





//二分查找方法
//int bianry_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = bianry_search(arr, k,sz);
//	if (-1 == ret)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为: %d\n",ret);
//	return 0;
//}



////写一个函数，每调用一次这个函数，就会将num的值加1
//void test(int* p)
//{
//	*p = *p + 1;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	printf("%d\n", num);
//	test(&num);
//	printf("%d\n", num);
//	test(&num);
//	printf("%d\n", num);
//	test(&num);
//	printf("%d\n", num);
//	test(&num);
//	printf("%d\n", num);
//	return 0;
//}




//链式访问方法
int main()
{
	/*int len = strlen("abcdef");
	printf("len= %d\n", len);*/
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}