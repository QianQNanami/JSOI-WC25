#include<bits/stdc++.h>
using namespace std;
int dp[401][401][401][2];
int mp[450][450];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>mp[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=min(n-j+1,n-i+1);k++){
				dp[i][j][k][0]=dp[i][j][k-1][0]+mp[i+k-1][j+k-1];
			}
		}
	}
	for(int j=1;j<=n;j++){
		for(int i=1;i<=n;i++){
			for(int k=1;k<=min(n-j+1,n-i+1);k++){
				dp[i][j][k][0]=dp[i][j][k-1][0]+mp[i+k-1][j+k-1];
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			for(int k=1;k<=min(j,n-i+1);k++){
				dp[i][j][k][1]=dp[i][j][k-1][1]+mp[i+k-1][j-k+1];
			}
		}
	}
	for(int j=n;j>=1;j--){
		for(int i=1;i<=n;i++){
			for(int k=1;k<=min(j,n-i+1);k++){
				dp[i][j][k][1]=dp[i][j][k-1][1]+mp[i+k-1][j-k+1];
			}
		}
	}
	int ans=INT_MIN;
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
			for(int k=2;k<=min(n-j+1,n-i+1);k++){
				ans=max(ans,dp[i][j][k][0]-dp[i][j+k-1][k][1]);
			}
		}
	}
	cout<<ans;
	return 0;
}

