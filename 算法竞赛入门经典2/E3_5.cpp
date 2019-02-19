#include<iostream>
#include<cctype>
#include<string>
using namespace std;
string map[5];
int count = 0;
void findBlankAndPrint(int &row, int &col, char c)
{
	if(c == 'p')
		printf("Puzzle #%d:\n",++count);
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
		{
			if(c == 'f')
			{
				if(isspace(map[i][j]))
				{
					row = i;
					col = j;
					break;
				}
			}
			else
			{
				if(j < 4)
					printf("%c ",map[i][j]);
				else
					printf("%c\n",map[i][j]);
			}
		}
}
bool move(int &row, int &col, char c)
{
	switch(c)
	{
		case 'A': 
				if(row - 1 < 0)
					return false;
				else
				{
					map[row][col] = map[--row][col];
					map[row][col] = ' ';
					break;
				}
				
		case 'B': 
				if(row + 1 >= 5)
					return false;
				else
				{
					map[row][col] = map[++row][col];
					map[row][col] = ' ';
					break;
				}
		case 'L': 
				if(col - 1 < 0)
					return false;
				else
				{
					map[row][col] = map[row][--col];
					map[row][col] = ' ';
					break;
				}
				
		case 'R': 
				if(col + 1 >= 5)
					return false;
				else
				{
					map[row][col] = map[row][++col];
					map[row][col] = ' ';
					break;
				}
	}
	return true;
}
int main()
{
	int blankrow = 0;
	freopen("data.in","r",stdin);
	while(1)
	{
		for(int i = 0; i < 5; i++)
		{
			getline(cin, map[i]);
			if(map[0][0] == 'Z')
				return 0;
			if(blankrow){
				putchar('\n');
				blankrow = 0;
			}
//			putchar(map[0][0]);
		}
		int row = 0, col = 0;
		findBlankAndPrint(row, col, 'f');
//		printf("blank:-------%d---%d\n\n",row,col);
		char a;
		int flag = 1;
		while((a = getchar()) != '0'){
			if(!move(row, col, a))
			{
				printf("Puzzle #%d:\n",++count);
				printf("This puzzle has no final configuration.\n");
				flag = 0;
				break;
			}
		}
	//	gets(s);
/*		for(int i = 0; s[i] != '\0'; i++)
		{
			if(s[i] == '0')
				break;
			if(!move(row, col, s[i]))
			{
				printf("Puzzle #%d:\n",++count);
				printf("This puzzle has no final configuration.\n");
				flag = 0;
				break;
			}
		}*/
		if(flag)
			findBlankAndPrint(row, col, 'p');
		getchar();
		blankrow = 1;
		
	}
	return 0;
}
