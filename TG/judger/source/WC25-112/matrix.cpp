#include<bits/stdc++.h>
using namespace std;
int a[500][500],b[500][500];
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    int n,ans=-9999999;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
        int x;
        scanf("%d",&x);
        a[i][j]=a[i-1][j-1]+x;
        b[i][j]=b[i-1][j+1]+x;
    }
    for(int k=1;k<=n;k++)for(int i=1;i<=n-k;i++)for(int j=1;j<=n-k;j++)ans=max(ans,(a[i+k][j+k]-a[i-1][j-1])-(b[i+k][j]-b[i-1][j+k+1]));
    printf("%d",ans);
    return 0;
}
