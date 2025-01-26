#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[100005];
signed main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[i]=a[i-1]+x;
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl;
	}
	return 0;
}
