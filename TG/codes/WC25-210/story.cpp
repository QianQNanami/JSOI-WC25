#include <bits/stdc++.h>
#define N (int)5e4+5
using namespace std;
int n,k,m;
int a[N],cnt[35];
inline bool process(int len)
{
    for(int l=1;l<=n-len+1;++l)
    {
        int tmp=0;
        for(int i=l;i<=l+len-1;++i) tmp|=1<<(a[i]-1);
        if(tmp==(1<<k)-1) return 1;
    }
    return 0;
}
signed main()
{
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    scanf("%d%d%d",&n,&k,&m);
    for(int i=1;i<=n;++i){scanf("%d",&a[i]);cnt[a[i]]++;}
    for(int i=1,op,p,v;i<=m;++i)
    {
        scanf("%d",&op);
        if(op==1)
        {
            scanf("%d%d",&p,&v);
            cnt[a[p]]--,cnt[v]++,a[p]=v;
        }
        else
        {
            int res;bool f=1;
            for(int i=1;i<=k;++i) if(!cnt[i]){f=0;break;}
            if(!f) res=-1;
            else
            {
                int l=k-1,r=n+1;
                while(l<=r)
                {
                    int mid=(l+r)>>1;
                    if(process(mid)) r=mid-1,res=mid;
                    else l=mid+1;
                }
            }
            printf("%d\n",res);
        }
    }
    return 0;
}
