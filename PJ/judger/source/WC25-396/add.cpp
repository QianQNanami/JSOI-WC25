#include<bits/stdc++.h>
using namespace std;
int n,m,l,r;
long long a[100010],sum[100010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<sum[r]-sum[l-1];
	}
	return 0;
}
