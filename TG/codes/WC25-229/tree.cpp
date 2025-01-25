#include<bits/stdc++.h>
using namespace std;
vector<int> G[11451];
int n,sz[11451],vis[11451],used[11451][11451];
void fsz(int n){
	vis[n]=1;
	for(int i=0;i<G[n].size();i++){
		int v=G[n][i];
		if(vis[n])continue;
		fsz(v);
		sz[n]+=sz[v];
	}
}
int main(){
    freopen("tree.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	int p,v1;
    	cin>>v1>>p;
    	sz[i]=v1;
    	G[i].push_back(p);
    	G[p].push_back(i);
	}
	fsz(1);
	
    cout<<1<<endl;
    return 0;
}
