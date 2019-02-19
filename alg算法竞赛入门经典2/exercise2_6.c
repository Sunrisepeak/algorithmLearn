#include<stdio.h>
int main()
{
	int i;
//	int a[10] = {0};
	for(i = 123; i < 333; i++)
	{
		int a[10] = {0};
		a[i/100] = 1; a[i%100/10] = 1; a[i%10] = 1;
		a[2*i/100] = 1; a[2*i%100/10] = 1; a[2*i%10] = 1;
		a[3*i/100] = 1; a[3*i%100/10] = 1; a[3*i%10] = 1;
		int s = 0;
		for(int j = 1; j < 10;j++)
			s+=a[j];
		if(s==9)
			printf("%d %d %d\n",i,2*i,3*i);
	//	a[1]=a[2]=a[3]=a[4]=a[5]=a[6]=a[7]=a[8]=a[9]=0;
	}
	return 0;
}