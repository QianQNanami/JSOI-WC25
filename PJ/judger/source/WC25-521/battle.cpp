#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	int y;
	int zcnt;
};
int m,n,ans = -1;
int t[305][305],sx,sy,ex,ey;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
bool vis[305][305];
queue<node>q;
bool check(int x,int y)
{
	if(x < 1 || x > m || y < 1 || y > n)
	{
		return false;
	}
	if(vis[x][y]) return false;
	return t[x][y];
}
void bfs()
{
	q.push((node){sx,sy,0});
	while(!q.empty())
	{
		node now = q.front();
		q.pop();
		for(int i = 0;i < 4;i++)
		{
			int nx = dx[i] + now.x;
			int ny = dy[i] + now.y;
			if(check(nx,ny))
			{
				if(nx == ex && ny == ey)
				{
					if(ans == -1 || ans > now.zcnt + 1) ans = now.zcnt + 1;
					break;
				}
				q.push((node){nx,ny,now.zcnt + t[nx][ny]});
				vis[nx][ny] = true;
			}
		}
	}
}
signed main() 
{
	cin >> m >> n;
	char c;
	memset(t,0,sizeof t);
	for(int i = 1;i <= m;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			cin >> c;
			if(c == 'Y') sx = i,sy = j,t[i][j] = 1;
			else if(c == 'T') ex = i,ey = j,t[i][j] = 1;
			if(c == 'B') t[i][j] = 2;
			if(c == 'E') t[i][j] = 1;
//			cout << t[i][j] << ' ';
		}
	}
	bfs();
	cout << ans << endl;
	return 0;
}

