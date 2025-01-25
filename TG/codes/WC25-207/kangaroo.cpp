#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[50005];
ll l,r;
ll ans;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++) scanf("%lld",&a[i]);
	sort(a+1,a+n+1);
	l=1,r=(n/2)+(n%2);
	while(l<=r&&r<=n){
		if(a[l]*2<=a[r]){
			ans++;
			l++,r++;
		}
		else r++;
	}
	printf("%lld\n",ans);
	return 0;
}
