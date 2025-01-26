#include <bits/stdc++.h>
using namespace std;
int dp[305][305],a[305][305],dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
signed main(){
	ios::sync_with_stdio(false);
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m,zdi,zdj;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			char x;
			cin>>x;
			dp[i][j]=0x3f3f3f3f;
			if(x=='Y')dp[i][j]=0,a[i][j]=0;
			else if(x=='E')a[i][j]=0;
			else if(x=='T')a[i][j]=0,zdi=i,zdj=j;
			else if(x=='B')a[i][j]=1;
			else a[i][j]=2;
		}
	for(int x=1;x<=n*m/2+1;x++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				for(int k=0;k<4;k++){
					int ni=i+dir[k][0],nj=j+dir[k][1];
					if(ni<1||ni>n||nj<1||nj>m||a[ni][nj]==2)continue;
					else dp[i][j]=min(dp[i][j],dp[ni][nj]+a[ni][nj]+1);
				}
	if(dp[zdi][zdj]!=0x3f3f3f3f)cout<<dp[zdi][zdj];
	else cout<<-1;
	return 0;
}
