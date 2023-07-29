#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
////下边代码输出结果是什么
//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)
//	{
//		++j;
//	}
//	printf("%d\n", j);
//}


//以下程序运行时，若输入1abcedf2df <回车>输出结果是?
//int main()
//{
//	char a = 0, ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		a++;
//		putchar(ch);//A
//	}
//	printf("\n");
//}

//void main()
//{
//	int a = -3;
//	unsigned int b = -2;
//	long c = a + b;
//	printf("%ld\n", c);
//}

//int main()
//{
//	int x = 1;
//	do {
//		printf("%2d\n", x++);
//	} while (x--);
//}


//void main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long c = a + b;
//	printf("%ld\n", c);
//}


//int f(int x)
//{
//	return((x > 2) ? x * f(x - 1) : 3);
//}
//int i;
//i = f(f(2));


//int fun(int a)
//{
//	a ^ (1 << 5) - 1;
//	return a;
//}

////斐波那契数列
////Fibonacci数列是这样定义的:
////F[0] = 0
////F[1] = 1
////for eachi≥2 : F[i] = F[i - 1] + F[i - 2]
////因此，Fibonacci数列就形如 : 0, 1, 1, 2, 3, 5, 8, 13, ....在Fibonacci数列中的数我们称为Fibonacci数。给
////你一个N, 你想让其变为 - 个Fibonacci数，每一步你可以把当前数字X变为X - 1或者X + 1, 现在给你一个数
////N求最少需要多少步可以变为Fibonacci数。
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 1;
//	int n = 0;
//	scanf("%d", &n);
//
//	while (1)
//	{
//		if (b == n)
//		{
//			printf("0\n");
//			break;
//		}
//		else if (b > n)
//		{
//			if (abs(a - n) > abs(b - n))
//			{
//				printf("%d\n", abs(b - n));
//			}
//			else
//			{
//				printf("%d\n", abs(a - n));
//			}
//			break;
//		}
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return 0;
//}




//请实现一个函数，将一个字符串中的每个空格替换成“ % 20"。
//例如，当字符串为We Are Happy.则经过替
//换之后的字符串为We % 20Are % 20Happy。




//写一个宏，可以将一一个整数的二进制位的奇数位和偶数位交换。

//#define SWAP(num)(num=(((num&0x55555555)<<1)+((num&0xaaaaaaaa)>>1)))
//int main()
//{
//	int num = 10;
//	SWAP(num);
//	printf("%d\n", num);
//
//	return 0;
//}



//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
struct S
{
	int a;
	char c;
	double d;
};
#define OFFSETOF(st_type,mem_name) (size_t)&(((st_type*)0)->mem_name)
int main()
{
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c));
	printf("%d\n", OFFSETOF(struct S, d));
	return 0;
}