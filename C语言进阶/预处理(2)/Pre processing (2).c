#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<assert.h>
#include<ctype.h>
#include <limits.h>
//#define
//1.�����ʶ��
//#define NUM 100
//#define STR "abcdef"
//int main()
//{
//	int num = NUM;
//	char* str = STR;
//	return 0;
//}



//2.�����
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = MAX(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//#define SQUARE(x) (x)*(x)
//int main()
//{
//	int a = 9;
//	int r = SQUARE(a+1);
//	printf("%d\n", r);
//	return 0;
//}


//#define DOUBLE(x) ((x)+(x))
//int main()
//{
//	int b = 20;
//	int ret = 3 * DOUBLE(b);
//	printf("%d\n", ret);
//	
//	return 0;
//}


//
//#define PRINT(N,format)printf("the value of "#N" is "format"\n",N)
//int main()
//{
//	int a = 20;
//	double pai = 3.14;
//	PRINT(a, "%d");
//	PRINT(pai, "%lf");
//
//	return 0;
//}


//#define NUM 3
//int main()
//{
//#if NUM==1
//	printf("hehe\n");
//#elif NUM==2
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}



////ģ��ʵ��atoi
//enum Status
//{
//	VALID,
//	INVALID
//}status=INVALID;//״̬����Ϊ�Ƿ�
//int my_atoi(const char* str)
//{
//
//	int flag = 1;
//
//	//��ָ��
//	assert(str);
//
//	//�ַ���Ϊ��
//	if (*str == '0')
//	{
//		return 0;
//	}
//
//	//�հ��ַ�
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//	//������
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if(*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long n = 0;
//	while (*str!='\0')
//	{
//		if (isdigit(*str))
//		{
//			n = n * 10 + flag* (*str - '0');
//			if (n<INT_MIN )
//			{
//				n = INT_MIN;
//				break;
//			}
//			else
//			{
//				n = INT_MAX;
//				break;
//			}
//		}
//		else
//		{
//			break;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		status = VALID;
//	}
//	return (int)n;
//}
//
////��ָ��
////���ַ���
////�������ַ�
////ǰ���пհ��ַ�
////ǰ����+-
//int main()
//{
//	char arr[100] = "111111111111";
//	int ret = my_atoi(arr);
//	if(status ==VALID)
//		printf("�Ϸ�ת�� %d\n", ret);
//	else
//	{
//		printf("�Ƿ�ת��: %d\n", ret);
//	}
//	return 0;
//}




int main()
{
	long num = 0;
	FILE* fp = NULL;
	if ((fp = fopen("fname.dat", "r")) == NULL)
	{
		printf("Can��t open the file!");
		exit(0);
	}
	while (fgetc(fp) != EOF)
	{
		num++;
	}
	printf("num=%d\n", num);
	fclose(fp);
	return 0;
}