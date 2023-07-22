#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h> 
#include <string.h>

//int main()
//{
//	//int arr[10];//向内存申请40个字节
//	//char arr2[40];//向内存申请40个字节
//	//申请空间
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
//	//释放空间
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
//当我们不释放动态申请的内存的时候
//如果程序结束，动态申请的内存由操作系统自动回收
//但是如果程序不结束，动态内存是不会自动回收的，就会形成内存泄露的问题

////calloc
//int main()
//{
//	int* p = (int*)malloc(40);//申请10个整形的空间
//	int* p = (int*)calloc(10, sizeof(int));//calloc申请的空间会被初始化为0
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//使用
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
//		//使用空间
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
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//空间不够，考虑扩容
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//扩容成功,开始使用
//
//	//不再使用，就释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//1.队NULL指针的解引用操作err
//解决办法对malloc函数的返回值进行判断
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


//2.对动态开辟空间的越界访问err
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

//3.对非动态开辟内存使用free释放err
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}





////4.使用free释放一块动态开辟内存的一部分err
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//释放空间
//
//	free(p);
//	p = NULL;
//	return 0;
//}


////5.对同一块动态内存多次释放err
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


////6.动态开辟内存忘记释放(内存泄漏)
//void test()
//{
//	int* p = malloc(100);
//	//谁开辟的内存谁释放
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


////请问运行Test函数会有什么样的结果 ?
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//内存泄漏
//}
//void Test(void)
//{
//	char* str =NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//对空指针解引用，形成了非法访问内存，程序崩溃
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
////请问运行Test函数会有什么样的结果 ? 改为对的方式
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



////请问运行Test函数会有什么样的结果
////返回栈空间地址的问题！
//char* GetMemory(void)
//{
//	char p[]= "hello world";
//	return p;//出这个范围之后返回导致野指针问题
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

//请问运行Test函数会有什么样的结果
//内存释放问题
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
//	//忘记释放,加入释放
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

////请问运行Test函数会有什么样的结果
////释放了以后再使用，会导致野指针问题
////释放以后，要把指针置为空
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