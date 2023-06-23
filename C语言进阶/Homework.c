#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int i;//全局变量如果没有初始化，默认会被初始化为0
//int main()
//{
//    i--;//-1
//    if (i > sizeof(i))//sizeof是一个操作符，这个操作符返回的结果是size_t的，size_t是无符号整形
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//先++，再使用 a=6，c=6 
//	b = ++c, c++, ++a, a++;//7  7  8  7  8
//	b += a++ + c;
//	//a++=先使用，后++ a=9，+C=8  a+c=16  b(7)+=a(8)+c(8)=23 b=23
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}




//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299
//输出例子 : 7
//int main()//方式1
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int diff = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			diff++;
//		}
//	}
//	printf("%d\n", diff);
//	return 0;
//}

//int main()//方式2
//{
//	int m = 0; 
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int diff = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		diff++;
//	}
//	printf("%d\n", diff);
//	return 0;
//}


//打印整数二进制的奇数位和偶数位
//作业内容
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}

////不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;  // a+b之和赋给a
//	b = a - b; //  和-b为a赋给b 
//	a = a - b; //  和-b（b是a的值）为b赋给a 
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}



//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}//00345

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//使用指针打印数组内容
//作业内容:写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

////写一个函数，可以逆序一个字符串的内容。
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。 
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否是自幂数
//		//1.计算i得位数
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)//1234
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//比较
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < n - 1; i++)
    {
        int j = 0;
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < (n - 1 - i) * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}