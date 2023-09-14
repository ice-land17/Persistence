#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"

void HeapInit(HP* php)

{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void HeapDestory(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		//À©ÈÝ
	}
	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);

}

void AdjustDown()
{

}
void HeapPop(HP* php)
{

}

bool HeapEmpty(HP* php)
{

}

int HeapSize(HP* php)
{

}