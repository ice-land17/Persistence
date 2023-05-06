#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//static在C语言中:
//static是用来修饰变量和函数的
////1.修饰局部变量称为静态局部变量
//void test()					
//{						
//	int n = 1;
//	n++; 
//	printf("%d ", n);
//}
//int main() {
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
////static修饰局部变量的时候，改变了局部变量的存储类型:本来一个局部变量是存储在栈区的，
////被static修饰的局部变量是存储在静态区的。存储在静态区的变量出了它的作用域变量也不销毁，
////所以生命周期较长。static修饰的局部变量的生命周期和程序的生命周期一样。
//void test()
//{
//	static int n = 1;
//	n++; 
//	printf("%d ", n);
//}
//int main() {
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//2.修饰全局变量称为静态全局变量
// static修饰全局变量的时候，改变了全局变量的链接属性:
//本来一个全局变量是具有外部链接属性的，但是被static修饰之后就
//变成了内部链接属性。这时static修饰的全局变量只能在本源文件(.c)中使用，其他文件无法再使用到。
//extern 是用来声明外部符号的
//extern int g_val;
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}

//
////3.修饰函数称为静态函数
////声明来自外部的函数
//extern int Add(int, int);
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



////define 定义常量和宏
//
////#define定义常量
//#define NUM 100
//#define STR "hehe"
//int main() {
//	printf("%d\n", NUM);
//	printf("%s\n", STR);
//	return 0;
//}
////define 定义宏，宏是有参数的
//#define ADD(x,y)(x+y)
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



//*说明pa是指针变量
//int 是说明pa指向的对象是int类型
//int main() {
//	int a = 10;
//	int* pa = &a;//&取地址
//	*pa = 20;//解引用操作符
//	printf("%d\n", a);
//	//指针变量是用来存放地址的一种变量
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

////1.内存会被划分为小的内存单元,一个内存单元的大小是1个字节
////2.每个内存单元都有编号，这个编号也被称为:地址/指针
////3.地址/指针就可以存放在一个变量中，这个变量被称谓指针变量
////4.通过指针变量中存储的地址，就能找到指针指向的空间


//int main() {
//	char ch = 'w';
//	int n = 100;
//	double d = 3.14;
//
//	char* pc = &ch;
//	int* pi = &n;
//	double* pd = &d;
//
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pi));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//}
//指针变量是用来存放地址的
//地址的存放需要多大空间，指针变量的大小就应该是多大。
//32位机器 - 支持32位虚拟地址空间 - 产生的地址就是32bit位 - 需要32bit的空间存储4byte - 指针变量的大小是4byte
//64位机器 - 支持64位虚拟地址空间 - 产生的地址就是64bit位 - 需要64bit的空间存储8byte - 指针变量的大小是8byte



//结构体
//描述一个学生
//创建的一个学生类型
//struct Stu {
//	char name[20];
//	int age;
//	char sex[5];
//	double score;
//};
//int main() {
//	struct Stu s1 = { "张三",20,"男",90.5 };
//	struct Stu s2 = { "张四",30,"女",93.5 };
//	struct Stu s3 = { "张五",35,"无",98.5 };
//	scanf("%s %d %s %lf", s1.name, &(s1.age), s1.sex, &(s1.score));
//	//左边结构体变量，右边结构体成员
//	printf("%s %d %s %lf\n", s1.name, s1.age, s1.sex, s1.score);//结构成员访问操作符
//	struct Stu* ps = &s2;
//	struct Stu* pd = &s3;
//	printf("%s %d %s %lf\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);//两种打印方法
//	printf("%s %d %s %lf\n", pd->name,pd->age,pd->sex,pd->score);
//	//两种打印方法 ->结构成员访问操作符 ，结构体指针->结构体成员
//	return 0;
//}

