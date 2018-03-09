#include"SeqList.h"

int main()
{
	SeqList s;
	SeqInit(&s);
	SeqPushBack(&s, 0);
	SeqPushBack(&s, 1);
	SeqPushBack(&s, 2);
	SeqPushBack(&s, 3);
	SeqPushBack(&s, 4);
	SeqPushBack(&s, 5);
	SeqPushBack(&s, 6);
	printf("β��> ");
	SeqPrint(&s);
	printf("βɾ> ");
	SeqPopBack(&s);
	SeqPrint(&s);
	printf("ͷ��> ");
	SeqPushFront(&s, -1);
	SeqPrint(&s);
	printf("ͷɾ> ");
	SeqPopFront(&s);
	SeqPrint(&s);
	printf("SeqList is empty? %d\n",EmptySeq(&s));
	printf("ð������> ");
	SeqSort(&s);
	printf("����λ�ò���> ");
	SeqInsert(&s, 3, 6);
	SeqPrint(&s);
	printf("����λ��ɾ��> ");
	SeqErase(&s, 3);
	SeqPrint(&s);
	system("pause");
	return 0;
}