#include<bits/stdc++.h>
using namespace std;
int n;
int h[500500];
int cnt;
int dp[500500][2];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	} 
	sort(h+1,h+n+1);
	dp[1][0]=0;
	dp[1][1]=0;
	for(int i=2;i<=n;i++){
		int maxn=-1;
		for(int j=i-1;j>=1;j--){
			maxn=max(maxn,max(dp[j][1],dp[j][0]));
			if(h[i]>=h[j]*2)
				dp[i][1]=max(dp[i][1],dp[j][0]+1);
		}
		dp[i][0]+=maxn;
		dp[i][1]+=maxn;
	}
	for(int i=1;i<=n;i++){
			cout<<dp[i][0]<<" "<<dp[i][1]<<"\n";
	}
	cout<<max(dp[n][1],dp[n][0]);
	return 0;
}
