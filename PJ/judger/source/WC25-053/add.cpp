#include<bits/stdc++.h> 
using namespace std;
int a[100005];
int dp[100010];
vector<int> qwe;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	for(int i=1;i<=n+1;i++)
	{
		dp[i]=dp[i-1]+a[i-1];
	}
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		qwe.push_back(dp[r+1]-dp[l]);
	}
	for(int i=0;i<qwe.size();i++)
	{
		cout<<qwe[i]<<"\n";
	}
	return 0;
}
