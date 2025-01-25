#include<bits/stdc++.h>
using namespace std;
void read(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
}
int n,mp[405][405],f[405][405][2],ans;
int main(){
    read();
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mp[i][j];
        }
    }//O(n^3)可以接受 可以枚举边长k，再枚举（1，1)到（n-k)(n-k)的左上角的点  //至于每条对角线的长度可以预处理 预处理，f[i][j][0]表示从第(到第(i,j)个点的时候累加的长度 f[i][j][1]表示从右上角到
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            f[i][j][0]=f[i-1][j-1][0]+mp[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            f[i][j][1]=f[i-1][j+1][1]+mp[i][j];
        }
    }
    for(int k=2;k<=n;k++){
        for(int i=1;i<=n-k+1;i++){
            for(int j=1;j<=n-k+1;j++){
                int a=f[i+k-1][j+k-1][0]-f[i-1][j-1][0],b=f[i+k-1][j][1]-f[i-1][j+k][1];
                //cout<<k<<":"<<"("<<i<<","<<j<<"):"<<a<<" "<<b<<endl;
                ans=max(ans,a-b);
            }
        }
    }
    cout<<ans<<endl;
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<f[i][j][0]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<f[i][j][1]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}
