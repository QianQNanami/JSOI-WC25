#include<bits/stdc++.h>
using namespace std;
int n,a[500005];
int v,p,root;
int w[500005],sz[500005];
int ans;
vector<int> g[500005];
void add(int u,int v){
    g[u].push_back(v);
    return;
}
int cal(int u){
    if(g[u].size()==0){
        return sz[u]=w[u];
    }
    for(int i=0;i<g[u].size();i++){
        sz[u]+=cal(g[u][i]);
    }
    sz[u]+=w[u];
    return sz[u];
}
void dfs(int u1,int u2){
    if((sz[u1]==sz[u2] && sz[u2]==sz[root]-sz[u1]-sz[u2] || sz[u1]-sz[u2]==sz[u2] && sz[u2]==sz[root]-sz[u1] || sz[u2]-sz[u1]==sz[u1] && sz[u1]==sz[root]-sz[u2]) && u1!=u2){
        ans++;
        return;
    }
    for(int i=0;i<g[u1].size();i++){
        dfs(g[u1][i],u2);
    }
    for(int i=0;i<g[u2].size();i++){
        dfs(u1,g[u2][i]);
    }
    return ;
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v>>p;
        add(p,i);
        w[i]=v;
        if(p==0){
            root=i;
        }
    }
    cal(root);
    dfs(root,root);
    cout<<ans;
    return 0;
}
