#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],l,r,sum[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=a[i]+sum[i-1];
	} 
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl;
	}
	return 0;
}
