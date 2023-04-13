#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////作业1
// 下面代码执行的结果是：
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//链接：https://www.nowcoder.com/questionTerminal/7ea144cc71bd4458ac1494ce00037230?
//KiKi想知道从键盘输入的两个数的大小关系，请编程实现。
//输入描述 :题目有多组输入数据，每一行输入两个整数（范围（1 ~231 - 1），用空格分隔。
//输出描述 :针对每行输入，输出两个整数及其大小关系，数字和关系运算符之间没有空格，详见输入输出样例。
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	while (scanf("%d %d", &n1, &n2) == 2)//输入
//	{
//		if (n1 == n2)
//			printf("%d=%d", n1, n2);
//		else if (n1 < n2)
//			printf("%d<%d", n1, n2);
//		if (n1 > n2)
//			printf("%d>%d", n1, n2);
//	}//输出
//	return 0;
//}


////描述:将一个四位数，反向输出。https://www.nowcoder.com/practice/1f7c1d67446e4361bf4af67c08e0b8b0
////输入描述：一行，输入一个整数n（1000 <= n <= 9999）。
////输出描述：针对每组输入，反向输出对应四位数。
////输入：1234
////输出：4321
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}


////链接：https://www.nowcoder.com/questionTerminal/0fa5132c156b434da4347ad051c4be22
////依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩。
////输入描述 :一行，3科成绩，成绩之间用一个空格隔开。
////输出描述 :一行，总成绩和平均成绩（小数点后保留两位），用一个空格隔开。
//方法1
//int main()
//{
//	float score1 = 0;
//	float score2 = 0;
//	float score3 = 0;
//	//输入
//	scanf("%f %f %f", &score1, &score2, &score3);
//	//计算
//	float sum = score1+score2+score3;
//	float avg = sum / 3;
//	printf("%.2f %.2f\n", sum, avg);
//	return 0;
//}
//方法2
//int main()
//{
//	int i = 0;
//	float score = 0.0;
//	float sum = 0.0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%f", &score);
//		sum = sum + score;
//	}
//	printf("%.2f %.2f", sum, sum / 3);
//	return 0;
//}


小乐乐计算函数：https://www.nowcoder.com/practice/89238e99c36e450786ccf3a9e7481b7b
描述：小乐乐学会了自定义函数，BoBo老师给他出了个问题，根据以下公式计算m的值。