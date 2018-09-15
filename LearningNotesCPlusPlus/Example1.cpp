#define LOCAL
#include<iostream>
using namespace std;
int main()
{
	int a, b, flag;	
	#ifdef LOCAL
		freopen("cin.in","r",stdin);
	#endif
	while(cin >> a >> b && a != 0 && b != 0){
		if(a > b)
		{
			a = a + b;
			b = a - b;
			a = a - b;
		}
		for(flag = a; flag > 0; flag--)
			if(a%flag == 0 && b%flag == 0)
				break;
		cout << flag << endl;
	}
	return 0;
}