#include <bits/stdc++.h>
using namespace std;
int n,m,t;
int x,y;
char c[310][310];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool used[310][310];
void dfs(int x1,int y1,int t)
{
	if(c[x1][y1]=='T')
	{
		cout<<t;
		return;
	}
	else
	{
		for(int i=0;i<4;i++)
		{
			if(c[x1+dx[i]][y1+dy[i]]=='B' && used[x1+dx[i]][y1+dy[i]]==0)
			{
				t+=2;
				used[x1+dx[i]][y1+dy[i]]=1;
				dfs(x1+dx[i],y1+dy[i],t);
			}
			else if(c[x1+dx[i]][y1+dy[i]]=='E' && used[x1+dx[i]][y1+dy[i]]==0)
			{
				t++;
				used[x1+dx[i]][y1+dy[i]]=1;
				dfs(x1+dx[i],y1+dy[i],t);
			}
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>c[i][j];
			if(c[i][j]=='Y')
			{
				x=i;
				y=j;
			}
			if(c[i][j]=='R' || c[i][j]=='S')
			{
				used[i][j]=1;
			}
		}
	}
	dfs(x,y,0);
	cout<<-1;
}
/*
3 4
YBEB
EERE
SSTE
*/
