#include <bits/stdc++.h>
using namespace std;
int a[405][405];
int s[405][405];
int t[405][405];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			s[i][j]=s[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			t[i][j]=t[i-1][j+1]+a[i][j];
		}
	}
	int ans=-1e9;
	for(int k=2;k<=n;k++){
		for(int i=1;i+k-1<=n;i++){
			for(int j=1;j+k-1<=n;j++){
				int x,y,z;
				x=s[i+k-1][j+k-1]-s[i-1][j-1];
				y=t[i+k-1][j]-t[i-1][j+k];
				z=x-y;
				ans=max(ans,z);
			}
		} 
	}
	cout<<ans;
	return 0;
}

