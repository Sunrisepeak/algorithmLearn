#include<stdio.h>
#define maxn 1000+10		//issue1: 函数内部申请数组太大
int main()
{
	char s[maxn];
	scanf("%s", s);
	int tot = 0;
//	for(int i = 0; i < strlen(s); i++)	//issue3:效率
	for(int i = 0; s[i] != '\0'; i++)
		if(s[i] == '1')					//issue2: 1是字符
			tot++;
	printf("%d\n", tot);
}