#include<iostream>
using namespace std;
bool isPerfect(int n, int &flag, int a[])	//判断是否为完数的方法------模块一
{
	int s = 1;
	for(int i = 2; i < n; i++)
		if(n%i == 0)		//判断i是否为i的因子
		{
			s += i;			//求因子之和
			a[flag++] = i;	//存储n的因子，为输出算法提供条件
		}
	if(s == n)				//判断因子是否与n本身相等
		return true;
	return false;
}
void print(int i,int a[], int flag)			//输出函数---------模块二
{
	cout << i << " it's facors are: 1";
	for(int i = 0; i < flag; i++)		//循环打印完数的因子
		cout << "," << a[i];
	cout << "\n";
}
int main()
{
	int a[1000];	//定义数组a存储因子
	for(int i = 2; i <= 1000; i++)
	{
		int flag = 0;	//初始化数组下标
		if(isPerfect(i, flag, a))	//调用模块一,判断i是否为完数
			print(i,a,flag);			//调用模块二,打印输出
	}
	return 0;
}