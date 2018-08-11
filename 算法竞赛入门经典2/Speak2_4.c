#include<stdio.h>
int main()
{
/*	// 题目条件给了n<=10^9, 这个程序会导致溢出（（int） max = 21亿左右）  
	int n , flag=0;
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==0)
			n = n / 2;
		else
			n = 3 * n + 1;
		flag++;
	}
	printf("%d\n",flag);
	return 0;		
//	input:987654321
//	output:	

				fme			*/
	
	int n2 , count = 0;
	scanf("%d",&n2);
	long long n = n2;		//后加的
	while(n>1)
	{
		if(n%2==1) n = n*3 + 1;
		else n /= 2;
		count++;				//n=-1332004332    乘法溢出
	}
	printf("%d\n",count);
	return 0;
//	input:987654321
//	output:	1

//later：long long
//	input:987654321
//	output:	180
}