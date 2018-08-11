#include<stdio.h>
int main()
{
	int n,m,flag = 0;;
	double s;
//	while(scanf("%d%d",&n,&m) == n||m )			// 1.	0 0 结束循环 		scanf()函数返回成功赋值的数据项数，读到文件末尾出错时则返回EOF
//	while(scanf("%d%d",&n,&m) == 1&&(n||m) )	// 2.	无法进入循环
//	while(scanf("%d%d",&n,&m) == ((n||m)&&1))	// 3.	无法进入循环
//	while(scanf("%d%d",&n,&m) == n||m&&1)		// 4.	2 0 或 0 2  都可进入循环
//	while(scanf("%d%d",&n,&m) == 1&&n||m)		// 5.	2 0 无法进入循环 0 2 可进入循环
	while(scanf("%d%d",&n,&m)&&0 || n || m)
	{
		s = 0;
		for(int i = n;i <= m; i++)
		{
			s += 1/((double)i*i);
		}
		printf("Case %d: %.5lf\n",++flag,s);
	}
	return 0;
}