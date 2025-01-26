#include <bits/stdc++.h>
using namespace std;
int a[100001],b[100001];
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int x,y,tot=0;
		cin>>x>>y;
		cout<<b[y]-b[x]+a[x]<<'\n';
	}
	return 0;
}
