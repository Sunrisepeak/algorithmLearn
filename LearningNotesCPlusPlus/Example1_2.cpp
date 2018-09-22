#include<iostream>
#include<cmath> 
using namespace std;
bool pNumber(int n)			//判断质数
{
	for(int i = 2; i <= sqrt(n); i++)
		if(n%i == 0)
			return false;
	return true;
}
void exchange(int &x, int &y)	//交换x，y的值
{
	int temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a, b;	
	while(cin >> a >> b && a != 0 && b != 0){
		int flag = 1;
		if(a > b)
			exchange(a, b);
		for(int i = 2; i <= a; i++)
			if(a%i == 0 && b%i == 0 && pNumber(i)){
				flag *= i;
	//		cout << "this is debug!----" <<i << endl;	
			}
		cout << flag << endl;
	}
	return 0;
}
