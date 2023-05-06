#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	float a = 3 / 2.0;
//	printf("%f\n", a);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a >> 1;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = -5;
//	int b = a >> 1;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//位操作符
//&^ |
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	printf("%d\n", c);//打印3
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	printf("%d\n", c);//打印-5
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	printf("%d\n", c);//打印-8
//	//对应的二进制位，相同位0；相异为1；
//	return 0;
//}



//int main()
//{
//	int num1 = 1;
//	int num2 = 2; 
//	int num4 = num1 & num2;//0
//	int num5 = num1 | num2;//3
//	int num6 = num1 ^ num2;//3
//	printf("%d %d %d", num4, num5, num6);
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



////编写代码实现:求一个整数存储在内存中的二进制中1的个数。
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//c语言中c99之前没有表示真假的类型
//c99中引用了布尔类型
//#include <stdbool.h>
//int main()
//{
//	_Bool flag1 = false;
//	bool flag2 = true;
//	if (flag2)
//	{
//		printf("hehe\n");
//	}
//}
//int main()
//{
//	int num = 10;
//	if (num)
//	{
//
//	}
//	if (!num)
//	{
//	}//num为假,做事情
//}



//int main()
//{
//	int a = -10;
//	int b = -a;
//	printf("%d\n", b);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//&取地址操作符
//	//*解引用操作符(间接访问操作符）
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*-解引用操作符
//	int arr[10] = { 0 };
//	&arr;//取出数组的地址，数组的地址应该放到数组指针中去
//	struct S s = { 0 };
//	struct  S* ps = &s;
//	return 0;
//}

//sizeof是一个操作符，不是函数
//计算类型创建的变量所占内存的大小，单位是字节
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	int a = 10;
//	short s = 0;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//对一个数的二进制为按位取反
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = ++a;
//	printf("%d\n", b);
//	printf("%d\n", ++a);
//	return 0;
//}\



//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*/
//	i = a++ || ++b || d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//		b = 3;
//	else//转换为条件表达式
//		b = -3;
//
//	b = (a > 5 ? 3 : -3);
//	return 0;
//}


////使用条件表达式实现找两个数中较大值
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int m = (a > b ? a : b);
//	return 0;
//}




//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10,a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//下标引用操作符
//	//arr4
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int ret = Add(2, 3);/*()函数调用操作符，操作数就是：Add,2,3*/
//	printf("%d\n");
//	return 0;
//}




struct Stu
{
	char name[20];
	int age;
	float score;
};
void print1(struct Stu ss)
{
	printf("%s %d %f\n", ss.name, ss.age, ss.score);//结构体变量.成员名
	printf("%s %d %f\n", ps->name, ps->age, ps->score);
}

void print1(struct Stu* ps)
{
	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);//结构体指针.成员名
}

int main()
{
	struct Stu s = { "张三",20,90.5f };
	print1(s);
	return 0;
}