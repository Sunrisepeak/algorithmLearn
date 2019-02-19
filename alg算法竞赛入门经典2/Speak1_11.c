#include<stdio.h>
int main()
{
	int n,m,a,b;
	scanf("%d%d",&n,&m);
/*	if((n-(4*n-m)/2+(4*n-m)/2)==n&&0<=(4*n-m)/2&&(4*n-m)/2<=n)
		printf("%d %d\n",(4*n-m)/2,n-(4*n-m)/2);
	else
		printf("No answer\n");		*/
	a=(4*n-m)/2;
	b=n-a;
	if(a<0||b<0||m%2==1)
		printf("No answer\n");
	else
		printf("%d %d\n",a,b);
	return 0;
}