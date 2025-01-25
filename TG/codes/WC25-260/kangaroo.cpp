#include<bits/stdc++.h>
#define MAXN 50010
using namespace std;
int n,ans,p=1;
bool vis[MAXN];
int a[MAXN];
signed main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n);
    for(int i=2;i<=n;++i){
        if(a[i]>=a[p]<<1&&!vis[i]){
            vis[i]=vis[p]=1;
            ++ans,++p;
        }
    }
    printf("%d\n",ans);
    return 0;
}
