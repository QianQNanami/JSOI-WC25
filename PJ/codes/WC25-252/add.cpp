#include<bits/stdc++.h>
using namespace std;
long long a[100009],sum[100009];
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]+=sum[i-1]+a[i];
	}
	int m;cin>>m;
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		cout<<sum[y]-sum[x-1]<<endl;
	}
}
