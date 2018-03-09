#include<stdio.h>
#include<windows.h>
#include<assert.h>

#define Max 100

typedef int DataType;

typedef struct SeqList
{
	DataType a[Max];
	size_t size;//数据个数
}SeqList;

void SeqInit(SeqList* Pseq);//初始化
void SeqPrint(SeqList* Pseq);
void SeqPushBack(SeqList* Pseq, DataType data);//尾插
void SeqPopBack(SeqList* Pseq);//尾删
void SeqPushFront(SeqList* Pseq, DataType data);//头插
void SeqPopFront(SeqList* Pseq);
int EmptySeq(SeqList* Pseq);
void SeqSort(SeqList* Pseq);//排序
void SeqInsert(SeqList* Pseq, int x, DataType data);//任意位置插入
void SeqErase(SeqList* Pseq, int x);//任意位置删除
int SeqFind(SeqList* Pseq, DataType data);//查找