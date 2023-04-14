#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////作业1
// 下面代码执行的结果是：
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//死循环的打印5
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


//小乐乐计算函数：https://www.nowcoder.com/practice/89238e99c36e450786ccf3a9e7481b7b
//描述：小乐乐学会了自定义函数，BoBo老师给他出了个问题，根据以下公式计算m的值。
//#include <stdio.h>
//int max3(int x, int y, int z) {
//    int max = x;
//    if (y > max)
//        max = y;
//    if (z > max)
//        max = z;
//    return max;
//}
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    float m = 0.0;
//    scanf("%d %d %d", &a, &b, &c);
//    m = (float)(max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f", m);
//    return 0;
//}



//https://www.nowcoder.com/practice/60d96b08e1cb42e38629d54e37eac008
//描述:输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。
//输入描述：五行，每行输入一个学生各5科成绩（浮点数表示，范围0.0~100.0），用空格分隔。
//输出描述：五行，按照输入顺序每行输出一个学生的5科成绩及总分（小数点保留1位），用空格分隔。
//int main()
//{
//    float score[5] = {0.0};
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        float sum = 0.0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &score[j]);
//            sum = sum + score[j];
//        }
//        //输出
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", score[j]);
//        }
//        printf("%.1f\n", sum);
//    }
//    return 0;
//}



////从键盘输入5个人的身高（米），求他们的平均身高（米）。
////输入描述 :一行，连续输入5个身高（范围0.00~2.00），用空格分隔。
////输出描述 :一行，输出平均身高，保留两位小数。
//int main()
//{
//    int i = 0;
//    float hight = 0.0;
//    float sum = 0.0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f", &hight);
//        sum += hight;
//    }
//    printf("%.2f\n", sum / 5);
//    return 0;
//}



////描述:KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的线段图案。
////输入描述：多组输入，一个整数（1~100），表示线段长度，即“ * ”的数量。
////输出描述：针对每行输入，输出占一行，用“ * ”组成的对应长度的线段。
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30; //没有break，依次执行到default, 所以结果为0；
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//则func(1) = （    0  ）




//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {//商1
//	case 1://进入case1
//		switch (y)//y为3，无法进入case0；case1;
//		{
//		case 0:/*无法进入case0*/
//			printf("first");
//		case 1:/*无法进入case1*/
//			printf("second");
//			break;
//		default: printf("hello"); /*所以进入default打印hello*/
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}




//写代码将三个整数数按从大到小输出。
//例如：输入：2 3 1; 输出：3 2 1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



////打印3的倍数的数
////作业内容:写一个代码打印1 - 100之间所有3的倍数的数字
//int main()//方法1 
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()//方法2
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//			printf("%d\n", i);
//	}
//	return 0;
//}



//最大公约数：
//作业内容：给定两个数，求这两个数的最大公约数
//例如：输入：20 40 输出：20
//方法1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? b : a);
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//	return 0; 
//}
//方法2
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	printf("%d\n", b);
//}




////作业内容
////打印1000年到2000年之间的闰年
////1.能被4整除，并且不能被100整除是闰年；
////2.能被400整除是闰年;
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{ 
//		if ((y % 4 == 0 && y % 100 != 0) || ( y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



////作业内容:写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{//判断素数，就是质数，只能被1和他本身整除的数字；
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//}




////编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



////计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}




////求10个整数中最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[10];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("Max = %d", max);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int  i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
		//a =1,2,3,4,5,6,7,8
		//b =4,7,10,13,16,19,22,在a=8，b=22时跳出，打印8
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}