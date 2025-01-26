#include <bits/stdc++.h>
using namespace std;

int a[100000],sum[100000];
int n,m;

int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	cin>>m;
	while(m--) {
		int l,r;
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl;
	}
	return 0;
}
