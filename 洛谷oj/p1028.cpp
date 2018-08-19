#include<iostream>
int f[501], n;
int main(){
	f[0] = 1;
	std::cin >> n;
	for(int i = 1; i <= n/2; i++)
		f[i] = f[i-1] + f[i/2];
	std::cout << f[n/2];
	return 0;
}

/*
int f[1001];
int main()
{
	int n;
	std::cin >> n;
	n = n/2;
	f[1] = f[0] = 1;
	for(int i = 2; i <= n; i++)
	{
		for(int j = 1; j <= i/2; j++)
			f[i] += f[j];
		f[i]++;
	}
	std::cout << f[n] << std::endl;
	return 0;
}
/*------------------------------------------------------------
int flag = 1;
//int f(int n)
void f(int n)
{
//	int flag = 0;
	flag += n/2;
//	std::cout << "flag" << std::endl;
	for(int i = 1; i <= n/2; i++)
//		flag += f(i) + 1;
		f(i);
//	return flag;
}
int main()
{
	int n;
	std::cin >> n;
//	std::cout << f(n) + 1 << std::endl;
	f(n);
	std::cout << flag << std::endl;
	return 0;
}
*/