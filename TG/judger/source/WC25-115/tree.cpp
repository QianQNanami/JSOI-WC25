#include<bits/stdc++.h>
#define MAXN 300005
using namespace std;
int n,root,ans,w[MAXN],fa[MAXN],d[MAXN];
bool check(int x,int y)
{
    if(d[x]<d[y])swap(x,y);
    while(d[x]>d[y])x=fa[x];
    if(x==y)return true;
    return false;
}
int main()
{
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d%d",&w[i],&fa[i]);
        if(fa[i]==0)root=i;
    }
    for(int i=1;i<=n;++i)
        for(int j=fa[i];j;j=fa[j])
            ++d[i],w[j]+=w[i];
    for(int i=1;i<n;++i)
    {
        if(i==root)continue;
        for(int j=i+1;j<=n;++j)
        {
            if(j==root)continue;
            if(check(i,j))
            {
                if(d[i]>d[j]&&w[root]-w[j]==w[j]-w[i]&&w[j]-w[i]==w[i])++ans;
                if(d[i]<d[j]&&w[root]-w[i]==w[i]-w[j]&&w[i]-w[j]==w[j])++ans;
            }
            else
            {
                if(w[root]-w[i]-w[j]==w[i]&&w[i]==w[j])++ans;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
