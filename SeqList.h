#include<stdio.h>
#include<windows.h>
#include<assert.h>

#define Max 100

typedef int DataType;

typedef struct SeqList
{
	DataType a[Max];
	size_t size;//���ݸ���
}SeqList;

void SeqInit(SeqList* Pseq);//��ʼ��
void SeqPrint(SeqList* Pseq);
void SeqPushBack(SeqList* Pseq, DataType data);//β��
void SeqPopBack(SeqList* Pseq);//βɾ
void SeqPushFront(SeqList* Pseq, DataType data);//ͷ��
void SeqPopFront(SeqList* Pseq);
int EmptySeq(SeqList* Pseq);
void SeqSort(SeqList* Pseq);//����
void SeqInsert(SeqList* Pseq, int x, DataType data);//����λ�ò���
void SeqErase(SeqList* Pseq, int x);//����λ��ɾ��
int SeqFind(SeqList* Pseq, DataType data);//����