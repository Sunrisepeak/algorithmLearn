#include<stdio.h>
#include<math.h>
int main()
{
	const double pi = acos(-1.0);		//3.141593
	double n,a,b;
	scanf("%lf",&n);
	a=sin(n*pi/180);
	b=cos(n*pi/180);
	printf("%f %f %f\n",a,b,pi);	//double sin(double x){}
	return 0;
}