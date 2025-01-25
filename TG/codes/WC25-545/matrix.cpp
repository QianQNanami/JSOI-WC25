#include <bits/stdc++.h>
using namespace std;
const int MAXN=405;
int a[MAXN][MAXN];
int sum[MAXN][MAXN];
int dp[MAXN][MAXN];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=min(i,j);k++){
				int tot=0;
				int d=i-j;
				int top=i-k+1,s=top+i;
				for(int q=i;q>=i-k+1;q--){
					tot+=a[q][q+d]-a[s-q][q+d];
				}
				sum[i][j]=max(tot,sum[i][j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=max(dp[i][j],max(dp[i-1][j],max(dp[i][j-1],sum[i][j])));
		}
	}
	cout<<dp[n][n]<<endl;
	return 0;
}
