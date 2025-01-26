#include<bits/stdc++.h>
using namespace std;
int m,n;
char mp[310][310];
int mps[310][310];
int mint=INT_MAX;
struct item
{
	int y,x;
};
queue<item> q;
int dir[4][2]{{1,0},{0,1},{-1,0},{0,-1}};
void read()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>mp[i][j];
			if(mp[i][j]=='Y')
			{
				q.push({i,j});
			}
		}
	}
}
void bfs()
{
	while(!q.empty())//缺一个判断是否最少的数组，开一个数组存放最小步数； 
	{
		item curr=q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int ny=curr.y+dir[i][0],nx=curr.x+dir[i][1];
			if(mp[ny][nx]=='T')
			{
				if(mps[curr.y][curr.x]+1<mint)
				{
					mint=mps[curr.y][curr.x]+1;
				}
				continue;
			}else
			if(mp[ny][nx]=='R'||mp[ny][nx]=='S')
			{
				continue;
			}else
			if(mp[ny][nx]=='E')
			{
				if(mps[curr.y][curr.x]+1<mps[ny][nx]||mps[ny][nx]==0)
				{
					mps[ny][nx]=mps[curr.y][curr.x]+1;
					q.push({ny,nx});
				}
				//mp[ny][nx]='R';
				continue;
			}else
			if(mp[ny][nx]=='B')
			{
				if(mps[curr.y][curr.x]+2<mps[ny][nx]||mps[ny][nx]==0)
				{
					mps[ny][nx]=mps[curr.y][curr.x]+2;
					q.push({ny,nx});
				}
				//mp[ny][nx]='R';
				continue;
			}
		}
	}
}
void outit()
{
	if(mint!=INT_MAX)
	{
		cout<<mint<<endl;
	}else
	cout<<-1<<endl;
}
int main()
{
	read();
	bfs();
	outit();

	return 0;
}

