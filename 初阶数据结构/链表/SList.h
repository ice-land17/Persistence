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

void SListPrint(SLTNode* phead);//¥Ú”°
void SListPushBack(SLTNode** pphead, SLTDataType x);//Œ≤≤Â
void SListPushFront(SLTNode** pphead, SLTDataType x);//Õ∑≤Â
void SListPopFront(SLTNode** pphead);//Õ∑…æ
void SListPopBack(SLTNode** pphead);//Œ≤…æ
SLTNode* SListFind(SLTNode* phead, SLTDataType x);//≤È’“