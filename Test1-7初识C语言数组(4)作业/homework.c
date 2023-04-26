#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//链接：https://www.nowcoder.com/questionTerminal/4280d330fe314e8f98cd5c593e3e9190
//BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。
//BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
//int main()
//{
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0; 
//}




//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，
//每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。
//（假设最初电梯在1层）
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 109)
//输出描述：
//输出一个整数，即小乐乐到达楼上需要的时间。
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", (n / 12) * 4 + 2);
//
//    return 0;
//}





//实现字母的大小写转换。多组输入输出。
//输入描述：多组输入，每一行输入大写字母。
//输出描述：针对每组输入输出对应的小写字母。
//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch >= 'A' && ch <= 'Z')
//        {
//            ch += 32;
//        }
//        printf("%c\n", ch);
//        getchar();
//    }
//    return 0;
//}




////判断素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if(n%j==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////判断是不是闰年
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int count = 0;
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n一共有多少个闰年 = %d\n", count);
//}




////写一个函数可以交换两个整形变量的内容
////当实参传给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参。
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前: a=%d,b=%d\n", a, b);
//	swap2(&a,&b);
//	printf("交换后: a=%d,b=%d\n", a, b);
//	return 0;	
//}




//void print_table(int n)
//{
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}



//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//int main()
//{
//    int ret = Fun(2);
//    printf("%d\n", ret);
//    return 0;
//}




////接受一个整型值(无符号).，按照顺序打印它的每一位。
////例如 :输入: 1234, 输出1 2 3 4.
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



//////求n的阶乘，不考虑溢出
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}



////编写函数求字符串的长度，不允许使用临时变量；
//int my_strlen(char* str)
//{
//	int count = 0;//统计字符的个数
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}



//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//void reverse_string(char* str)//指针方式
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str+len-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char arr[])//数组下标方式
//{
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	left++;
//	right--;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse_string(char*str)//递归实现
//{	
//	int len = strlen(str);
//	char tmp = *str;
//	*str=*(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//
//	*(str + len - 1)= tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int  DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n; 
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//
//	return 0;
//}


////编写一个函数实现n的k次方，使用递归实现。
//double Power(int n, int k)
//{
//	if (k > 0)
//		return n * Power(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Power(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d",&n,&k);
//	double ret = Power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}



//求第n个斐波那契数:这个数列从第 3 项开始，每一项都等于前两项之和。
//int fib(int n)//递归方式
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}



////循环求斐波那契数
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}




//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	//初始化
//	/*init(arr, sz);*/
//	print(arr, sz);
//	return 0;
//}



////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}