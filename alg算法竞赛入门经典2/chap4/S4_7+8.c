#include<stdio.h>
int sum1(int a[])		//这里相当与	int* a ; 数组只把他的首地址地址传给了a
{
	int ans = 0;
	printf("sum1--sizeof(a) = %d\n", sizeof(a));
	for(int i = 0; i < sizeof(a); i++)		//这里sizeof(a)不能得到数组的大小,因为这里a只是个指针，里面存着数组的首地址，并不是数组类型
	{
		ans += a[i];
	}
	return ans;
}
int sum2(int* a, int n)			//需要手动加一个数组的大小
{
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		ans += a[i];
	}
	return ans;
}
int main()
{
	int a[] = {1,2,3,4};
	printf("sum1------------%d\n", sum1(a+1));		
	printf("sum2------------%d\n", sum2(a+1,3));	//这里a+1的使用类似迭代器的使用,表示下一元素的地址(a表示首元素地址)
	return 0;
} 