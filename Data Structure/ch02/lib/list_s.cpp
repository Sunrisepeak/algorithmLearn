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

bool GetElem(SqList * L, int i, ElemType &e)
{
	if(i < 1 || i > L->length)
		return false;
	e = L->data[i - 1];
	return true;
}

int LocateElem(SqList * L, ElemType e)
{
	for(int i = 0; i < L->length; i++)
		if(L->data[i] == e)
			return i + 1;
	return 0;
}

bool ListInsert(SqList * &L, int i, ElemType e)
{
	if(L->length + 1 > MaxSize || i > L->length || i < 1)
		return false;
	for(int j = L->length; j >= i; j--)
		L->data[j] = L->data[j - 1];
	L->data[i] = e;
	L->length++;
	return true;
}

bool ListDelete(SqList * &L, int i, ElemType &e)
{
	if(i < 1 || i > L->length)
		return false;
	e = L->data[i - 1];
	for(int j = i - 1; j < L->length - 1; j++)
		L->data[j] = L->data[j + 1];
	L->length--;
	return true;
}
