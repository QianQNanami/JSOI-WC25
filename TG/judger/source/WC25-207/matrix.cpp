#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[405][405],b[405][405],c[405][405];
ll ans=LONG_LONG_MIN;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++) for(ll j=1;j<=n;j++) scanf("%lld",&a[i][j]);
	for(ll i=1;i<=n;i++) for(ll j=1;j<=n;j++) b[i][j]=b[i-1][j-1]+a[i][j],c[i][j]=c[i-1][j+1]+a[i][j];
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			for(ll pos=2;pos+i-1<=n&&pos+j-1<=n;pos++){
				ans=max(ans,b[i+pos-1][j+pos-1]-b[i-1][j-1]-(c[i+pos-1][j]-c[i-1][j+pos]));
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}
