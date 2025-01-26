#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[1000009],sum[1000009];
int main()
{
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++)
	scanf("%lld",&a[i]);
	sum[0]=0;
	for(ll i=1;i<=n;i++)
	sum[i]=sum[i-1]+a[i];
	scanf("%lld",&m);
	while(m--)
	{
		ll x,y;
		scanf("%lld%lld",&x,&y);
		cout<<sum[y]-sum[x-1]<<"\n";
	}
	return 0;
}
