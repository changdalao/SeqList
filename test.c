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
	printf("Î²²å> ");
	SeqPrint(&s);
	printf("Î²É¾> ");
	SeqPopBack(&s);
	SeqPrint(&s);
	printf("Í·²å> ");
	SeqPushFront(&s, -1);
	SeqPrint(&s);
	printf("Í·É¾> ");
	SeqPopFront(&s);
	SeqPrint(&s);
	printf("SeqList is empty? %d\n",EmptySeq(&s));
	printf("Ã°ÅİÅÅĞò> ");
	SeqSort(&s);
	printf("ÈÎÒâÎ»ÖÃ²åÈë> ");
	SeqInsert(&s, 3, 6);
	SeqPrint(&s);
	printf("ÈÎÒâÎ»ÖÃÉ¾³ı> ");
	SeqErase(&s, 3);
	SeqPrint(&s);
	system("pause");
	return 0;
}