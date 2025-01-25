#include <bits/stdc++.h>
using namespace std;
const int N=405;
int lr[N][N],rl[N][N],a[N][N];
int n,ans=-2e5;
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            lr[i+j-1][j]=lr[i+j-2][j-1]+a[i+j-1][j];
        }
    }
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            lr[i][j+i-1]=lr[i-1][i+j-2]+a[i][i+j-1];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            rl[i+n-j][j]=rl[i+n-j-1][j+1]+a[i+n-j][j];
        }
    }
    for(int j=n;j>0;j--){
        for(int i=1;i<=n;i++){
            rl[i][j-i+1]=rl[i-1][j-i+2]+a[i][j-i+1];
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i+k-1<=n;i++){
            for(int j=1;j+k-1<=n;j++){
                ans=max(ans,lr[i+k-1][j+k-1]-lr[i-1][j-1]-(rl[i+k-1][j]-rl[i-1][j+k]));
            }
        }
    }
    cout<<ans;
}
