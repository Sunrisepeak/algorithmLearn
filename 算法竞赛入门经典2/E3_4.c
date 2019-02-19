#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		char s[81];
		scanf("%s", s);
		int mix = 1;
		int len = strlen(s);
		for(int i = 1; s[i] != '\0'; i++)
		{
			if(s[i] != s[i%mix])
			{
				while(len % (++mix));	//注意点：周期串的周期必定是串长的整数倍
				i = mix - 1;
			}
		}
		if(n)
			printf("%d\n\n", mix);
		else
			printf("%d\n",mix);
	}
	return 0;
}