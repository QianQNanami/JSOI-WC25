#include<bits/stdc++.h>
using namespace std;
const int maxn=409;
int n;
int mp[maxn][maxn];
int sum[maxn][maxn];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>mp[i][j];
		}
	}
	sum[0][0]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			sum[i][j]=sum[i-1][j]+sum[i][j-1]+mp[i][j]-sum[i-1][j-1];
		}
	}
	int ans=-0x3f3f3f3f;
	for(int i=2;i<=n;i++){
		for(int x=1;x<=n-(2-i);x++){
			for(int y=1;y<=n-(2-i);y++){
				ans=max(ans,sum[i+x][i+y]-sum[x-1][y-1]);	
			} 
		} 
	}
	cout<<ans;
	return 0;
} 
