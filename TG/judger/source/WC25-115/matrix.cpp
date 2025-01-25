#include<bits/stdc++.h>
#define MAXN 405
using namespace std;
int n,ans,a[MAXN][MAXN];
int s1[MAXN][MAXN],s2[MAXN][MAXN];
int main()
{
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            scanf("%d",&a[i][j]);
            s1[i][j]=s1[i-1][j-1]+a[i][j];
            s2[i][j]=s2[i-1][j+1]+a[i][j];
        }
    }
    for(int len=2;len<=n;++len)
        for(int i1=1,i2=len;i1<=n-len+1,i2<=n;++i1,++i2)
            for(int j1=1,j2=len;j1<=n-len+1,j2<=n;++j1,++j2)
                ans=max(ans,s1[i2][j2]-s1[i1-1][j1-1]-(s2[i2][j1]-s2[i1-1][j2+1]));
    printf("%d\n",ans);
    return 0;
}
