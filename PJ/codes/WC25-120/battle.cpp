#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,sx=0,sy=0,ex=0,ey=0;
ll MIN=INT_MAX;
ll fx[10][10]={{-1,0},{0,1},{1,0},{0,-1}};
char a[1000][1000];
bool vis[1000][1000];
ll DFS(ll sx,ll sy,ll ex,ll ey,ll step)
{
	if(sx==ex&&sy==ey)
	return step;
	
	for(ll i=0;i<4;i++)
	{
		ll tx=sx+fx[i][0],ty=sy+fx[i][1];
		if(tx>=0&&tx<=n&&ty>=0&&ty<=m&&a[tx][ty]!='R'&&a[tx][ty]!='S'&&vis[tx][ty]==false)
		{
			vis[tx][ty]=true;
			ll k;
			if(a[tx][ty]=='B')
			k=DFS(tx,ty,ex,ey,step+2);
			else
			k=DFS(tx,ty,ex,ey,step+1);
			vis[tx][ty]=false;
			if(k!=-1)
			MIN=min(MIN,k);
		}
	}
	return -1;
}
int main()
{
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++)
	for(ll j=1;j<=m;j++)
	cin>>a[i][j];
	for(ll i=1;i<=n;i++)
	for(ll j=1;j<=m;j++)
	{
		if(a[i][j]=='Y')
		sx=i,sy=j;
		if(a[i][j]=='T')
		ex=i,ey=j;
	}
	DFS(sx,sy,ex,ey,0);
	if(MIN==INT_MAX)
	cout<<-1;
	else
	cout<<MIN;
	return 0;
}
