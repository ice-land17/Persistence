#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<assert.h>


//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%d\n", (*p).num);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//							{9803,"zhao",18} };
//	fun(students + 2);
//	return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//方法1
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += (empty / 2);
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}
//方法2
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	if (money <= 0)
//		total = 0;
//	else
//		total = money * 2 - 1;
//	printf("%d\n", total);
//	return 0;
//}


//调整数组使奇数全部都位于偶数前面。
//题目：输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[]={ 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j <= 1)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//int main()
//{
//	int killer = 0;
//	for (killer ='a'; killer <='d'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a = 0;
//	int b = 0; 
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//模拟实现 strlen（介绍三种方法）
//法1：计数器（需创建临时变量）
//size_t my_strlen(const char* str)
//{
//	int count = 0;//创建计数器
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//
//
//递归实现
//💬 模拟实现 strlen 函数（禁止创建临时变量）：
//
//size_t my_strlen(const char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}



//模拟实现strcpy函数
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(NULL != dest);
//	assert(NULL != src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "S1mpleNo1.";
//	printf("%s\n", my_strcpy(arr, p));
//	return 0;
//}



////2的n次方计算，输出对应的2的n次方的结果
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", 1 << n);
//	return 0;
//}

//链接：https://www.nowcoder.com/questionTerminal/b31996d150ea4c758a350c05e1c0a170?
//来源：牛客网
//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//输入描述:
//一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
//输出描述:
//一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
//int main()
//{
//	int i = 0;
//	int score = 0;
//	int n = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		n++;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//		sum += score;
//		if (n == 7)
//		{
//			printf("%.2f\n", (sum - max - min) / 5.0);
//			n = 0;
//			sum = 0;
//			max = 0;
//			min = 100;
//		}
//	}
//	return 0;
//}


//链接：https://www.nowcoder.com/questionTerminal/7aefd50515d84dfebe7a6003ed8bbacc
//来源：牛客网
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述 :
//多组输入，一行有两个证书，分别表示年份和月份，用空格分隔。
//输出描述 :
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
int main()
{
	int y = 0;
	int m = 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &y, &m) == 2)
	{
		int day = days[m - 1];
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		{
			if (m == 2)
				day += 1;
		}
		printf("%d\n", day);
	}
	return 0;
}