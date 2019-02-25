#include<cstdio>
#include"list_s.h"
int main()
{
    SqList *L;
    int a[] = {2, 3, 5, 6};
    InitList(L);
	printf("List Init success.\n");
    CreateList(L, a, 4);
	printf("List create success: ");
    DispList(L);
	printf("list of length: %d\n", ListLength(L));
	int ins = 666;
	for(int i = 1; i <= L->length + 1; i *= 2)	
	{	//test two state of error and success
		printf("list insert elem_data %d in locate %d : ", ins*i, i);
		if(ListInsert(L, i, ins*i))
			printf("Success\n");
		else
			printf("Failure\n");
	}
   	return 0;
}
