#include<stdio.h>
#include<math.h>
int main()
{
	for(int a = 1; a <= 9; a++)
		for(int b = 0; b <= 9; b++)
		{
			int n = a*1100+b*11;
			int m = floor(sqrt(n)+0.5);		//double floor(double x) 求小于等于x的最大整数		避免浮点数的不精确性
			if(m*m==n) 
				printf("%d\n",n);
		}
		return 0;
}