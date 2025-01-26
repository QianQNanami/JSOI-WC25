#include <bits/stdc++.h>
using namespace std;
struct node{
	int x,y,s;
	node(int _x,int _y,int _s){
		x=_x,y=_y,s=_s;
	}
	
};
queue<node> q;
int m,n,ans=2147483647;
int a[505][505],b[505][505];
int vs[305][305];
int d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
void huaxuerangnifeiqilai___bfs(int p,int pp)
{
	q.push(node(p,pp,0));
	vs[p][pp]=1;
	while(!q.empty())
	{
		for(int i=0;i<4;i++)
		{
			int dx=q.front().x+d[i][0];
			int dy=q.front().y+d[i][1];
			int dis=abs(a[dx][dy]-a[q.front().x][q.front().y]);
			if(dx>0 && dy>0 && dx<=m &&dy<=n && !vs[dx][dy])
			{
				vs[dx][dy]=1;
				q.push(node(dx,dy,max(dis,q.back().s)));
				if(b[dx][dy]==1)
				{
					ans=min(ans,q.back().s);
					return;
				}
			}
		}
		q.pop();
	}
	
	return;
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int l=1;l<=m;l++)
	{
		for(int k=1;k<=n;k++)
		{
			if(b[l][k]==1){
				huaxuerangnifeiqilai___bfs(l,k);
			}
			
		}
	}
	if(ans>=0) cout<<ans;
	else{
		cout<<-1;
	}
	return 0;
}

