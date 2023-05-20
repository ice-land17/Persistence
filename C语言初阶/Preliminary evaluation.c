#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>





//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
////                        8						1
////               7                  6			2
////          6         5        5       4		4
////		5   4     4   3    4    3  3    2		8
////     4 3   3  2  3 2  2 1 3 2  2 1 2 1  1 0	16
////3 2 2 1   2 1 1 0 2 1 1 0 10 2 1 1 0 1 0 1 0	22
////2 1 1 0 1 0 1 0  1 0  1 0						12
////1 0											2
////合												67
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}


//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d\n", x++);
//	} while (x--);
//}



//int main()
//{
//	int i = 1;
//	int j;
//	j = i++;
//	printf("%d %d", i, j);
//	return 0;
//}


//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;
//	printf("%d", k);
//	return 0;
//}


//int a = 1; 
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}



//int main()
//{
//	int a = 0, c = 0;
//	do {
//		--c;
//		a = a - 1;
//	} while (a > 0);
//	printf("%d", c);
//	return 0;
//}



////正整数A和正整数B的最小公倍数是指能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。
////数据范围:1 < a, b < 100000
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);// 5 7
//	int m = (a > b ? a : b);
//	//假设m是最小公倍数，然后去试除
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);// 5 7
//	int i = 1;
//	while (a * i % b != 0)
//	{
//		i++;
//	}
//	printf("%d\n", a*i);
//}





void reverse(char* l, char* r)
{
	assert(l && r);
	while (l < r)
	{
		char tmp = *l;
		*l = *r;
		*r = tmp;
		l++;
		r--;
	}
}


int main()
{
	char arr[100] = {0};
	//输入
	gets(arr);
	int len = strlen(arr);
	//逆序
	//逆序整个字符串
	char* left = arr;
	char* right = arr + len - 1;
	reverse(left, right);
	//逆序每个单词
	char* cur = arr;
	char* start = arr;
	while (*cur !='\0')
	{
		while (*cur != ' '&& *cur !='\0')
		{
			cur++;
		}
		reverse(start, cur - 1);
		start = cur + 1;
		if(*cur != '\0')
		cur++;
	}
	printf("%s\n", arr);
	return 0;
}