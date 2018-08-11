#include<stdio.h>
int main()
{
	int a, b, c;
	while((scanf("%d%d%d",&a,&b,&c) != EOF))
	{
		 int n = 10, flag = 0;
		
		while(n++)
		{
			if(n > 100)
			{
				printf("Case %d: No answer\n",++flag);
				break;
			}
			if(n%3 == a && n%5 == b && n%7 == c)
			{
				printf("Case %d: %d\n",++flag,n);
				break;
			}
		}
	}
	return 0;
}