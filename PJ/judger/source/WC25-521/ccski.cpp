#include<bits/stdc++.h>
using namespace std;
int n,m;
int sq[505][505],ans,sum[5005][5005],s2,hs;
int hx[2505],hy[2505];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
bool vis[505][505];
bool check(int x,int y)
{
	if(x < 1 || x > n || y < 1 || y > m)
		return false;
	return !vis[x][y];
}
void dfs(int x,int y,int c,int h)
{
	if(x == hx[h] && y == hy[h])
	{
		s2 = min(s2,c);
	}
	for(int i = 0;i < 4;i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(check(nx,ny))
		{
			dfs(nx,ny,min(c,abs(sq[x][y] - sq[nx][ny])),h);
			vis[nx][ny] = true;
		}
	}
}
signed main()
{
	freopen("in.txt","r",stdin);
	cin >> n >> m;
	int in;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			cin >> sq[i][j];
		}
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			cin >> in;
			if(in == 1)
			{
				hx[++hs] = i;
				hy[hs] = j;
			}
		}
	}
	for(int i = 1;i <= hs;i++)
	{
		for(int j = 1;j <= hs;j++)
		{
			if(j != i)
			{
				memset(vis,false,sizeof vis);
				vis[hx[i]][hy[i]] = true;
				s2 = INT_MAX;
				dfs(hx[i],hy[i],0,j);
				sum[i][j] = sum[j][i] = s2;
			}
		}
	}
	for(int k = 1;k <= hs;k++)
	{
		for(int i = 1;i <= hs;i++)
		{
			for(int j = 1;j <= hs;j++)
			{
				if(i != j && i != k && j != k)
				{
					sum[i][j] = min(sum[i][j],sum[i][k] + sum[k][j]);
				}
			}
		}
	}
	for(int i = 1;i <= hs;i++)
	{
		for(int j = 1;j <= hs;j++)
		{
			if(j != i)
			{
				ans = max(sum[i][j],ans);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
