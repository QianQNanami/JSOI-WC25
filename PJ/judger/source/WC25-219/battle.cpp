#include<bits/stdc++.h>
using namespace std;
int m,n,dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},t,xx,yy;
char a[350][350];
bool vis[350][350];
int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j]=='R'||a[i][j]=='S')
				vis[i][j]=1;
	int x=1,y=1;
	vis[1][1]=true;
	for(int i=0;i<4;i++)
	{
		xx=x+dx[i],yy=y+dy[i];
		if(xx>1&&xx<=n&&yy>1&&yy<=n&&!vis[xx][yy])
		{
			vis[xx][yy]=true;
			if(a[xx][yy]=='B')
				t+=2;
			if(a[xx][yy]=='E')
				t++;
			x=xx;
			y=yy;
		}
	}
	if(a[xx][yy]=='T')
	{
		cout<<t;
		return 0;
	}
	cout<<"-1";
	return 0;
}
