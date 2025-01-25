#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,s[N],f[N],a[N],id1[N],id2[N],ans=0,cnt1=0,cnt2=0;

bool jud(int fa,int u)
{
    if(fa==0)return 0;
    if(fa==u)return 1;
    return jud(f[fa],u);
}

void up(int fa,int v)
{
    s[fa]+=v;
    if(fa==0)return;
    up(f[fa],v);
    return;
}

int main()
{
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);

    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d %d",&a[i],&f[i]);
    for(int i=1;i<=n;i++)
    {
        s[i]+=a[i];
        up(f[i],a[i]);
    }
    if(s[0]%3!=0)
    {
        printf("0");
        return 0;
    }
    int sum=s[0]/3;
    //printf("s[0]=%d\n",s[0]);
    for(int i=1;i<=n;i++)
    {
        //printf("s[%d]=%d\n",i,s[i]);
        if(s[i]==sum)id1[++cnt1]=i;
        if(s[i]==sum*2)id2[++cnt2]=i;
    }

    if(cnt1>0)
    {
        for(int i=1;i<=cnt1;i++)
        {
            for(int j=1;j<=cnt1;j++)
            {
                if(jud(id1[j],id1[i]) || jud(id1[i],id1[j]))continue;
                ans++;
            }
        }
    }

    if(cnt1>0 && cnt2>0)
    {
        for(int i=1;i<=cnt1;i++)
        {
            for(int j=1;j<=cnt2;j++)
            {
                if(id1[i]!=id2[j] && jud(id1[i],id2[j]))
                    ans++;
            }
        }
    }

    printf("%d",ans);
    return 0;
}
