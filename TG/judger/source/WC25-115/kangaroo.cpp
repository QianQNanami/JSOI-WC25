#include<bits/stdc++.h>
#define MAXN 50005
using namespace std;
int n,ans,a[MAXN],vis[MAXN];
int main()
{
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    int j=n;
    for(int i=n;i>=1;--i)
    {
        while(j>i&&vis[j])--j;
        if(a[i]<=a[j]/2)++ans,vis[i]=1,--j;
    }
    printf("%d\n",ans);
    return 0;
}
