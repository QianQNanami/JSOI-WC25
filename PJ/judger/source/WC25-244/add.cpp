#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[100001];
long long dp[100001];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1]=a[1];
	for(int i=2;i<=n;i++){
		dp[i]=a[i]+dp[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		cout<<dp[y]-dp[x-1]<<endl;
	}
	return 0;
}
