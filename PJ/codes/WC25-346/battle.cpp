#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	int y;
	int t;
	node (int _x,int _y,int _t):
		x(_x),y(_y),t(_t){}
};
char ch[310][310];
int m,n;
int x,y,dx,dy;
int fx[5]={0,-1,1,0,0};
int fy[5]={0,0,0,-1,1};
bool vis[310][310];
void bfs()
{
	queue<node> q;
	q.push(node(x,y,0));
	vis[x][y]=true;
	while(!q.empty())
	{
		node u=q.front();
		for(int i=1;i<=4;i++)
		{
			int nx=u.x+fx[i];
			int ny=u.y+fy[i];
			if(nx==dx&&ny==dy)
			{
				cout<<u.t+1;
				return;
			}
			else
			{
				if(nx>0&&nx<=m&&ny>0&&ny<=n&&vis[nx][ny]==false)
				{
					if(ch[nx][ny]=='E')
					{
						q.push(node(nx,ny,u.t+1));
						vis[nx][ny]=true;
					}
					else if(ch[nx][ny]=='B')
					{
						q.push(node(nx,ny,u.t+2));
						vis[nx][ny]=true;
					}
				}
				
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
			vis[i][j]=false;
			if(ch[i][j]=='Y')
			{
				x=i;
				y=j;
			}
			else if(ch[i][j]=='T')
			{
				dx=i;
				dy=j;
			}
		}
	}
	bfs();
	return 0;
}

