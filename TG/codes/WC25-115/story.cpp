#include<bits/stdc++.h>
#define MAXN 50005
using namespace std;
int n,k,m,a[MAXN],vis[MAXN];
int main()
{
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    scanf("%d%d%d",&n,&k,&m);
    for(int i=1;i<=n;++i)scanf("%d",&a[i]);
    while(m--)
    {
        int opt,p,v;
        scanf("%d",&opt);
        if(opt==1)
        {
            scanf("%d%d",&p,&v);
            a[p]=v;
        }
        else
        {
            int l=1,r=0,cnt=0,ans=0x3f3f3f3f;
            for(int i=1;i<=k;++i)vis[i]=0;
            while(r<n)
            {
                while(r<n&&cnt<k)
                {
                    ++r;
                    ++vis[a[r]];
                    if(vis[a[r]]==1)++cnt;
                    if(cnt==k)ans=min(ans,r-l+1);
                }
                while(l<=r&&cnt>=k)
                {
                    --vis[a[l]];
                    if(vis[a[l]]==0)--cnt;
                    ++l;
                    if(cnt==k)ans=min(ans,r-l+1);
                }
            }
            printf("%d\n",ans==0x3f3f3f3f?-1:ans);
        }
    }
    return 0;
}
