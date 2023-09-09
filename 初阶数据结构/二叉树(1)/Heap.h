#pragma once
#include <stdio.h>
#include <stdbool.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;
void HeapInit(HP* php);
void HeapDestory(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);
bool HeapEmpty(HP* php);
int HeapSize(HP* php);