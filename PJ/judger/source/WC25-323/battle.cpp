#include<bits/stdc++.h>
using namespace std;

int m,n;
int f[305][305]={0};
int xy,yy,xt,yt;
int dp[305][305]={0};
string rt;
int c;

int dfs(int x,int y,int t)
{
	int mi=114514;
	if(x==xt&&y==yt)return t;
	dp[x][y]=1;
	if(f[x+1][y]&&!dp[x+1][y])mi=min(mi,dfs(x+1,y,t+=f[x+1][y]));
	if(f[x-1][y]&&!dp[x-1][y])mi=min(mi,dfs(x-1,y,t+=f[x-1][y]));
	if(f[x][y+1]&&!dp[x][y+1])mi=min(mi,dfs(x,y+1,t+=f[x][y+1]));
	if(f[x][y-1]&&!dp[x][y-1])mi=min(mi,dfs(x,y-1,t+=f[x][y-1]));
	dp[x][y]==0;
	return mi;
}

int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		cin>>rt;
		for(int j=0;j<rt.size();j++)
		{
			if(rt[j]=='E')f[i][j+1]=1;//空地 
			if(rt[j]=='B')f[i][j+1]=2;//砖墙 
			if(rt[j]=='R'||rt[j]=='S')f[i][j+1]=0;//二级障碍 
			if(rt[j]=='Y'){f[i][j+1]=1;xy=i;yy=j+1;}//坦克 
			if(rt[j]=='T'){f[i][j+1]=1;xt=i;yt=j+1;}//目的地 
		}
	}
	c=dfs(xy,yy,0);
	if(c!=114514)cout<<c;
	else cout<<-1;
	return 0;
}
