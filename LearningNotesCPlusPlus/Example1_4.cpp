#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
		int a, b, c;
		cin >> a >> b;
		if(b == 0 || a == 0)
		{
			cout << "data error!" << endl;
			return 0;
		}
		else
		{
			c = a % b;
			while(c != 0)
			{
				a = b;
				b = c;
				c = a %b;
			}
		}
		cout << b;
		return 0;
}
