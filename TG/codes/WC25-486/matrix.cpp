#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[405][405],ans,maxx;
vector<int> z[805],y[805]
signed main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			int x=z[i+j-1][z[i+j-1].size()-1]+a[i][j];
			z[i+j-1].push(x);
			int jj=n-j+1;
			x=y[i+jj-1][y[i+jj-1].size()-1]+a[i][j];
			z[i+jj-1].push(x);
		}
	} 
	for(int k=2;k<=n;k++){
		for(int i=1;i<=n-k;i++){
			for(int j=1;j<=n-k;j++){
				ans=z[i+j-1][i-1+k]-z[i+j-1][i-1];
				int jj=n-j+1;
				ans-=(y[i+jj-1][i-1+k]-y[i+jj-1][i-1]);
			}
			maxx=max(maxx,ans);
		}
	}
	cout<<abs(ans);
	return 0;
}
