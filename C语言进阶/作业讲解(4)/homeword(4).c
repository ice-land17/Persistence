#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>



//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//struct _Record_Struct* pointer = (struct _Record_Struct*)
//	malloc(sizeof(struct _Record_Struct) * MAX_SIZE);


//int main()
//{
//    unsigned char puc[4];
//    struct tagPIMh
//    {
//        unsigned char ucPim1;//一个字节 全给它
//        unsigned char ucData0 : 1;//占用1个比特位
//        unsigned char ucData1 : 2;//占用2个比特位
//        unsigned char ucData2 : 3;//占用3个比特位
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;//放入2的二进制，占满一个字节
//    pstPimData->ucData0 = 3;//放入3的二进制，只能占用下标为1的空间1个比特位，从右往左。
//    pstPimData->ucData1 = 4;//放入4的二进制，只能占用下标为2的空间2个比特位，从右往左。
//    pstPimData->ucData2 = 5;//放入5的二进制，只能占用下标为3的空间3个比特位，从右往左。
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    //02  29  00  00
//    return 0;
//}



//union Un
//{
//    short s[7];
//    int n;
//};
//int main()
//{
//    printf("%d\n", sizeof(union Un));
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}



//int main()
//{
//	enum ENUM_A
//	{
//		X1,//0
//		Y1,//1
//		Z1 = 255,
//		A1,//256
//		B1,//257
//	};
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//}

//typedef struct {
//	int a;  //0偏移   0-3  对齐数为4 
//	char b; //		 4	   对齐数为1
//	short c;//       6-7   对齐数为2
//	short d;//       8-9   对齐数为2
//	//所以0-9占了十个字节，最大对齐数为4，找4的倍数，为12
//}AA_t;
//int main()
//{
//	printf("%d", sizeof(AA_t));
//	return 0;
//}




//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.
//
//1 2 3 4 5 1 2 3 4
//找出只出现1次的数字 - 找单身狗
//
//1 2 3 4 5 1 2 3 4 6
//找出只出现1次的2个数字 - 找两条单身狗
//

//异或的计算规律是：相同为0，相异为1
//
//101
//110
//011

//看二进制的最低位
//1 3 5 1 3 -5
//2 4 2 4 6 -6
// 
//看二进制的倒数第二位
//5 1 1 4 4 
//6 3 3 2 2
//
void find_single_dog(int arr[], int sz)
{
	int single1 = 0;
	int single2 = 0;

	//1. 所有数字疑惑
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}

	//2. 计算ret的二进制中第几位是1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	
	//3.分组
	//把第i位为0的放在一个组中（异或在一起）
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 0)
		{
			single1 ^= arr[i];
		}
	}

	single2 = ret ^ single1;
	printf("%d %d\n", single1, single2);
}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	find_single_dog(arr, sz);

	return 0;
}