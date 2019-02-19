#include<stdio.h>
int main()
{
	int b[1001] = {0}, x1, x2, count = 0;
	while(scanf("%d",&x1) != EOF)
	{
		printf("this is debug!\n", count);
		if(scanf("%d",&x2) == EOF)
			break;
		b[x1]++;
	}
	for(int i = 0; i < 1000; i++)
		for(int j = 0; j < b[i]; j++)
			printf("%d\n", i);
	return 0;
}