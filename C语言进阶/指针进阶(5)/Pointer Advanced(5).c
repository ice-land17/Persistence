#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp +3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}


//变种水仙花
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int m = i % (int)pow(10, j);
//			int n = i / (int)pow(10, j);
//			sum += m * n;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////判断字母
//int main()
//{
//	int ch = getchar();
//	if ((ch >= 'a' && ch <= 'z') || (ch >= "A" && ch <= 'Z'))
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//字符串旋转
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	int j = 0;
//	for (j = 0; j < k%len; j++)
//	{
//		char tmp = arr[0];
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	//左旋转字符代码
//	char arr[20] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//杨氏矩阵\
//方法1
//void find_k(int arr[3][3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//	int flag = 0;
//	while (x<r && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("找到了，下标是:%d %d\n", x, y);
//			flag = 1;
//			break;
//		}
//	}
//	if(flag == 0)
//	printf("找不到\n");
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 12;
//	find_k(arr, k, 3, 3);
//	return 0;
//}

//方法2
//void find_k(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *px - 1;
//	int flag = 0;
//	while (x < *py && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	//找不到
//	*px = -1;
//	*py = -1;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 2;
//	int x = 3;
//	int y = 3;
//	find_k(arr, k, &x,&y);
//	if (x == -1 && y == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标屎:%d %d\n", x, y);
//	}
//	return 0;
//}



////题目 ：有序序列合并
////描述：输入两个升序排列的序列，将两个序列合并为一个有序序列并输出
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	//接收第一个序列
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//接收第二个学列
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//有序合并打印 
//	i = 0;
//	j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ",arr1[i]);
//		i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i == n)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}


////打印空心三角图案
//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



////X形图案
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//题目:序列中删除指定数字
//描述:有一个整数序列(可能有重复的整数)，现删除指定的某一个整数， 
//输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//数据范围 : 序列长度和序列中的值都满足1≤n≤50
//输入描述 :第一行输入一个整数(0sN≤50)。
//		 第二行输入N个整数，输入用空格分隔的N个整数。
//		 第三行输入想要进行删除的一个整数。
//输出描述 :输出为一行, 删除指定数字之后的序列。
int main()
{
	int arr[50] = { 0 };
	int n = 0;
	int del = 0;
	scanf("%d", &n);
	int i = 0;
    int j = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
    //接收要删除的元素
    scanf("%d", &del);
    //删除
    i = 0;//便利数组
    j = 0;//记录可以存放数据的当前位置
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)
        {
            arr[j++] = arr[i];
        }
    }
    //打印
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
	return 0;
}