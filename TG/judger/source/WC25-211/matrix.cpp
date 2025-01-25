#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,ans=-1e9;
ll a[405][405],p[405][405],q[405][405];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=0;i+j<=n;j++){
			p[i+j][1+j]=p[i+j-1][j]+a[i+j][1+j]; 
		}
	}
	for(int j=1;j<=n;j++){
		for(int i=0;i+j<=n;i++){
			p[i+1][i+j]=p[i][i+j-1]+a[i+1][i+j]; 
		}
	}
	
	for(int i=n;i>=1;i--){
		for(int j=0;i-j>0;j++){
			q[i-j][1+j]=q[i-j+1][j]+a[i-j][1+j]; 
		}
	}
	for(int j=n;j>1;j--){
		for(int i=0;j+i<=n;i++){
			q[n-i][i+j]=q[n-i+1][i+j-1]+a[n-i][i+j]; 
		}
	}
	for(int k=2;k<=n;k++){
		for(int i=1;i+k-1<=n;i++){
			for(int j=1;j+k-1<=n;j++){
				ll x=p[i+k-1][j+k-1]-p[i-1][j-1]-(q[i][j+k-1]-q[i+k-1+1][j-1]);
				ans=max(ans,x);
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}
