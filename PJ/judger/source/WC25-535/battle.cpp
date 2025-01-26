#include<bits/stdc++.h>
using namespace std;
char dp[301][301];
int a[301][301],beginx,beginy,endx,endy,f[301][301];
int put(char o,int i,int j)
{
	if(o=='R' || o=='S') return 9999;
	else if(o=='B') return 2;
	else if(o=='Y')
	{
		beginx=i;
		beginy=j;
		return 1;
	}
	else if(o=='T')
	{
		endx=i;
		endy=j;
		return 1;
	}
	else return 1;
}
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>dp[i][j];
			a[i][j]=put(dp[i][j],i,j);
			f[i][0]=9999;
			f[0][j]=9999;
		}
	}
	f[0][0]=9999;
	f[beginx][beginy]=a[beginx][beginy];
	f[endx][endy]=a[endx][endy];
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			f[i][j]=min(f[i-1][j],min(f[i][j-1],min(a[i+1][j],a[i][j+1])))+a[i][j];
		}
	}
	cout<<f[endx][endy];
	return 0;
}
