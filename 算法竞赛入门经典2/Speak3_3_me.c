#include<stdio.h>
#include<string.h>
#define maxn 20
int a[maxn][maxn];
int main()
{
	int n, x, y, tot = 0;
	int flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0;
	scanf("%d", &n);
	memset(a,0,sizeof(a));
	tot = a[x=0][y=n-1] = 1;
	while(tot < n*n)
	{
	//	printf("  debug1\n");
		flag1++;
		while(x + flag1 < n) a[++x][y] = ++tot;
	//	printf("  debug2  %d\n",tot);
		flag2++;		
		while(y - flag2 >= 0) a[x][--y] = ++tot;
		flag3++;
	//	printf("  debug3  %d\n",tot);
		while(x- flag3 >= 0) a[--x][y] = ++tot;
		flag4 += 2;
	//	printf("  debug4  %d\n",tot);
		while(y+ flag4 < n) a[x][++y] = ++tot;
	//	printf("  debug5  %d\n",tot);
	}
	for(x = 0; x < n; x++)
	{
		for(y =0; y < n; y++)
			printf("%3d",a[x][y]);
		printf("\n");
	}
	return 0;
}