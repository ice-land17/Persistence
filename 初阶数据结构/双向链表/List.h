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
LTNode* ListInit();//初始化

void ListPrint(LTNode* phead);//打印

void ListPushBack(LTNode* phead, LTDataType x);//尾插

void ListPushFront(LTNode* phead, LTDataType x);//头插

void ListPopBack(LTNode* phead);//尾删

void ListPopFront(LTNode* phead);//头删

bool ListEmpty(LTNode* phead);

void ListInsert(LTNode* pos, LTDataType x);//在pos位置之前插入x

void ListErase(LTNode* pos);//删除pos位置的节点