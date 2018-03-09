#include"SeqList.h"

void SeqInit(SeqList* Pseq) 
{
	assert(Pseq);
	Pseq->size = 0;
	memset(Pseq->a, 0, sizeof(DataType)*Max);
}
void SeqPrint(SeqList* Pseq)
{
	assert(Pseq);
	for (int i = 0; i < Pseq->size; i++)
	{
		printf("%d ", Pseq->a[i]);
	}
	printf("\n");
}

void SeqPushBack(SeqList* Pseq, DataType data)
{
	assert(Pseq);
	/*if (Max == Pseq->size)
	{
		printf("SeqList is FULL\n");
		return;
	}
	Pseq->a[Pseq->size] = data;
	Pseq->size++;*/
	SeqInsert(Pseq, Pseq->size, data);
}
void SeqPopBack(SeqList* Pseq)
{
	assert(Pseq);
	if (0 == Pseq->size)
	{
		printf("SeqList is NULL\n");
		return;
	}
	Pseq->size--;
}
void SeqPushFront(SeqList* Pseq, DataType data)
{
	assert(Pseq);
	if (Pseq->size == Max)
	{
		printf("SeqList is FULL\n");
		return;
	}
	/*int end = Pseq->size-1;
	while (end>=0)
	{
		Pseq->a[end+1] = Pseq->a[end];
		end--;
	}
	Pseq->a[0] = data;
	Pseq->size++;*/
	SeqInsert(Pseq, 0, data);
}
void SeqPopFront(SeqList* Pseq)
{
	assert(Pseq);
	if (0 == Pseq->size)
	{
		printf("SeqList is NULL\n");
		return;
	}
	/*for (int i = 0; i < Pseq->size; i++)
	{
		Pseq->a[i] = Pseq->a[i + 1];
	}
	Pseq->size--;*/
	SeqErase(Pseq, 0);
}
int EmptySeq(SeqList* Pseq)
{
	assert(Pseq);
	return (0 == Pseq->size) ? 0 : 1;
}
void SeqSort(SeqList* Pseq)
{
	assert(Pseq);
	int i = 0, j = 0;
	for (i = 0; i < Pseq->size; i++)
	{
		int flag = 0;
		for (j = i + 1; j < Pseq->size; j++)
		{
			DataType tmp = Pseq->a[i];
			Pseq->a[i] = Pseq->a[j];
			Pseq->a[j] = tmp;
			flag = 1;
		}
		if (0 == flag)
			break;
	}
	SeqPrint(Pseq);
}
void SeqInsert(SeqList* Pseq, int x, DataType data)
{
	assert(Pseq);
	
	int end = Pseq->size - 1;
	while ( x <= end )
	{
		Pseq->a[end + 1] = Pseq->a[end];
		end--;
	}
	Pseq->a[x] = data;
	Pseq->size++;
}
void SeqErase(SeqList* Pseq, int x)
{
	assert(Pseq);
	if (0 == Pseq->size)
	{
		printf("SeqList is NULL\n");
		return;
	}
	int begin = x;
	for (; begin < Pseq->size; begin++)
	{
		Pseq->a[begin] = Pseq->a[begin + 1];
	}
	Pseq->size--;
}
int SeqFind(SeqList* Pseq, DataType data)
{
	assert(Pseq);
	if (0 == Pseq->size)
	{
		printf("SeqList is NULL\n");
		return;
	}
	for (int i = 0; i < Pseq->size; i++)
	{
		if (data == Pseq->a[i])
			return Pseq->a[i];
		i++;
	}
		return 0;
}