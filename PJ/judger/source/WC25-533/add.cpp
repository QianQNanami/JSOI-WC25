#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int s[100005],a[100005];
signed main() {
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) s[i]=s[i-1]+a[i];
	cin>>m;
	for(int i=1; i<=m; i++) {
		int l,r;
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
}

