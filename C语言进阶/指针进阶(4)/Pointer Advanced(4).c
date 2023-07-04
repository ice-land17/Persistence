#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//一维数组
//	//数组名通常来说是数组首元素的地址；
//	// 但是有两个例外(1)sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
//	//				(2)&数组名,这里的数组名表示整个数组，取出的是整个数组的地址。
//	sizeof 计算的是对象所占内存的大小-单位是字节
//	int a[] = { 1,2,3,4 };
//	printf("%llu\n", sizeof(a));//16
//	printf("%llu\n", sizeof(a+0));//8 a+0是数组第一个元素的地址，大小为4或8个字节
//	printf("%llu\n", sizeof(*a));//4  a表示数组首元素的地址，+a表示数组第一个元素，sizeof(*a)就是第一个元素的大小-4
//	printf("%llu\n", sizeof(a+1));//4或8 a表示数组首元素的地址，a+1是数组第二个元素的地址，sizeof(a+1)就是第二个元素的地址的大小
//	printf("%llu\n", sizeof(a[1]));//4  计算的是第二个元素的大小，为4个字节
//	printf("%llu\n", sizeof(&a));//8   &a取出的是数组的地址，是地址大小就是4或8个字节
//	printf("%llu\n", sizeof(*&a));//16 计算的是整个数组的大小
//	printf("%llu\n", sizeof(&a+1));//8  &a是数组的地址，+1跳过整个数组，产生的是4后边位置的地址，是地址就是4或者8个字节
//	printf("%llu\n", sizeof(&a[0]));//8  取出的是数组第一个元素的地址，4或8
//	printf("%llu\n\n", sizeof(&a[0]+1));//8 取出的是数组第二个元素的地址，4或8
//
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%llu\n", sizeof(arr));//6     6个元素，所以为6
//	printf("%llu\n", sizeof(arr+0));//8   arr+0是首元素地址+0还是首元素地址，是首元素地址就是4或8个字节
//	printf("%llu\n", sizeof(*arr));//1    *arr是首元素，首元素是一个字符，大小是一个字节
//	printf("%llu\n", sizeof(arr[1]));//1   arr[1] 是数组第二个元素，大小也是1个字节
//	printf("%llu\n", sizeof(&arr));//8     取地址arr是数组的地址，是地址大小就为4或8个字节
//	printf("%llu\n", sizeof(&arr+1));//8	 &arr+1是从数组地址开始向后跳过整个数组产生的地址，大小就为4或者8个字节
//	printf("%llu\n\n", sizeof(&arr[0]+1));//8 取出首元素地址加1，就是第二个元素的地址，大小就为4或者8
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值，arr数组中没有\0，所以strlen函数会继续往后找\0，统计\0之前出现的字符个数
//	printf("%d\n", strlen(arr+0));//随机值，arr+0还是数组首元素的地址，
//	printf("%d\n", strlen(*arr));//err错误 arr是数组首元素的地址，*arr是数组的首元素，‘a’是asci码值为97，strlen把97当作地址
//	printf("%d\n", strlen(arr[1]));//err错误-‘b’-98
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr+1));//随机值 
//	printf("%d\n", strlen(&arr[0]+1));//随机值
//	return 0;
//}





//int main()
//{
////	/*char arr[] = "abcedf";*/
////	//printf("%d\n", sizeof(arr));//7
////	//printf("%d\n", sizeof(arr+0));//8    arr+0是数组首元素的地址
////	//printf("%d\n", sizeof(*arr));//1	   *arr数组的首元素,首元素地址解引用就是首元素，大小就为1个字节
////	//printf("%d\n", sizeof(arr[1]));//1   arr[1]数组的第二个元素b，大小就为1个字节
////	//printf("%d\n", sizeof(&arr));//8     取地址arr是数组的地址，但是数组的地址依然是地址，是地址大小就是4/8
////	//printf("%d\n", sizeof(&arr+1));//8   &arr+1是/0后边的地址，跳过整个数组，是地址就是4/8
////	//printf("%d\n\n", sizeof(&arr[0]+1)); //8 首元素地址+1取出来是数组第二个元素的地址，是地址就为4/8
////
////	char arr[] = "abcdef";//a b c d e f /0
////	printf("%d\n", strlen(arr));//6             strlen 统计的是/0之前的字符，所以为6
////	printf("%d\n", strlen(arr+0));//6           arr+0是，数组名表示首元素地址，+0还是首元素，所以还是6
////	//printf("%d\n", strlen(*arr));//err错误     *arr 就是a，a就是97，就会形成非法访问
////	//printf("%d\n", strlen(arr[1]));//err错误   arr[1]就是a，a就是97，形成非法访问
////	printf("%d\n", strlen(&arr));//6             strlen取地址arr，取出的是数组的地址，数到/0为止，所以为6       
////	printf("%d\n", strlen(&arr+1));//随机值       跳过整个数组+1，得到的就是/0后边的，所以为随机值
////	printf("%d\n", strlen(&arr[0]+1));//5         arr[0]首元素a取地址+1就为b的地址，数到后边就是5个字符\
//	
//	char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4/8       p是指针变量，计算的是指针变量的大小
//	//printf("%d\n", sizeof(p+1));//4/8     p+1是'b'的地址，所以为4/8
//	//printf("%d\n", sizeof(*p));//1        p存的是a的地址，*p就是a，所以大小为1个字节
//	//printf("%d\n", sizeof(p[0]));//1      p[0]->*(p+0)->*p,所以就是一个字节
//	//printf("%d\n", sizeof(&p));//4/8      取地址p是指针变量p在内存中的地址
//	//printf("%d\n", sizeof(&p+1));//4/8    取地址P+1就是直接跳到数组最后，是地址就是4/8
//	//printf("%d\n", sizeof(&p[0]+1));//4/8 取地址p[0]就是a,+1就是b，是地址就为4/8
//
//	//printf("%d\n", strlen(p));//6         f后边为/0，所以为7个字符
//	//printf("%d\n", strlen(p+1));//5       p+1为b的地址，从b的位置开始向后数字符，所以为5
//	////printf("%d\n", strlen(*p));//err    错误，p是a的地址，*p就是a,a为97,97传给strlen为错
//	////printf("%d\n", strlen(p[0]));//err  错误  p是a的地址，*p就是a,a为97,97传给strlen为错
//	//printf("%d\n", strlen(&p));//6        随机值
//	//printf("%d\n", strlen(&p+1));//30     随机值
//	//printf("%d\n", strlen(&p[0]+1));//5   取地址p[0]+1就是b的地址，所以就从b向后开始数，就是5
//
//	////二维数组
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//48          计算的是整个数组的大小，单位是字节3*4*4=48个字节
//	//printf("%d\n", sizeof(a[0][0]));//4     第一行第一个元素大小，所以为4个字节
//	//printf("%d\n", sizeof(a[0]));//16       a[0]就是第一行的数组名，sizeof(a[0])就是第一行的数组名单独放在sizeof内部，计算的是第一行的大小
//	//printf("%d\n", sizeof(a[0]+1));//4/8    a[0]作为第一行的数组名，并没有	单独放在sizeof内部，
//	//										//也没有被取地址，所以a[0]就是数组首元素的地址，就是第一行第一个元素的地址，a[0]+1就是第一行第二个元素的地址
//	//printf("%d\n", sizeof(*(a[0]+1)));//4   (*(a[0]+1)))解引用表示的就是第一行第二个元素，大小就是4个字节
//	//printf("%d\n", sizeof(a+1));//4/8       a表示首元素的地址，a是二维数组，首元素的地址就是第一行的地址，所以a表示的是二维数组第一行的地址，a+1就是第二行的地址
//	//printf("%d\n", sizeof(*(a+1)));//16     对第二行的地址解引用就是访问到第二行
//	//printf("%d\n", sizeof(&a[0]+1));//4/8   a[0]是第一行的数组名，&a[0]，取出的就是第一行的地址，&a[0]+1 就是第二行的地址
//	//printf("%d\n", sizeof(*(&a[0]+1)));//16 对第二行的地址解引用访问到就是第二行
//	//printf("%d\n", sizeof(*a));//16         a就是首元素的地址，就是第一行的地址，解引用就是第一行
//	//printf("%d\n", sizeof(a[3]));//16		
//	//return 0;
//
//	//总结:sizeof是一个操作符
//	//sizeof计算的是对象所占内存的大小-单位是字节，返回值类型为size_t
//	//不在乎内存中存放的是什么，只在乎内存大小
//	//strlen 是库函数
//	//只能求字符串长度，从给定的地址向后访问字符，统计/0之前出现的字符个数
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr-1));//*(a + 1)表示首元素的地址，a+1就是2的地址
//										//*(ptr - 1)ptr跳到数组最后，-1就是向左移动一位整形，然后从4后边向后访问1个整形就是5
//	return 0;
//}




////结构体大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000 如下表达式的值分别为多少
////已知，结构特Test类型的变量大小是20个字节 
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4,2000000
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}