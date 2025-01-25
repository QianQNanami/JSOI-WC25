#include<bits/stdc++.h>
#define MAXN 410
using namespace std;
int n,ans=0xcfcfcfcf;
int g[MAXN][MAXN];
int pre1[MAXN][MAXN],pre2[MAXN][MAXN];
signed main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            scanf("%d",&g[i][j]);
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            pre1[i][j]=pre1[i-1][j-1]+g[i][j];
        }
        for(int j=n;j>=1;--j){
            pre2[i][j]=pre2[i-1][j+1]+g[i][j];
        }
    }
    for(int i=2;i<=n;++i){
        for(int j=2;j<=n;++j){
            for(int k=2;k<=min(i,j);++k){
                ans=max(ans,(pre1[i][j]-pre1[i-k][j-k])-(pre2[i][j-k+1]-pre2[i-k][j+1]));
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
