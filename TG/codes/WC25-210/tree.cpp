#include <bits/stdc++.h>
#define int long long
#define N ((int)1e5+5)
using namespace std;
int n,rt;
int cnt=0;
bool vis[N];
int sz[N],val[N],fa[N];
vector<int> g[N];
inline void dfs(int u,int f)
{
    if(vis[u]) return;
    sz[u]=val[u],vis[u]=1;
    for(auto v:g[u]) if(v!=f && !vis[v]){dfs(v,u);sz[u]+=sz[v];}
}
inline bool p(int a,int b)
{
    for(int i=a;i;i=fa[i]) if(i==b) return 1;
    return 0;
}
signed main()
{
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n && scanf("%lld%lld",&val[i],&fa[i]);++i)
    {
        if(fa[i]==0) rt=i;
        else{g[i].push_back(fa[i]);g[fa[i]].push_back(i);}
    }
    sz[rt]=val[rt],vis[rt]=1;
    for(auto v:g[rt]){dfs(v,rt);sz[rt]+=sz[v];}
    for(int i=1;i<n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            if(!fa[i] || !fa[j]) continue;
            if(p(i,j))
            {
                int x=sz[rt]-sz[j],y=sz[j]-sz[i],z=sz[i];
                if(x==y && y==z) cnt++;
            }
            else if(p(j,i))
            {
                int x=sz[rt]-sz[i],y=sz[i]-sz[j],z=sz[j];
                if(x==y && y==z) cnt++;
            }
            else
            {
                int x=sz[rt]-sz[i]-sz[j],y=sz[i],z=sz[j];
                if(x==y && y==z) cnt++;
            }
        }
    }
    printf("%lld\n",cnt);
    return 0;
}
