#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList1()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);

	SLPushBack(&sl, 5);
	SLPrint(&sl);

	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPrint(&sl);
}

void TestSeqList2()
{
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPrint(&sl);
}

void TestSeqList3()
{
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	//SLPopBack(&sl);
	SLPrint(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPrint(&sl);

	SLDestory(&sl);
}

void TestSeqList4()
{
	SL sl;
	SLInit(&sl);
	//SL* psl = NULL;
	//SLInit(psl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLPopFront(&sl);
	SLPrint(&sl);

	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	//SLPopFront(&sl);
	SLPrint(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPrint(&sl);

	SLDestory(&sl);
}

void TestSeqList5()
{
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLInsert(&sl, 3, 40);
	SLPrint(&sl);
	SLInsert(&sl, 0, 40);
	SLPrint(&sl);

	SLPushBack(&sl, 1000);
	SLPrint(&sl);

	SLDestory(&sl);
}

void TestSeqList6()
{
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	SLErase(&sl, 2);
	SLPrint(&sl);
	SLErase(&sl, 0);
	SLPrint(&sl);
	SLErase(&sl, 2);
	SLPrint(&sl);

	SLPopFront(&sl);
	SLPrint(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);
}

void TestSeqList7()
{
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 5);
	SLPrint(&sl);

	//int x = 0;
	//printf("请输入你要删除的值:");
	//scanf("%d", &x);
	//int pos = SLFind(&sl, x);
	//if (pos != -1)
	//{
	//	SLErase(&sl, pos);
	//}
	//else
	//{
	//	printf("没找到:%d\n", x);
	//}
	//SLPrint(&sl);

	int x = 0;
	printf("请输入你要删除的值:");
	scanf("%d", &x);
	int pos = SLFind(&sl, x);
	while (pos != -1)
	{
		SLErase(&sl, pos);

		pos = SLFind(&sl, x);
	}
	SLPrint(&sl);

	int y, z;
	printf("请输入你要修改的值和修改后的值:");
	scanf("%d%d", &y, &z);
	pos = SLFind(&sl, y);
	if (pos != -1)
	{
		SLModify(&sl, pos, z);
	}
	else
	{
		printf("没找到:%d\n", y);
	}
	SLPrint(&sl);
} 
//int main()
//{
//	TestSeqList7();
//	return 0;
//}

void menu()
{
	printf("****************************************\n");
	printf("1、尾插 2、头插\n");
	printf("5、查找 6、删除\n");
	printf("7、修改 8、打印\n");
	printf("-1、退出\n");
	printf("****************************************\n");
}

int main()
{
	SL sl;
	SLInit(&sl);
	int option = -1;
	do
	{
		menu();
		if (scanf("%d", &option)== EOF)
		{
			printf("scanf输入错误\n");
			break;
		}
		int val, pos;
		int y, z;
		switch (option)
		{
		case 1:
			printf("请连续输入你尾插的数据，以0结束：>");
				scanf("%d", &val);
			while (val != 0)
			{
				SLPushBack(&sl, val);
				scanf("%d", &val);
			}
			break;
		case 2:

		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			
			printf("请输入你要修改的值和修改后的值:");
			scanf("%d%d", &y, &z);
			pos = SLFind(&sl, y);
			if (pos != -1)
			{
				SLModify(&sl, pos, z);
			}
			else
			{
				printf("没找到:%d\n", y);
			}
			break;
		case 8:
			SLPrint(&sl);
			break;
		default:
			printf("输入错误，请重新输入\n");
			continue;
			break;
		}
	} while (option != -1);
	SLDestory(&sl);
	return 0;
}