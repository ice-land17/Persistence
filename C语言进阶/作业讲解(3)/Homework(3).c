#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//int is_left_move(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.��str2�ĺ��׷��һ��str2
//	strncat(str2, str2, strlen(str2));
//	//2.�ж�str1�ǲ���׷�Ӻ���ִ�
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




#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//����long ��4���ֽ�
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