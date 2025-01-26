#include<bits/stdc++.h>
using namespace std;
int a[10000];
int sum[10000];
int l,r,n,m;
int main(){
	cin>>n;
for(int i=1;i<=n;i++){
	sum[i]=0;
}
for(int i=1;i<=n;i++){
	cin>>a[i];
	sum[i]=sum[i-1]+a[i];
}
cin>>m;
for(int i=0;i<n;i++){
	cin>>l>>r;
	cout<<sum[r]-sum[l-1]<<endl; 
}
	return 0;                  
}
