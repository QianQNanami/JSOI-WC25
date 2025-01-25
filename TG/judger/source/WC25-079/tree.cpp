#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
struct node{
	int ch,p;
};
bool vis[N];
vector<node> g[N];

int dfs_root(int root,int i,int j){
	int p = 0;
	if(root == i || root == j) return 0;
	for(int i = 0;i<g[root].size();i++){
		p += dfs_root(g[root][i].ch,i,j);
	}
	return p;
}
int dfs(int root){
	int p = 0;
	if(root == 0) return 0;
	for(int i = 0;i<g[root].size();i++){
		p+=dfs(g[root][i].ch);
	}
	return p;
}

int main(){
	
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	
	int n,ans=0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		int v,p;
		cin>>v>>p;
		g[v].push_back({i,p});
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			
			int a = dfs_root(0,i,j),b = dfs(i),c = dfs(j);
			if(a== b == c) ans++;
			
		}
	}
	cout<<ans;
	return 0;
}
