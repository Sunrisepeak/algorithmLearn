#include<stdio.h>
#include<math.h>
int main()
{
	int be = sizeof(double);
	printf("%lf\n",pow(2,8*be)-1);
	return 0;
}