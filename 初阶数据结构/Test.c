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
	//printf("��������Ҫɾ����ֵ:");
	//scanf("%d", &x);
	//int pos = SLFind(&sl, x);
	//if (pos != -1)
	//{
	//	SLErase(&sl, pos);
	//}
	//else
	//{
	//	printf("û�ҵ�:%d\n", x);
	//}
	//SLPrint(&sl);

	int x = 0;
	printf("��������Ҫɾ����ֵ:");
	scanf("%d", &x);
	int pos = SLFind(&sl, x);
	while (pos != -1)
	{
		SLErase(&sl, pos);

		pos = SLFind(&sl, x);
	}
	SLPrint(&sl);

	int y, z;
	printf("��������Ҫ�޸ĵ�ֵ���޸ĺ��ֵ:");
	scanf("%d%d", &y, &z);
	pos = SLFind(&sl, y);
	if (pos != -1)
	{
		SLModify(&sl, pos, z);
	}
	else
	{
		printf("û�ҵ�:%d\n", y);
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
	printf("1��β�� 2��ͷ��\n");
	printf("5������ 6��ɾ��\n");
	printf("7���޸� 8����ӡ\n");
	printf("-1���˳�\n");
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
			printf("scanf�������\n");
			break;
		}
		int val, pos;
		int y, z;
		switch (option)
		{
		case 1:
			printf("������������β������ݣ���0������>");
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
			
			printf("��������Ҫ�޸ĵ�ֵ���޸ĺ��ֵ:");
			scanf("%d%d", &y, &z);
			pos = SLFind(&sl, y);
			if (pos != -1)
			{
				SLModify(&sl, pos, z);
			}
			else
			{
				printf("û�ҵ�:%d\n", y);
			}
			break;
		case 8:
			SLPrint(&sl);
			break;
		default:
			printf("�����������������\n");
			continue;
			break;
		}
	} while (option != -1);
	SLDestory(&sl);
	return 0;
}