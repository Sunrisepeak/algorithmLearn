#include<cstdio>
#include"stack_s.h"
int main()
{
    SqList *L;
    int a[] = {2, 3, 5, 6};
    InitList(L);
    CreateList(L, a, 4);
    DispList(L);
    return 0;
}
