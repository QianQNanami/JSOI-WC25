#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[100000];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=a[i]+a[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int r,l;
		cin>>r>>l;
		cout<<a[l]-a[r-1];
	}
	return 0;
}
