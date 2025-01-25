#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=410;
ll a[N][N],nxt[N][N],pre[N][N];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	ll n;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%lld",&a[i][j]);
			pre[i][j]=pre[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			nxt[i][j]=nxt[i-1][j+1]+a[i][j];
		}
	}
	ll ans=-2e9;
	for(int k=2;k<=n;k++){
		for(int i=1;i+k<=n+1;i++){
			for(int j=1;j+k<=n+1;j++){
				ans=max(ans,pre[i+k-1][j+k-1]-pre[i-1][j-1]-(nxt[i+k-1][j]-nxt[i-1][j+k]));
			}
		} 
	}
	printf("%lld",ans);
	return 0;
}

