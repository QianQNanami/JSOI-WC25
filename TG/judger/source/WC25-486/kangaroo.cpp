#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[50005],x;
signed main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	x=n/2;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n/2;i++){
		if(a[i]>a[n]/2) x=i-1;
	}
	cout<<x;
	return 0;
} 
