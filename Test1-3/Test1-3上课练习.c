#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//单目操作符
//C语言中0就是假，非0就是真
//int main() {
//	int a = 0;
//	int b = !a;
//	printf("b=%d\n", &b);
//
//	int flag = 5;
//	//如果frag为真做什么事情
//	if (flag)
//		printf("hehe\n");
//	//如果frag为假做什么事情
//	if (!flag)
//		printf("haha\n");
//	return 0;
//}



//正值 负值
//C语言中正号很少用
//int main() {
//	int a = -10;
//	int b = +5;
//	return 0;
//}



//sizeof 操作符  计算操作数的类型长度（以字节为单位）
//int main() {
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//}



////前置++ 后置++的区别
//int main() {
//	int a = 10;
//	int b = ++a;
////前置++，先++，后使用
//	printf("a=%d b=%d\n", a, b);
//	int c = 10;
//	int d = c++;
////后置++，先使用，后++(把c的值先赋给d,d得到10，再++，c++得到11）
//	printf("c=%d d=%d\n", c, d);
//	return 0;
//}
//前置-- 后置--的区别
//int main() {
//	int a = 10;
//	int b = --a;
//	//前置--，先--，后使用
//	printf("a=%d b=%d\n", a, b);
//	int c = 10;
//	int d = c--;
//	//后置--，先使用，后--(把c的值先赋给d,d得到10，再--，c--得到9）
//	printf("c=%d d=%d\n", c, d);
//	return 0;
//}



////强制类型转换方法
//int main() {
//	int a = (int)3.14;//强制类型转换方法
//	printf("%d\n", a);
//	return 0;
//}



//逻辑操作符；逻辑操作符关注的是真假
//&&逻辑与；并且
//||逻辑或；或者
//int main() {
//	int a = 3;
//	int b = 4;
//	if (a == 3 && b == 4)//满足两个条件
//	{
//		printf("牛逼666\n"); 
//	}
//}
//int main() {
//	int a = 3;
//	int b = 20;
//	if (a == 3 || b == 20)//满足一个条件即可
//	{
//		printf("牛逼666\n");
//	}
//}



////条件操作符exp1?exp2:exp3
////如果表达式1的结果如果为真；表达式2就要计算；表达式3就不计算；表达式2的结果又是整个表达式的结果。
////如果表达式1的结果如果为假；表达式2就不计算；表达式3就要计算；表达式3的结果又是整个表达式的结果。
//int main() {
//	int a = 3;
//	int b = 5;
//	int m = 0;
//	if (a > b)
//		m = a;
//	else
//		m = b;
//	m = ((a > b) ? a : b);
//	return 0;
//}



//逗号表达式，从左向右依次计算,整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 4;
//	int d = (a = b - 3, b = a * 2, c = a - b);
//	         //a计算得0  b计算得0    c=0*0=0
//	printf("%d\n", d);
//	return 0;
//}



////下标引用操作符[]
//int main() {
//	int arr[10] = { 1,2,3,4,5 };	
//	//              0 1 2 3 4 
//	printf("%d\n", arr[4]);
//	return 0;
//}



//int main() {
//	printf("hello");//（）就是函数调用操作符//()的操作数是函数名printf,第二个就是"hello"
//	//*int m = Max(2, 3);    三个操作数（Max，2，3）
//	return 0;
//}



