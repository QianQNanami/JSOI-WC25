#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int INF=0x3f3f3f3f;
const int N  =400+10;
int n,ans=-INF;
int a[N][N],b[N][N],c[N][N];
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=1;j<=n;j++){
        b[1][j]=a[1][j];
        c[1][j]=a[1][j];
    }
    for(int i=1;i<=n;i++){
        b[i][1]=a[i][1];
        c[i][n]=a[i][n];
    }
    for(int i=2;i<=n;i++)
        for(int j=2;j<=n;j++)
            b[i][j]=b[i-1][j-1]+a[i][j];
    for(int i=2;i<=n;i++)
        for(int j=1;j<=n-1;j++)
            c[i][j]=c[i-1][j+1]+a[i][j];
    int x,y;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int w=0;max(i,j)+w<=n;w++){
                x=i+w;y=j+w;
                ans=max(ans,b[x][y]-b[i-1][j-1]-c[x][j]+c[i-1][y+1]);
            }
    cout<<ans<<endl;
    return 0;
}
