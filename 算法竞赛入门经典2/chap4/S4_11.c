#include<stdio.h>
#include<string.h>
#define maxn 100
int left, chance;
char s1[maxn], s2[maxn];
int win, lose;
int guess(char ch)
{
	int bad = 1;
	for(int i = 0; i < strlen(s1); i++)
		if(ch == s1[i])
		{
			left--;
			bad = 0;
		}
	if(bad)
		chance--;
	if(!left)
		win = 1;
	if(!chance)
		lose = 1;
	return win | lose;
}
int main()
{
	int rnd;
	while(scanf("%d%s%s",&rnd, s1, s2) == 3 && rnd != -1)
	{
		printf("Round %d\n", rnd);
		win = lose = 0;	//³õÊ¼»¯
		left = strlen(s1);
		chance = 7;
		for(int i = 0; i < strlen(s2); i++)
		{
		//	guess(s2[i]);		//²Â²â×ÖÄ¸
		//	if(win || lose)		//¼ì²é×´Ì¬
			if(guess(s2[i]))		//²Â²â+¼ì²â×´Ì¬
				break;
		}
		//output£º
		if(win)
			printf("You win.\n");
		else if(lose)
			printf("You lose.\n");
		else
			printf("You chickened out.\n");
	}
	return 0;
}