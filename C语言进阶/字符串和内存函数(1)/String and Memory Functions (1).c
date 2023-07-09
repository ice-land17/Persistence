#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	//char arr[] = "abcdef";
//	char arr[] = {'a','b','c','d','e','f'};
//	int len = strlen(arr);
//	printf("%d\n", len);
//}

//int main()
//{
//	if (strlen("abc") - strlen("qwerty") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//}



////strlen函数的模拟实现		
////1.计数器方法
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
////2.递归的方法
////3.指针减指针的方法



////strcpy 字符串拷贝
//int main()
//{
//	char arr1[20] = { 0 };
//	/*char arr2[] = "abcdef";*/
//	char arr2[10] = { 'a','b','c',};
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strcpy模拟实现
////strcpy函数的返回类型的设置是为了实现链式访问
//char* my_strcpy(char*dest,const char* src)
//{
//	assert(src && dest);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char* arr2 = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////strcat函数
//char* my_strcat(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)//找目标空间中的\0
//	{
//		dest++;
//	}
//	//拷贝
//	while(*dest++=*src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//		while (*s1 == *s2)
//		{
//			if (*s1 == '\0')
//			{
//				return 0;
//			}
//			s1++;
//			s2++;
//		}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abdc";
//
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret >0)
//	{
//		printf(">\n");
//	}
//	else if (ret == 0)
//	{
//		printf("== \n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	printf("%d\n", ret);
//
//	// 1 0 -1
//	// 
//	//strcmp函数比较的不是字符串的长度！！！！
//	//而是比较字符串中对应位置上的字符的大小，如果相同，就比较下一对儿，直到不同或者都遇到\0
//	//
//	return 0;
//}




//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "qwertyuiop";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwe";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "qwertyuiop";
//	int ret = strncmp(arr1, arr2,4);
//	printf("%d\n", ret);
//	return 0;
//}



char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	const char* s1 = str1;
	const char* s2 = str2;

	const char* cur = str1;
	while (*cur)
	{
		s1 = cur;
		s2 = str2;

		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}

	return NULL;//找不到
}

//
//查找子串的时候
//KMP算法 - B站：比特大博哥
//

int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if (NULL == ret)
	{
		printf("找不到子串\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}