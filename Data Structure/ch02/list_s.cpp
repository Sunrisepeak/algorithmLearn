#include<cstdio>
#include<malloc.h>
#include"list_s.h"
void CreateList(SqList * &L, ElemType a[], int n)
{
    L = (SqList *)malloc(sizeof(SqList));
    for(int i = 0; i < n; i++)
        L->data[i] = a[i];
    L->length = n;
}

void InitList(SqList * &L)
{
    L = (SqList *)malloc(sizeof(SqList));
    L->length = 0;
}

void DestoryList(SqList * &L)
{
    free(L);
}

bool ListEmpty(SqList * L)
{
    return L->length ? true : false;
}

int ListLength(SqList * L)
{
    return L->length;
}
void DispList(SqList * L)
{
    for(int i = 0; i < L->length; i++)
        printf("%d ", L->data[i]);
    putchar('\n');
}
/*
bool GetElem(SqList * L, int i, ElemType &e)

int LocateElem(SqList * L, ElemType e)

bool ListInsert(SqList * &L, int i, ElemType &e)

bool ListDelete(SqList * &L, int i, ElemType &e)
*/
