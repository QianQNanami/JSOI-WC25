#include <bits/stdc++.h>
using namespace std;
int a[505][505],dp[505][505],dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
vector<pair<int,int> >v;
signed main(){
	ios::sync_with_stdio(false);
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)cin>>a[i][j];
	bool f=1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			bool x;
			cin>>x;
			dp[i][j]=0x3f3f3f3f;
			if(x&&f)dp[i][j]=f=0;
			else if(x)v.push_back(make_pair(i,j));
		}
	for(int x=1;x<=n*m/2+1;x++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				for(int k=0;k<4;k++){
					int ni=dir[k][0]+i,nj=dir[k][1]+j;
					if(ni<1||ni>n||nj<1||nj>m||a[ni][nj]==2)continue;
					else dp[i][j]=min(dp[i][j],abs(a[i][j]-a[ni][nj]));
				}
	int ans=0;
	for(int i=0;i<v.size();i++)
		ans=max(ans,dp[v[i].first][v[i].second]);
	cout<<ans;
	return 0;
	
}
