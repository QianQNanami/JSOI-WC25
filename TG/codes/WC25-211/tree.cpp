#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e5+5;
ll root,n,v[N],s[N],ans;
vector<ll> t[N];
void dfs(ll u){
	s[u]=v[u];
	for(auto v:t[u]){
		dfs(v);
		s[u]+=s[v];
	}
}
bool find(ll u,ll look){
	if(u==look) return 1;
	for(auto v:t[u]){
		if(find(v,look)) return 1;
	}
	return 0;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		ll p;
		scanf("%lld%lld",&v[i],&p);
		if(p==0) root=i;
		else t[p].push_back(i);
	}
	dfs(root);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j || i==root || j==root) continue;
			if(find(i,j)){
				ll a=s[j],b=s[i]-s[j],c=s[root]-s[i];
				if(a==b && b==c) ans++;
			}
			else if(find(j,i)){
				ll a=s[i],b=s[j]-s[i],c=s[root]-s[j];
				if(a==b && b==c) ans++;
			}
			else{
				ll a=s[i],b=s[j],c=s[root]-s[i]-s[j];
				if(a==b && b==c) ans++;
			}
		}
	}
	printf("%lld\n",ans/2);
	return 0;
}
