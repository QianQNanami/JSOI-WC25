#include<bits/stdc++.h>
using namespace std;
int a[505][505],b[505][505],s=0,dp[505][505];
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	{
	cin>>b[i][j];
}
	dp[1][1]=min(abs(a[1][1]-a[2][1]),abs(a[1][1]-a[1][2]));
	for(int i=2;i<=m;i++)
	for(int j=1;j<=n;j++) 
	{
		dp[i][j]=max(dp[i][j-1],max(dp[i-1][j],min(abs(a[i][j]-a[i+1][j]),abs(a[i][j]-a[i][j+1]))));
		
	}
	cout<<dp[m][n];
	return 0;
}
