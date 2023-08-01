#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void f1()
//{
//	int a = 0;
//	printf("%p\n", &a);
//}
//void f2()
//{
//	int b = 0;
//	printf("%p\n", &b);
//}
//int main()
//{
//	f1();
//	f2();
//	return 0;
//}


void reverse(int* a, int left, int right)
{
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		++left;
		--right;
	}
}
void rotate(int* nums, int numsSize, int k)
{
	k %= numsSize;
	reverse(nums, numsSize - k, numsSize - 1);
	reverse(nums, 0, numsSize-k- 1);
	reverse(nums, 0, numsSize - 1);
}