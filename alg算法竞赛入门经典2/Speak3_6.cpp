#include<iostream>
//#include<string.h>
//char s[] = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		int i;
		for(i = 0; i < strlen(s); i++)			//其实可以不用从0开始，不会输入第一个字符（最左边的一排）
		{
				if(c == s[i])		//C是s[i]的acsii码
				{
					printf("%c",s[i-1]);
					break;
				}
		}
		if(i == strlen(s))		//判断是否为空格或其他
			putchar(c);			//不用printf，避免最后一个无法输出换行
	}
	return 0;
}
//answer
/*
{
	int i, c;
	while((c = getchar()) != EOF)
	{
	//	i = 1;
	//	while(s[i] && s[i] != c) i++;
		for(i = 1; s[i] && s[i] != c; i++);		//找错位后的字符常量表中的位置
		if(s[i]) putchar(s[i-1]);				//如果找到则输入它的前一个字符
		else putchar(c);
	}
}
*/