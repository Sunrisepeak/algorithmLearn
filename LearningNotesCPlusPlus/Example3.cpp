#include<iostream>
using namespace std;
int main()
{
	int n;
	double s;
	while(cin >> n && n > 0)		//如果n小于0退出循环
	{	
		s = 0;
		int signal = -1, t = 1;
		for(int i = 1; i <= n; i++)
		{
			if(i > 1)
				t = t*(3*n-4)*(3*n-3)*(3*n-2);	//求3n-2的阶乘
			signal = - signal;					//正负交替
			s = s + 1./(signal*t); 				//求和
		}
		cout << s << endl;						//输出结果s
	}
	cout << "quit" << endl;
	return 0;
}