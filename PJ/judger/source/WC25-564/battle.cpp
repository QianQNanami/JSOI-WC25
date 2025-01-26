#include <bits/stdc++.h>
using namespace std;
int _map[305][305];
bool check[305][305];
int dp[305][305],m,n,x_,y_,x2,y2,x3,y3;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int dfs(int x,int y)
{
	if(x==x2 && y==y2) return dp[x][y];
	else
	{
		check[x][y] = 1;
		for(int i = 0;i < 4;i++)
		{
			if(!i && !check[x][y] && _map[x][y]!=0 && x+dx[i]>=1 && x+dx[i]<=m && y+dy[i]>=1 && y+dy[i]<=n)
			{
				dp[x][y] = dfs(x+dx[i],y+dy[i])+_map[x][y];
				x3 = x+dx[i],y3 = y+dy[i];
			}
			else if(!check[x][y] && _map[x][y]!=0 && x+dx[i]>=1 && x+dx[i]<=m && y+dy[i]>=1 && y+dy[i]<=n)
			{
				if(dfs(x+dx[i],y+dy[i])+_map[x][y] < dp[x][y])
				{
					dp[x][y] = dfs(x+dx[i],y+dy[i])+_map[x][y];
					x3 = x+dx[i];
					y3 = y+dy[i];
				}
			}
		}
	}
}
int main()
{
	cin >> m >> n;
	for(int i = 1;i <= m;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			char ch;
			cin >> ch;
			if(ch == 'Y')
			{
				x_ = i;
				y_ = j;
				_map[i][j] = 3;
			}
			else if(ch == 'T')
			{
				x2 = i;
				y2 = j;
				_map[i][j] = 1;
			}
			else if(ch == 'B') _map[i][j] = 2;
			else if(ch == 'E') _map[i][j] = 1;
		}
	}
	cout << -1;
	return 0;
}
