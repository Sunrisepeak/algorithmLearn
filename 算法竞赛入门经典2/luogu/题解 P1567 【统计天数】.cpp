这道题大部分人都用数组，比较耗内存。并且感觉也不用long,int就能过（2^32-1>10^9）

所以思路：直接上int+边输入边比较，简单且快速。。。。

1000ms左右AC 了这道数组题（内存少一半）。。。
```cpp
#include<iostream>
using namespace std;
int main()
{
	int n, x, x1=-1,s=0,maxs=0;	//假设第一个温度前一个是-1度，保证s>=1
	cin >> n;
	for (int i = 0;i < n;i++)	//输入+判断+求maxs
	{
		cin >> x;		//输入温度
		if (x > x1)		//判断是否升温
			s++;			//计数，不多解释
		else		//不升温
		{
			if (maxs < s)	//求最长升温天数maxs
				maxs = s;
			s = 1;			//初始化s
		}
		x1 = x;				//保留前一天温度的值
	}
	cout << maxs;		//完美输出
	return 0;			//勿忘
}
```