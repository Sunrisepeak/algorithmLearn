#include<stdio.h>
#include<math.h>
int main()
{
/*	int n=20000000000000;
	char bin[33];
	while(1)
	{
		itoa(n++,bin,2);
		printf("%s\t",bin);  
	}*/
	int i=sizeof(int);
	printf("max:%lld\n",(long long)pow(2.,i*8)-1);		//float pow(float x,float y)-math.h  max:4294967295
	printf("max:%lld\n",(long long)(pow(2.,i*8-1)-1));		//max:2147483647
	printf("mix:%lld\n",-(long long)((pow(2.,i*8-1)-1)));		//mix:-2147483647
	printf("max:%d\n",(int)(pow(2.,i*8-1)-1));			//max:2147483647
	printf("mix:%d\n",-(int)(pow(2.,i*8-1)-1));			//mix:-2147483647
	printf("max:%ld\n",(long)(pow(2.,i*8-1)-1));
	return 0;
	/*注意有符号（int）——（max:2147483647  mix:-2147483647）和没符号之分（unsigned  max:4294967295）*/
}