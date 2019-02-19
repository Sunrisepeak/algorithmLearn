#include<stdio.h>
/*用指针指向地址改变mian函数中的值
此时a，b依旧是局部变量,但里面存的是main函数中a b 的地址,
用解引用符*可改变main函数中的变量a b 的值*/
void swap(int* a, int* b)
{
	int t = *a; *a = *b; *b = t;
}
int main()
{
	int a = 3, b = 4;
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}