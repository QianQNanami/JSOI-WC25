#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,m,a[N],sum[N];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i],sum[i]=sum[i-1]+a[i];
	cin>>m;
	while(m--){
		int x,y;
		cin>>x>>y;
		cout<<sum[y]-sum[x-1]<<'\n';
	}
	return 0;
}
