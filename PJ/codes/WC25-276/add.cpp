#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+5;
int n,m,a[N],x,y,b[N];
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	b[1]=a[1];
	for(int i=2;i<=n;i++) b[i]=b[i-1]+a[i];
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		cout<<b[y]-b[x-1];
	}
	return 0;
}
