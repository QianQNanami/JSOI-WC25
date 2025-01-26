#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n;
	int a[n+1],sum[n+1];
	sum[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+a[i];
	}
	cin>>m;
	int ans[m];
	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		ans[i]=sum[r]-sum[l-1];
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<endl;
	}
	
	
	return 0;
}
