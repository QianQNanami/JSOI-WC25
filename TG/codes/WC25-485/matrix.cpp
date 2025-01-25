#include<bits/stdc++.h>
using namespace std;
int a[505][505],s[505][505],ma=-1e9,mi=1e9,n;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			int cnt=j-1;++cnt;
			while(cnt!=i)
				s[i][j]+=a[cnt][cnt];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ma=max(ma,s[i][j]-s[j][i]);
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			mi=min(ma,s[i][j]-s[j][i]);
//		}
//	}
	cout<<ma;
	return 0;
}
