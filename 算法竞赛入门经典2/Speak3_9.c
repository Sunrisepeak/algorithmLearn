#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = n-60; i < n; i++)
	{
		int  s = i, sum = 0;;
		while(s)
		{		
			sum += s%10;
			s = s / 10;
		}
//		printf("this is debug %d\n",sum);
		if(sum == n - i)
		{
			printf("%d\n",i);
			return 0;
		}
	}
	printf("0\n");
	return 0;
}