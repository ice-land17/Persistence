#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
//int main()
//{
//	char arr[] = "zpengwei@year.net.hehe@haha";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//
//	const char* sep = "@.";
//	char* str = NULL;
//	for (str = strtok(buf,sep); str!= NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	//printf("%s\n", strtok(buf, sep));
//	//printf("%s\n", strtok(NULL, sep));
//	//printf("%s\n", strtok(NULL, sep));
//	return 0;
//}


//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		perror("malloc");
//		return 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	//int ret = isdigit('4');
//	//int ret = isdigit('q');
//	char ch = 'a';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char ch = 'a';
//	putchar(toupper(ch));
//	putchar(tolower(ch));
//	return 0;
//}

//void* my_memcpy(void* dest,const void*src,size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, 20);
//	return 0;
//}


