#define _CRT_SECURE_NO_WARNINGS
#include "List.h"

LTNode* BuyListNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}
//void ListInit(LTNode** pphead)
//{
//	(*pphead) = BuyListNode(-1);
//	(*pphead)->next = *pphead;
//	(*pphead)->prev = *pphead;
//}

LTNode* ListInit()
{
	LTNode* phead = BuyListNode(-1);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

void ListPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void ListPushBack(LTNode* phead, LTDataType x)//尾插
{
	assert(phead);

	//LTNode* newnode = BuyListNode(x);
	//LTNode* tail = phead->prev;
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;
	ListInsert(phead, x);
}

void ListPushFront(LTNode* phead, LTDataType x)//头插
{
	assert(phead);
	//LTNode* newnode = BuyListNode(x);
	//LTNode* next = phead->next;

	//phead->next = newnode;
	//newnode->prev = phead;
	//newnode->next = next;
	//next->prev = newnode;
	ListInsert(phead->next, x);
}


void ListPopBack(LTNode* phead)//尾删
{
	assert(phead);
	assert(phead->next != phead);
	///*assert(!ListEmpty(phead));*/

	//LTNode* tail = phead->prev;
	//LTNode* tailPrev = tail->prev;

	//free(tail);

	//tailPrev->next = phead;
	//phead->prev = tailPrev;
	ListErase(phead->prev);
}

void ListPopFront(LTNode* phead)//头删
{
	assert(phead);
	assert(phead->next != phead);

	ListErase(phead->next);
}

bool ListEmpty(LTNode* phead)
{
	assert(phead);

	return phead->next == phead;
}


void ListInsert(LTNode* pos, LTDataType x)//在pos位置之前插入x
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* newnode = BuyListNode(x);

	// prve newnode pos
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}

void ListErase(LTNode* pos)//删除pos位置的节点
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;

	prev->next = next;
	next->prev = prev;
	free(pos);
}