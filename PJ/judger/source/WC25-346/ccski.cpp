#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	int y;
	node(int _x,int _y):
		x(_x),y(_y){}
};
int minans=INT_MAX;
int n,m;
int ch[510][510];
int ma[510][510];
bool vis[510][510];
int x,y;
int fx[5]={0,-1,1,0,0};
int fy[5]={0,0,0,-1,1};
void bfs()
{
	queue<node> q;
	q.push(node(x,y));
	vis[x][y]=true;
	while(!q.empty())
	{
		node u=q.front();
		for(int i=1;i<=4;i++)
		{
			int nx=u.x+fx[i];
			int ny=u.y+fy[i];
			int nd=abs(ch[u.x][u.y]-ch[nx][ny]);
			if(ma[nx][ny]==1&&ch[nx][ny]<=ch[u.x][u.y])
			{
				minans=min(minans,nd);
				return;
			}
			else if(nx>0&&nx<=m&&ny>0&&ny<=n&&ch[nx][ny]<=ch[u.x][u.y]&&vis[nx][ny]==false)
			{
				vis[nx][ny]=true;
				q.push(node(nx,ny));
			}
		}
		q.pop();
	}
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>ch[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>ma[i][j];
			vis[i][j]=false;
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(ma[i][j]==1)
			{
				x=i;
				y=j;
				bfs();
			}
		}
	}
	cout<<minans<<endl;
}
