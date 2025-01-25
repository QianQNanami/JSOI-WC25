#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int n,a[N],ans=0;

int main()
{
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    int L=1,R=n;
    while(a[L]*2<=a[R])
    {
        ans++;
        L++;R--;
    }
    printf("%d",ans);
    return 0;
}
