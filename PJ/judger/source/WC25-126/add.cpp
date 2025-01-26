#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100005];
signed main(){
	ios::sync_with_stdio(false);
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[i]=a[i-1]+x;
	}
	int m;
	cin>>m;
	while(m--){
		int x,y;
		cin>>x>>y;
		cout<<a[y]-a[x-1]<<endl;
	}
	return 0;
} 
