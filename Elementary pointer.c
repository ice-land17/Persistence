#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//³õ½×Ö¸Õë



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//}
int main()
{
	int a = 10;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pc);
	printf("%p\n", pa+1);
	printf("%p\n", pc+1);
	return 0;
}

