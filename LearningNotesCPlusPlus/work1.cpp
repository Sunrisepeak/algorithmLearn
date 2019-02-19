#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int** map = 0;
	int n;
	cin >> n;
	map = new int*[n+1];
	for(int i = 1; i <= n; i++)
	{
		map[i] = new int[n+1];
		memset(map[i], 0, (n+1)*sizeof(int));
	}
	int count = 0, number = 1;
	int row = 1, col = 0;
	while(count != n*n)
	{
		while(col + 1 <= n && !map[row][col + 1]){ map[row][++col] = number; count++;}
		while(row + 1 <= n && !map[row + 1][col]){ map[++row][col] = number; count++;}
		while(col - 1 >= 1 && !map[row][col - 1]){ map[row][--col] = number; count++;}
		while(row - 1 >= 1 && !map[row - 1][col]){ map[--row][col] = number; count++;}
//		cout << "count: "<< count
//			<< "map[][]:" << map[row][col];	putchar('\n');
		number++;
	}
	for(int i = 1; i <= n; i++)
	{
		cout << map[i][1];
		for(int j = 2; j <= n; j++)
			cout << " " << map[i][j];
		putchar('\n');
	}
	for(int i = 1; i <= n; i++)
		delete[]map[i];
	return 0;
}