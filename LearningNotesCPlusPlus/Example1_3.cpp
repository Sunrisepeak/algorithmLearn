#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
		int a, b, t, i;
		cin >> a >> b;
		t = 1;
		for(i = 2; i <= a && i <= b; i++)
			while(a%i == 0 && b%i == 0)
			{
				t = t*i;
				a = a/i;
				b = b/i;
			}
		cout << t << endl;
		return 0;
}