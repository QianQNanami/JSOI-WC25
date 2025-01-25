#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int n;
int a[maxn][maxn];
int ans=-10000110;
int sum1[maxn][maxn];
int sum2[maxn][maxn];
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
		for(int j=1;j<=n;j++){
			sum1[i][j]=sum1[i-1][j-1]+a[i][j];
			sum2[i][j]=sum2[i-1][j+1]+a[i][j];
		}
	}
	for(int i=2;i<=n;i++){
		for(int j=2;j<=n;j++){
			for(int k=1;k<i;k++){
				if(j-i+k-1<0)continue;
				int l=sum1[i][j]-sum1[k-1][j-i+k-1];
				int r=sum2[i][j-i+k]-sum2[k-1][j+1];
				ans=max(ans,l-r);
			}
		}
	}
	cout<<ans;
	return 0;
}
