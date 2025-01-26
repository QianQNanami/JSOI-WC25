#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main()
{
	int m,n;
	cin>>m>>n;
	char a[305][305];
	int vi[305][305]={};
	int x,y;
	queue<int>b,c;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='Y')
			{
				x=i;
				y=j;
			}
		}
	}
	b.push(x);
	c.push(y);
	vi[x][y]=1;
	while(b.size())
	{
		int zx=b.front();
		int zy=c.front();
		b.pop();
		c.pop();
		for(int i=0;i<4;i++)
		{
			int qx=zx+dx[i];
			int qy=zy+dy[i];
			if(vi[qx][qy]==0&&qx>=1&&qy>=1&&qx<=m&&qy<=n&&a[qx][qy]!='S'&&a[qx][qy]!='R')
			{
				b.push(qx);
				c.push(qy);
				if(a[qx][qy]=='B') vi[qx][qy]=vi[zx][zy]+2;
				else vi[qx][qy]=vi[zx][zy]+1;
				if(a[qx][qy]=='T')
				{
					cout<<vi[qx][qy]-1;
					return 0;
				}
			}
		}
	}
	cout<<-1;
	return 0;
}
