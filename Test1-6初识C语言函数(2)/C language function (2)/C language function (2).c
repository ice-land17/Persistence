#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int Add(int x, int y);//函数的声明,形参的名字可以省略
////函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//int main()
//{
//	int a = 10;
//	int b = 20; 
//	int sum = Add(a, b);
//	printf("%d\n", sum);//函数的使用
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}	



////简单的递归
//int main()
//{
//	printf("hehe\n");
//
//	main();
//	return 0;
//}


////练习1: (画图讲解)
////接受一个整型值(无符号).，按照顺序打印它的每一位。
////例如 :输入: 1234, 输出1 2 3 4.
//void print(int n)
//{
//	if (n > 9)//1234；123；12；1；依次的进行递归，然后计算存储1 2 3 4 ，最后输出,每次递推都是一次独立的函数调用
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



////编写函数求字符串的长度，不允许使用临时变量；
//int my_strlen(char* str)
//{
//	int count = 0;//统计字符的个数
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}




////求n的阶乘，不考虑溢出
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}



////求第n个斐波那契数:这个数列从第 3 项开始，每一项都等于前两项之和。
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}



//循环求斐波那契数
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}