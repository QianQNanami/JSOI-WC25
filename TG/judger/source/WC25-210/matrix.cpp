#include <bits/stdc++.h>
#define N (int)4e2+5
using namespace std;
int n;
int res=INT_MIN;
int a[N][N],s1[N][N],s2[N][N];
signed main()
{
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;++i) for(int j=1;j<=n;++j) scanf("%d",&a[i][j]);
    for(int i=1;i<=n;++i) for(int j=1;j<=n;++j) s1[i][j]=s1[i-1][j-1]+a[i][j];
    for(int i=1;i<=n;++i) for(int j=n;j>=1;--j) s2[i][j]=s2[i-1][j+1]+a[i][j];
    for(int l=1;l<=n;++l)
    {
        for(int xl=1;xl<=n-l+1;++xl)
        {
            for(int yl=1;yl<=n-l+1;++yl)
            {
                int xr=xl+l-1,yr=yl+l-1;
                res=max(res,s1[xr][yr]-s1[xl-1][yl-1]-s2[xr][yl]+s2[xl-1][yr+1]);
            }
        }
    }
    printf("%d\n",res);
    return 0;
}
