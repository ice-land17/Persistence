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
//int main() {
//	int iq = 0;
//	while (scanf("%d", &iq)==1)
//	{
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}


//描述:学生信息管理系统是学校教学管理的重要工具，
// 现有一名学生基本信息如下:姓名~Jack, 年龄 - 18, 
// 性别 - Man，请按照输出样例的格式输出该学生的信息。
//输入描述 :无
//输出描述 :输出分为三行，分别为标题行，分隔行，信息行。
//第一行，标题行, 每个标题之间间隔4个空格。
//第二行，分隔行， - 共21个减号"-".
//第三行，信息行，每列输出信息和标题首字母对齐。输出样例如下 :
//int main() {
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}


//描述:给定两个整数a和b(0 < a, b < 10000)，计算a除以b的整数商和余数
//输入描述 :行，包括两个整数a和b，依次为被除数和除数(不为零)，中间用空格隔开
//输出描述 :行，包含两个整数，依次为整数商和余数，中间用一个空格隔开.
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a, &b);
////输入
//	printf("%d %d\n", a / b,a%b);
////输出
//	return 0;
//}


////描述：请计算表达式“(-8 + 22)×a - 10 + c÷2”，其中，a = 40，c = 212。
//int main() {
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;
//	printf("%d", r);
//	return 0;
//}
