#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[100005];
int dp[100005];
int m;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		dp[i] = dp[i-1] + a[i]; 
	}
	cin>>m;
//	for(int i = 1;i <= n;i++){
//		cout<<"test:: "<<dp[i]<<" ";
//	}
	while(m--){
		int l,r;cin>>l>>r;
		cout<<dp[r] - dp[l-1]<<endl;
	}
	return 0;
	/*
4
4 3 2 1
2 
1 3
2 4
	*/
} 
