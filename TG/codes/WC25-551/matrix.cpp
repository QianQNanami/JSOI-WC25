#include <bits/stdc++.h>
using namespace std;
int a[405][405];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int ans=-2e9;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			for(int k=2;k<=n-i+1&&k<=n-j+1;k++){//±ß³¤ 
				int sum=0;
				for(int s=1;s<=k;s++){
					//cout<<a[j+s-1][i+k-s]<<" "<<a[j+s-1][i+s-1]<<endl;;
					sum=sum-a[j+s-1][i+k-s]+a[j+s-1][i+s-1];
				}
				//cout<<i<<" "<<j<<" "<<k<<" "<<sum<<endl;
				ans=max(ans,sum);
			}
		}
	}
	cout<<ans;
	return 0;
}
