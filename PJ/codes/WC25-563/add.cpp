#include<bits/stdc++.h>
using namespace std;
int a[100005],sum[100005];
int main(){
	int n,m,l,r;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}cin>>m;
	for (int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl;
	}
	return 0;
}
