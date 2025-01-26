#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	int a[n+2];
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	cin>>m;
	int x,y;
	int f[m+2];
	for(int i=1; i<=m; i++) {
		long long ans=0;
		cin>>x>>y;
		for(int j=x; j<=y; j++)
			ans+=a[j];
		f[i]=ans;
	}
	for(int i=1; i<m; i++)
		cout<<f[i]<<endl;
	cout<<f[m];
	return 0;
}
