#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>


//小飞机练习题
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    * *\n");
//	printf("    * *\n");
//	return 0;
//}
 

// 字符长度练习
//int main() {
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}


//随机字符长度
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}


//已知一个函数y = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
//int main() {
//	int x = 0;
//	int y = 0;
//	//输入
//	scanf("%d", &x);
//	//计算
//	if (x < 0)
//		y = 1;
//	else if (x = 0)
//		y = 0;
//	else y = -1;
//	//输出
//	printf("%d\n", y);
//	return 0;
//}


//判断一个数能否被5整除
//int main() {
//	int m = 0;
//	scanf("%d\n", &m);
//	if (m % 5 == 0)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}


////写一个函数求两个整数的较大值 如：输入：10 20 输出较大值：20
//int Max(int x,int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////定义MAX函数
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d\n", &n1, &n2);
//	//输入
//	int m = Max(n1, n2);
//	printf("%d\n", m);
//	//输出
//	return 0;
//}


//描述：据说智商140以上者称为天才，想知道他自己是不是天才，请帮他编程判断。
//输入一个整数表示一个人的智商，如果大于等于140, 则表明他是一个天才，输出"Genius".
//输入描述:多组输入，每行输入包括 - 个整数表示的智商。
//输出描述 :针对每行输入，输出"Genius".
//例1
//int main() {
//	int iq = 0;
//	while (scanf("%d",&iq) != EOF)
//	{
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}
//例2
int main() {
	int iq = 0;
	while (scanf("%d", &iq)==1)
	{
		if (iq >= 140)
			printf("Genius\n");
	}
	return 0;
}

