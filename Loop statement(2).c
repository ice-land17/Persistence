#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//do while 循环
//用法：do循环语句；
//		while（表达式）；
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

////简单的练习：
////1：计算n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//产生1-n的数字
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

////计算1！+2!+3!+....+10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//在一个有序数组中查找具体的某个数字n:讲解二分查找，二分查找的前提是数组必须是有序的；
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//	int k = 13;
//	//查找k
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right =sz-1;//右下标
//	while (left<=right)
//	{
//	int mid = (left + right) / 2;//中间元素的下标
//	if (arr[mid] < k)
//		{
//		left = mid + 1;
//		}
//	else if
//		(arr[mid] > k)
//		{
//		right = mid - 1;
//		}
//	else 
//		{
//		printf("找到了，下标为： %d\n", mid);
//		break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//	int k = 13;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{ 
//			right = right - 1;
//		}
//		else
//		{
//			printf("找到了，下标为： %d", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到了");
//		}
//	}
//	return 0;
//} 




//编写代码, 演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(250);//睡眠
//		system("cls");
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//自我练习
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(250);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}



//编写代码实现，模拟用户登录情景，并且只能登录三次。只允许输入三次密码， 
//如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
//两个字符串的比较是不能用等号的，应该使用
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if(strcmp(password, "abcdef")==0)
//		{
//			printf("密码正确\n ");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}




////猜数字游戏
////1.电脑随机生成一个数字（1-100）
////2.玩家猜数字；玩家猜小了，就告知猜小了玩家猜大了，就告知猜大了，直到猜对为止
////3.游戏可以一直玩
//void menu()
//{
//	printf("*******************\n");
//	printf("******1.play*******\n");
//	printf("******0.exit*******\n");
//	printf("*******************\n");
//}
////RAND_MAX
////rand 函数返回的随机数的范围(0~32767)
////猜数字游戏的实现	
//void game()
////时间戳 
////C语言提供了一个函数time，会返回一个时间戳
//{
//	int guess = 0;
//	//1.生成一个随机数
//	int ret = rand()%100+1;
//	while (1)
//	{
//		printf("猜数字:>\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else 
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	} 
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//				break;
//		case 0:
//			printf("退出游戏\n");
//				break;
//		default:
//			printf("选择错误，重新选择!\n");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}


