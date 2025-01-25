#include <bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
struct NODE{
	int v,w;
};
vector<NODE> g[MAXN];
int val[MAXN];
bool vis[MAXN];
int dfs(int x){
	if(vis[x]) return val[x];
	else{
		
		for(auto it:g[x]){
			val[x]+=dfs(it.v);
		}
	}
	vis[x]=true;
	return val[x];
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int v,p;
		cin>>v>>p;
		g[p].push_back({i,v});
		val[i]=v;
	}
	val[0]=dfs(0);
	if(val[0]%3!=0){
		cout<<0<<endl;
		return 0;
	}
	int three=val[0]/3;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(val[i]==three)  cnt++;
	}
	cout<<cnt*(cnt-1)/2;
	return 0;
}

