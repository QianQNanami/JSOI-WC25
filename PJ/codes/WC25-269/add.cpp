#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+2;
int n,m;
int a[N];
signed main(){
	cin>>n;
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=a[i]+a[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<'\n';
	}
	return 0;
}
/*
4
4 3 2 1
2 
1 3
2 4

9 
6
*/
