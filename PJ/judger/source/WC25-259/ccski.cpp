#include<bits/stdc++.h>
using namespace std;
int m,n;
int h[510][510];
bool biao[510][510];
int check[510][510];
int ti;
int ans=INT_MIN;
int dir[4][2]{{0,1},{0,-1},{1,0},{-1,0}};
struct goal
{
	int by,bx;
};
queue<goal> q1;
struct item
{
	int y,x,max;
};
queue<item> q2;
void read()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>h[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>biao[i][j];
			if(biao[i][j]==1)
			{
				q1.push({i,j}); 
			}
		}
	}
}
int bfs(int sy,int sx,int by,int bx)
{
	int minans=INT_MAX;
	q2.push({sy,sx,0});
	while(!q2.empty())
	{
		item curr=q2.front();
		q2.pop();
		for(int i=0;i<4;i++)
		{
			item next;
			next.y=curr.y+dir[i][0];
			next.x=curr.x+dir[i][1];
			if(check[next.y][next.x]==0||h[next.y][next.x]-h[curr.y][curr.x]<check[next.y][next.x])
			{
				check[next.y][next.x]=h[next.y][next.x]-h[curr.y][curr.x];
				if(check[next.y][next.x]>next.max)
				{
					next.max=check[next.y][next.x];
				}else
				{
					next.max=curr.max;
				}
			}
			if(next.y==by&&next.x==bx)
			{
				if(next.max<minans)
				{
					minans=next.max;
				}
			}
		}
	}if(minans!=INT_MAX)
		return minans;
	else
		return INT_MIN;
}
int main()
{
	read();
	while(!q1.empty())
	{
		goal tmp1=q1.front();
		q1.pop();
		if(q1.empty())
		{
			break;
		}
		goal tmp2=q1.front();
		fill(check[0],check[510],0);
		int tans=bfs(tmp1.by,tmp1.bx,tmp2.by,tmp2.bx);
		if(tans>ans)
		{
			ans=tans;
		}
	}
	cout<<ans<<endl;
	return 0;
}

