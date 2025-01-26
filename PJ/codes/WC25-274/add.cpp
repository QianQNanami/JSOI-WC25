#include <bits/stdc++.h>
using namespace std;
int a[100000+2],n,m,l,r,sum[100000+2],ans;
int main(){
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	sum[n]=sum[n-1]+a[n];
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		ans=sum[r]-sum[l-1];
		cout<<ans;
		cout<<'\n';
	}
	return 0;
}
/*
4
2 4 3 2 1
2
1 3
2 4
*/
