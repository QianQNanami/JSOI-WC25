#include<bits/stdc++.h>
using namespace std;
int n,ans=-2e9;
int a[402][402];
int s[402][402],d[402][402];
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    scanf("%d",&n);
    //printf("%d\n",n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            s[i][j]=a[i][j]+s[i-1][j-1];
            //printf("%d %d:%d\n",i,j,s[i][j]);
        }
    }
    for (int i=n;i>=1;i--){
        for (int j=1;j<=n;j++){
            d[i][j]=a[i][j]+d[i+1][j-1];
            //printf("%d %d:%d\n",i,j,d[i][j]);
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            for (int k=0;k<=min(n-i,n-j);k++){
                ans=max(ans,s[i+k][j+k]-s[i-1][j-1]-(d[i][j+k]-d[i+k+1][j-1]));
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
