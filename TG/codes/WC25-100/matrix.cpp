#include<bits/stdc++.h>
using namespace std;
int n,a[402][402],b[402][402],ans;
int main(){
	//freopen("matrix.","r",stdin);
	//freopen("matrix.","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			cin>>a[i][j];
	for(int i=1;i<=n;++i){
		for(int j=n;j>=1;--j)
			for(int k=1;k<=n-i;++k){
				a[i+k][i+k]+=a[i+k-1][i+k-1];
	 			b[i+k][j-k]+=a[i+k-1][j-k+1];
	 			ans=max(a[i+k][i+k]-b[i+k][i-k],a[i][i]-b[i][j]);
	 		}	
	}
	cout<<ans-2;
	return 0;
}

