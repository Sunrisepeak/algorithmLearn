#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a-b<c)
	{
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
			printf("yes\n");
		else
			printf("no\n");
	}
	else
		printf("not a triangle\n");
	return 0;
}