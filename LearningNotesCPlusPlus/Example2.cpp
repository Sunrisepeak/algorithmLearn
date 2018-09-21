#include<iostream>
using namespace std;
double volume(double r, double h)
{
	return 3.14159*r*r*h;
}
void vol(double v)
{
	cout<< "volume:" << v;
}
int main()
{
	double r, h, v;
	cin >> r >> h;
	v = volume(r,h);
	vol(v);
	return 0;
}