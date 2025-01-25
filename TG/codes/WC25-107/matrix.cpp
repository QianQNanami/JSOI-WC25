#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[405][405];
ll L[405][405],R[405][405];
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        L[i][n]=a[i][n];
        L[1][i]=R[1][i]=a[1][i];
        R[i][1]=a[i][1];
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            R[i][j]=R[i-1][j-1]+a[i][j];
        }
    }
    for(int i=2;i<=n;i++){
        for(int j=n-1;j>=1;j--){
            L[i][j]=L[i-1][j+1]+a[i][j];
        }
    }
    ll ans=LONG_LONG_MIN;
    for(int k=2;k<=n;k++){
        for(int i=1;i+k-1<=n;i++){
            for(int j=1;j+k-1<=n;j++){
                int x=i+k-1,y=j+k-1;
                ans=max(ans,(R[x][y]-R[i-1][j-1])-(L[x][j]-L[i-1][y+1]));
            }
        }
    }
    cout<<ans;
    return 0;
}


