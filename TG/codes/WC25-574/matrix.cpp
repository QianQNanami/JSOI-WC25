#include<bits/stdc++.h>
using namespace std;
const int maxn=405;
int a[maxn][maxn];
int suml[maxn][maxn],sumr[maxn][maxn];
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        suml[1][i]=a[1][i];
        sumr[1][n-i+1]=a[1][n-i+1];
        suml[i][1]=a[i][1];
        sumr[n-i+1][1]=a[n-i+1][1];
    }
    for(int i=2; i<=n; i++){
        for(int j=1; j<=n; j++){
            suml[i][j]=suml[i-1][j-1]+a[i][j];
        }
    }
    for(int i=2; i<=n; i++){
        for(int j=n; j>0; j--){
            sumr[i][j]=sumr[i-1][j+1]+a[i][j];
        }
    }
    int ans=-2e9;
    for(int l=2; l<=n; l++){
        for(int i=l; i<=n; i++){
            for(int j=l; j<=n; j++){
                ans=max(ans,suml[i][j]-suml[i-l][j-l]-(sumr[i][j-l+1]-sumr[i-l][j+1]));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
