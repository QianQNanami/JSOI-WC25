#include<bits/stdc++.h>
using namespace std;
int m,n,sx,sy,ex,ey;//crossable--E B
char mp[305][305];
bool vis[305][305];
struct node{
	int x,y,step;
	node(int xx,int yy,int ss)
	{
		x=xx;
		y=yy;
		step=ss;
	}
};
queue<node>q;
int dx[]={0,1,0,-1,0};
int dy[]={0,0,1,0,-1};
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>mp[i][j];
			if(mp[i][j]=='Y')
			{
				sx=i;
				sy=j;
			}
			else if(mp[i][j]=='T')
			{
				ex=i;
				ey=j;
			}
		}
	}
//	cout<<sx<<' '<<sy<<" / "<<ex<<' '<<ey<<endl;
	q.push(node(sx,sy,0));
	while(!q.empty())
	{
		node now=q.front();
		q.pop();
		for(int i=1;i<=4;i++)
		{
			int tx=now.x+dx[i];
			int ty=now.y+dy[i];
			if(tx==ex && ty==ey)
			{
				cout<<(now.step+1);
				return 0;
			}
			else
			{
				if((mp[tx][ty]=='E' || mp[tx][ty]=='B') && tx>=1 && tx<=m && ty>=1 && ty<=n && vis[tx][ty]==0)
				{
					vis[tx][ty]=1;
					if(mp[tx][ty]=='E')
					{
						q.push(node(tx,ty,now.step+1));
					}
					else if(mp[tx][ty]=='B')
					{
						q.push(node(tx,ty,now.step+2));
					}
				}
			}
		}
	}
	cout<<-1;
	return 0;
}

