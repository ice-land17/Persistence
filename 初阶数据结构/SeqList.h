#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
//#define N 200;
//typedef int SLDateType;
//
//struct SeqList//��̬˳���  N̫С�����ܲ����ã�N̫�󣬿����˷ѿռ�
//{
//	SLDateType a [N];
//	int size;
//};




#define N 200;
typedef int SLDataType;

// ��̬˳��� -- N̫С�����ܲ����ã�N̫�󣬿����˷ѿռ�
typedef struct SeqList
{
	SLDataType* a; // ָ��̬����ָ��
	int size;      // ���ݸ���
	int capacity;  // ����-�ռ��С
}SL;

void SLPrint(SL* ps);

// ��ɾ���
//void SeqListInit(SL s);
void SLInit(SL* ps);
void SLDestory(SL* ps);
void SLCheckCapacity(SL* ps);

// ͷ��/ͷɾ/β��/β��
//O(1)
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
//O(N)
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);
//����λ�ò���ɾ��
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLDataType x);
void SLModify(SL* ps, int pos, SLDataType x);