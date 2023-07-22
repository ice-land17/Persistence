#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//int is_left_move(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str2的后边追加一个str2
//	strncat(str2, str2, strlen(str2));
//	//2.判断str1是不是追加后的字串
//	char* ret = strstr(str2, str1);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "efabcd";
//	int ret = is_left_move(arr2, arr1);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}




#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//假设long 是4个字节
int main(int argc, char* argv[])
{
    struct tagTest1
    {
        short a;
        char d;
        long b;
        long c;
    };
    struct tagTest2
    {
        long b;
        short c;
        char d;
        long a;
    };
    struct tagTest3
    {
        short c;
        long b;
        char d;
        long a;
    };
    struct tagTest1 stT1;
    struct tagTest2 stT2;
    struct tagTest3 stT3;

    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
    return 0;
}
#pragma pack()