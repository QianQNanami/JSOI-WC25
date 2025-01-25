#include <bits/stdc++.h>
#define N ((int)5e4+5)
using namespace std;
int n,cnt=0;
int a[N];
signed main()
{
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;++i) scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    int iter=1;
    for(int i=n/2+1;i<=n;++i)
        if(a[iter]*2<=a[i]) iter++,cnt++;
    printf("%d\n",cnt);
    return 0;
}
