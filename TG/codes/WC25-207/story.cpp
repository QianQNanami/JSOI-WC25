#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,m;
ll a[500005];
ll cnt[35],num[35],res;
ll check(ll len){
	memset(cnt,0,sizeof(cnt));
	ll ans=0,sum=0;
	for(ll i=1;i<=n;i++){
		ll j=i-len;
		if(j>=1){
			cnt[a[j]]--;
			if(!cnt[a[j]]) sum--;
		}
		cnt[a[i]]++;
		if(cnt[a[i]]==1) sum++;
		if(sum==k) return 1;
	}
	return 0;
}
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%lld%lld%lld",&n,&k,&m);
	for(ll i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(ll i=1;i<=n;i++){
		num[a[i]]++;
		if(num[a[i]]==1) res++;
	}
	for(ll i=1;i<=m;i++){
		ll opt,pos,val;
		scanf("%lld",&opt);
		if(opt==1){
			scanf("%lld%lld",&pos,&val);
			num[a[pos]]--;
			if(!num[a[pos]]) res--;
			a[pos]=val;
			num[val]++;
			if(num[val]==1) res++;
		}
		if(opt==2){
			ll l=k,r=n,ans;
			if(res<k){
				printf("-1\n");
				continue;
			}
			while(l<=r){
				ll mid=(l+r)>>1;
				if(check(mid)){
					r=mid-1;
					ans=mid;
				}
				else l=mid+1;
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}
