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
//	printf("���ֵΪ:%d ", m);
//}

////С�����ϵ���
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


//�������ж�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c)== 3)
//	{
//		//�ж�������
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			//�ȱ�������
//			if (a == b && b == c)
//			{
//				printf("�ȱ�������\n");
//			}
//			else if ((a == b && a != c) || (a == c && a != b) || (b==c && b!=a))
//			{
//				printf("����������\n");
//			}
//			else
//			{
//				printf("��ͨ������\n");
//			}
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//	return 0;
//}


//��������ָ��
//int main()
//{
//	int w = 0;
//	int h = 0;
//	scanf("%d %d", &w, &h);
//	float bmi = w / ((h / 100.0)*(h / 100.0));
//	printf("%.2f\n", bmi);
//	return 0;
//}


//���ܻ������
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



//С���ֶ�����
//int main()
//{
//	int h = 0;
//	int m = 0;
//	int k = 0;
//	����
//	scanf("%d:%d:%d", &h, &m, &k);
//	����
//	int h2 = (h + (m + k) / 60) % 24;
//	int m2 = (m + k) % 60;
//	���
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