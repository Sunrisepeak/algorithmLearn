#include<iostream>
using namespace std;
int main()
{
  int a, b, c[10],flag;
  while(cin >> a >> b)
  {
	flag = 0;
	a = a + b;
	if(a < 0)
	{
		cout << "-";
		a = -a;
	}
	if(a == 0)
		cout << "0";
	while(a)
	{
		c[flag++] = a % 10;
		a = a/10;
	}
	int k = flag%3;
	for(int i = flag -1; i >= 0; i--)
	{
		cout << c[i];
		if(k && (flag - i > 3) && flag - i == k)
			cout << ",";
		if((flag-i - k)%3 == 0 && i  > 0)
			cout << ",";
	}
	cout << "\n";
  }
  return 0;
}