#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	int d = Sub(a, b);
//	printf("%d\n", d);
//
//	return 0;
//}


int main()
{
	int i = 0;
	FILE* pf = fopen("log.txt", "a");
	if (pf == NULL)
	{
		return 1;
	}
	for (i = 0; i < 10; i++)
	{
		fprintf(pf, "name:%s file:%s line:%d date:%s time:%s i=%d\n", __func__, __FILE__, __LINE__, __DATE__, __TIME__, i);
	}

	fclose(pf);
	pf = NULL;

	return 0;
}
