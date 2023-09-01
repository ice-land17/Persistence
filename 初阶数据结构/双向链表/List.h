#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

//void ListInit(LTNode** pphead);
LTNode* ListInit();//��ʼ��

void ListPrint(LTNode* phead);//��ӡ

void ListPushBack(LTNode* phead, LTDataType x);//β��

void ListPushFront(LTNode* phead, LTDataType x);//ͷ��

void ListPopBack(LTNode* phead);//βɾ

void ListPopFront(LTNode* phead);//ͷɾ

bool ListEmpty(LTNode* phead);

void ListInsert(LTNode* pos, LTDataType x);//��posλ��֮ǰ����x

void ListErase(LTNode* pos);//ɾ��posλ�õĽڵ�