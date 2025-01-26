#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	int r[m+1],l[m+1],sum[m+1]={0};
	for(int i=1;i<=m;i++){
		cin>>l[i]>>r[i]; 
		for(int j=l[i];j<=r[i];j++){
			sum[i]+=a[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<endl;
	}
	return 0;
}
