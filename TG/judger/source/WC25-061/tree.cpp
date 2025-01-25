#include <bits/stdc++.h>
using namespace std;
long long n,v[100005],dp[100005],vis[100005],sum,ans,ans2,flag=-1;
vector <int> g[100005];
void dfs(long long x){
    vis[x]=1;
    dp[x]=v[x];
    if (g[x].size()==0 || x==flag) return;
    for (auto v:g[x]){
        if (vis[v]) continue;
        vis[v]=1;
        dfs(v);
        dp[x]+=dp[v];
    }
}
void dfs2(long long x){
    vis[x]=1;
    if (v[x]==0){
        ans++;
        for (auto v:g[x]){
            if (vis[v]) continue;
            vis[v]=1;
            dfs2(v);
        }
    }
    if (v[x]!=0 && dp[x]==sum/3) flag=x;
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        g[b].push_back(i);
        g[i].push_back(b);
        v[i]=a;
        sum+=a;
    }
    dfs(0);
    int root;
    for (int i=0;i<=n;i++){
        if (dp[i]==sum/3) {
            root=i;
            ans++;
            break;
        }
    }
    //cout<<dp[root]<<' ';
    //cout<<root;
    memset(vis,0,sizeof(vis));
    dfs2(root);
    //cout<<flag<<' ';
    memset(dp,0,sizeof(dp));
    memset(vis,0,sizeof(vis));
    dfs(root);
    //cout<<dp[3]<<endl;
    for (int i=0;i<=n;i++){
        if (dp[i]==sum/3) ans2++;
    }
    cout<<ans*ans2;
    return 0;
}
