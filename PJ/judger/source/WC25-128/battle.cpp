#include<bits/stdc++.h>
#define int long long
using namespace std;
long long m,n,sy,sx,ex,ey;bool vis[305][305];
int a[305][305],ans[305][305];
void dfs(long long i,long long j)
{
	if(i==ey&&j==ex)return;
	if(vis[i+1][j]==0&&a[i+1][j])
	{
		vis[i+1][j]=1,ans[i+1][j]=min(ans[i+1][j],a[i+1][j]+ans[i][j]);
		dfs(i+1,j);
		vis[i+1][j]=0;
	}
	if(vis[i-1][j]==0&&a[i-1][j])
	{
		vis[i-1][j]=1,ans[i-1][j]=min(ans[i-1][j],a[i-1][j]+ans[i][j]);
		dfs(i-1,j);
		vis[i-1][j]=0;
	}
	if(vis[i][j+1]==0&&a[i][j+1])
	{
		vis[i][j+1]=1,ans[i][j+1]=min(ans[i][j+1],a[i][j+1]+ans[i][j]);
		dfs(i,j+1);
		vis[i][j+1]=0;
	}
	if(vis[i][j-1]==0&&a[i][j-1])
	{
		vis[i][j-1]=1,ans[i][j-1]=min(ans[i][j-1],a[i][j-1]+ans[i][j]);
		dfs(i,j-1);
		vis[i][j-1]=0;
	}
}
signed main()
{
	ios::sync_with_stdio(false);
	cin>>m>>n;
	
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			ans[i][j]=LONG_LONG_MAX;
	int x,y;
	for(int i=1;i<=m;i++)
	{	
		string s;
		cin>>s;
		for(int j=0;j<n;j++)
			if(s[j]=='S'||s[j]=='R')
				vis[i][j]=1;
			else if(s[j]=='E')a[i][j]=1;
			else if(s[j]=='B')a[i][j]=2;
			else if(s[j]=='Y')x=j,y=i,a[i][j]=0;
			else ey=i,ex=j,a[i][j]=1;
	}
	dfs(y,x);
	if(ans[ey][ex]==LONG_LONG_MAX)
		cout<<-1;
	else
		cout<<ans[ey][ex];
	return 0;
}
/*
3 4
YSEB
EERE
SSTE

*/
