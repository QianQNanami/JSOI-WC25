#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum[405][405],mus[405][405];
int dp[405][405];//aij×óÉÏ½Ç 
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    ios::sync_with_stdio(0);
    int n;
	cin>>n;
	memset(dp,-0x3f3f3f3f,sizeof dp);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int a; 
			cin>>a;
			sum[i][j]=sum[i-1][j-1]+a;
			mus[i][j]=mus[i-1][j+1]+a;
		} 
	}
//	cout<<endl;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<sum[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<mus[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	int ans=-0x3f3f3f3f;
	//ji
	for(int k=2;k<=n;k++){//±ß³¤ 
		for(int i=1;i<=n-k+1;i++){
			for(int j=1;j<=n-k+1;j++){//×ø±ê 	
				int x=(sum[i+k-1][j+k-1]-sum[i-1][j-1])-(mus[i+k-1][j]-mus[i-1][j+k]);//D
				dp[i][j]=max(dp[i][j],x);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ans=max(ans,dp[i][j]);
			
		}
	}
	cout<<ans;
    return 0;
}/*
3
-3 4 5
7 9 -2
1 0 -6

3
1 2 3
4 5 6
7 8 9
*/
