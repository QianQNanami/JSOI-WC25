#include<bits/stdc++.h>
#define QwQ return 0;
#define ll long long
#define N 405
using namespace std;
int n;
ll ans=INT_MIN;
int a[N][N];
ll l[2*N][N],r[2*N][N];
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin>>a[i][j];
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++){
        int x=i+n-j,y=min(i,j);
        l[x][y]=l[x][y-1]+a[i][j];
    }
    for (int i=1;i<=n;i++)
    for (int j=n;j>=1;j--){
        int x=i+j-1,y=min(i,n-j+1);
        r[x][y]=r[x][y-1]+a[i][j];
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int maxx=max(i,j);
            for (int k=1;k<=n-maxx;k++){
                int ii=i+k,jj=k+j;
                int x=i,y=jj;
                int xx=ii,yy=j;
                ans=max(l[ii-n-jj][min(ii,jj)]-l[i-n-j][min(i,j)]
                    -(r[xx+yy-1][min(xx,n-yy+1)]
                      -r[x+y-1][min(x,n-y+1)]),ans);
            }
        }
    }
//    for (int i=1;i<2*n;i++){
//        for (int j=1;j<=n;j++)
//            cout<<r[i][j]<<' ';
//        cout<<'\n';
//    }
    cout<<ans;
    QwQ;
}
