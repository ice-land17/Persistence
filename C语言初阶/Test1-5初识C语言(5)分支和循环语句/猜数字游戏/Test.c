#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("******************************\n");
//	printf("******1.play     0.exit*******\n");
//	printf("******************************\n");
//}
//
//void game()
//{
//	//1.���������
//	RAND_MAX;
//	int ret = rand()%100+1;
//	
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//				printf("��С��\n");
//		}
//		else
//		{
//				printf("��ϲ�㣬�¶���\n");
//				break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("\n�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf(" %d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
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



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0; 
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if(i % j == 0)
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
//	return 0;
//}
//
//
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2~i-1
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//1 2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//


//�ж�����
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			count++;
//			printf("%d ", y);
//		}
//		if (y % 400 == 0)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//���Լ��
//���������������������������Լ��
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);//18 24
	//����
	//int k = (m > n ? n : m);
	int k = 0;
	if (m > n)
		k = n;
	else
		k = m;
	while (1)
	{
		if (m % k == 0 && n % k == 0)
		{
			break;
		}
		k--;
	}
	printf("%d\n", k);
	return 0;
}


int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);//18 24
	//����
	int k = 0;
	while (k = m % n)
	{
		m = n;
		n = k;
	}
	printf("%d\n", n);
	return 0;
}
