#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
////�±ߴ�����������ʲô
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


//���³�������ʱ��������1abcedf2df <�س�>��������?
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

////쳲���������
////Fibonacci���������������:
////F[0] = 0
////F[1] = 1
////for eachi��2 : F[i] = F[i - 1] + F[i - 2]
////��ˣ�Fibonacci���о����� : 0, 1, 1, 2, 3, 5, 8, 13, ....��Fibonacci�����е������ǳ�ΪFibonacci������
////��һ��N, ���������Ϊ - ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX - 1����X + 1, ���ڸ���һ����
////N��������Ҫ���ٲ����Ա�ΪFibonacci����
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




//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20"��
//���磬���ַ���ΪWe Are Happy.�򾭹���
//��֮����ַ���ΪWe % 20Are % 20Happy��




//дһ���꣬���Խ�һһ�������Ķ�����λ������λ��ż��λ������

//#define SWAP(num)(num=(((num&0x55555555)<<1)+((num&0xaaaaaaaa)>>1)))
//int main()
//{
//	int num = 10;
//	SWAP(num);
//	printf("%d\n", num);
//
//	return 0;
//}



//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
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