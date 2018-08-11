#include<stdio.h>
#include<time.h>
int main()
{
	const int MOD = 1000000;
	int n, s = 0;
	scanf("%d", &n);
	if(n>25) n=25;			//提高效率
	for(int i = 1; i <= n; i++)
	{
		int factorial = 1;
		for(int j = 1; j <= i; j++)
			factorial = factorial*j%MOD;		//每一步都进行求余，避免溢出
		s = (factorial+s)%MOD;
	}
	printf("%d\n",s);
	printf("Time used = %.2f\n",(double)clock()/CLOCKS_PER_SEC);
	return 0;
}