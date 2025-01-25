#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,sum,root;
struct Node{
	ll nxt,to;
}edge[200005];
ll head[100005],cnt,val[100005],siz[100005],num1,ans;
void addedge(ll u,ll v){
	edge[++cnt].nxt=head[u];
	edge[cnt].to=v;
	head[u]=cnt;
}
ll dfs(ll u){
	ll pos=0;
	for(ll i=head[u];i;i=edge[i].nxt){
		ll v=edge[i].to;
		pos=max(dfs(v),pos);
		siz[u]+=siz[v];	
	}
	
	siz[u]+=val[u];
	if(pos&&siz[u]==sum*2){
		ans++;
		return 0ll;
	}
	if(siz[u]==sum){
		num1++;
		return 1ll;
	}
	return 0ll;
}
ll fac[100005];
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
		ll f;
		scanf("%lld%lld",&val[i],&f);
		if(!f) root=i;
		if(f) addedge(f,i);
		sum+=val[i];
	}
	if(sum%3){
		printf("0\n");
		return 0;
	}
	sum/=3;
	ll pos=dfs(root);fac[0]=1;
	for(ll i=1;i<=num1;i++) fac[i]=fac[i-1]*i;
	if(num1>=2) ans+=fac[num1]/(fac[2]*fac[num1-2]);
	printf("%lld\n",ans);
	return 0;
}
