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
//        unsigned char ucPim1;//һ���ֽ� ȫ����
//        unsigned char ucData0 : 1;//ռ��1������λ
//        unsigned char ucData1 : 2;//ռ��2������λ
//        unsigned char ucData2 : 3;//ռ��3������λ
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;//����2�Ķ����ƣ�ռ��һ���ֽ�
//    pstPimData->ucData0 = 3;//����3�Ķ����ƣ�ֻ��ռ���±�Ϊ1�Ŀռ�1������λ����������
//    pstPimData->ucData1 = 4;//����4�Ķ����ƣ�ֻ��ռ���±�Ϊ2�Ŀռ�2������λ����������
//    pstPimData->ucData2 = 5;//����5�Ķ����ƣ�ֻ��ռ���±�Ϊ3�Ŀռ�3������λ����������
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
//	int a;  //0ƫ��   0-3  ������Ϊ4 
//	char b; //		 4	   ������Ϊ1
//	short c;//       6-7   ������Ϊ2
//	short d;//       8-9   ������Ϊ2
//	//����0-9ռ��ʮ���ֽڣ���������Ϊ4����4�ı�����Ϊ12
//}AA_t;
//int main()
//{
//	printf("%d", sizeof(AA_t));
//	return 0;
//}




//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//���磺�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.
//
//1 2 3 4 5 1 2 3 4
//�ҳ�ֻ����1�ε����� - �ҵ���
//
//1 2 3 4 5 1 2 3 4 6
//�ҳ�ֻ����1�ε�2������ - ����������
//

//���ļ�������ǣ���ͬΪ0������Ϊ1
//
//101
//110
//011

//�������Ƶ����λ
//1 3 5 1 3 -5
//2 4 2 4 6 -6
// 
//�������Ƶĵ����ڶ�λ
//5 1 1 4 4 
//6 3 3 2 2
//
void find_single_dog(int arr[], int sz)
{
	int single1 = 0;
	int single2 = 0;

	//1. ���������ɻ�
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}

	//2. ����ret�Ķ������еڼ�λ��1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	
	//3.����
	//�ѵ�iλΪ0�ķ���һ�����У������һ��
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