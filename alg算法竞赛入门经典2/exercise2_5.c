#include<stdio.h>
int main()
{
	int a, b, c, flag = 0;
	while(scanf("%d%d%d",&a,&b,&c)==1||a||b||c)
	{
		printf("Case %d: %d.",++flag,a/b);
		for(int i = 1; i < c; i++)
		{
		//	int k = (a*10/b)%10;
		//	printf("%d",k);
		//	a = a * 10 % b;

			a = a % b * 10;
			printf("%d",a/b);	
		}
		int k = a * 10 % b;
		if((k*10/b)%10 >= 5)
			printf("%d",(a*10/b)%10+1);
		else
			printf("%d",(a*10/b)%10);
		printf("\n");
	}
	return 0;
}