#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){//zhekenengshiduide
	int n,m;
	cin>>n;
	int a[n+10],b[n+10];
	b[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i]+b[i-1];
	}
	cin>>m;
	int c[m+10][5],d[m+10];
	for(int i=1;i<=m;i++){
		cin>>c[i][1]>>c[i][2];
		d[i]=b[c[i][2]]-b[c[i][1]-1];
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<"\n";
	}
}
