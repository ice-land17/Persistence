#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	int data;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySListNode(SLTDataType x);

void SListPrint(SLTNode* phead);//��ӡ
void SListPushBack(SLTNode** pphead, SLTDataType x);//β��
void SListPushFront(SLTNode** pphead, SLTDataType x);//ͷ��
void SListPopFront(SLTNode** pphead);//ͷɾ
void SListPopBack(SLTNode** pphead);//βɾ
SLTNode* SListFind(SLTNode* phead, SLTDataType x);//����