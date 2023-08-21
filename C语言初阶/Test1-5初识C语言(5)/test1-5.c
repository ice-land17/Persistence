#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = MAX(a, b);
//
//	printf("最大值为:%d ", m);
//}

////小乐乐上电梯
//int main()
//{
//	int n = 0;
//
//	scanf("%d ", &n);
//
//	int m = (n / 12 )* 4 + 2;
//
//	printf("%d\n", m);
//
//	return 0;
//}


//三角形判断
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c)== 3)
//	{
//		//判断三角形
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			//等边三角形
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//			}
//			else if ((a == b && a != c) || (a == c && a != b) || (b==c && b!=a))
//			{
//				printf("等腰三角形\n");
//			}
//			else
//			{
//				printf("普通三角形\n");
//			}
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//	}
//	return 0;
//}


//计算体重指数
//int main()
//{
//	int w = 0;
//	int h = 0;
//	scanf("%d %d", &w, &h);
//	float bmi = w / ((h / 100.0)*(h / 100.0));
//	printf("%.2f\n", bmi);
//	return 0;
//}


//你能活多少秒
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	long long  seconds = 3156000 * age;
//	printf("%lld\n", seconds);
//	return 0;
//}


//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}


//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}



//小乐乐定闹钟
//int main()
//{
//	int h = 0;
//	int m = 0;
//	int k = 0;
//	输入
//	scanf("%d:%d:%d", &h, &m, &k);
//	计算
//	int h2 = (h + (m + k) / 60) % 24;
//	int m2 = (m + k) % 60;
//	输出
//	printf("%02d:%02d\n", h2, m2);
//	return 0;
//}


int main()
{
	char ch = 0;
	scanf("%c", &ch);
	printf("%d\n", ch);
	return 0;
}