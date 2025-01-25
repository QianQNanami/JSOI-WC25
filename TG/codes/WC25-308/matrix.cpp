#include<bits/stdc++.h>
using namespace std;
int n;
int u;
int ans=-10000000;
int a[1000][1000];
int fa(int i,int j,int u){
    int y=u;
    int p=i,o=j;
    int res=0;
    while(y>0){
        res+=a[p][o];
        p++;
        o++;
        y--;
    }
    return res;
}
int ma(int i,int j,int u){
    int y=u;
    int p=i,o=j;
    int res=0;
    while(y>0){
        res+=a[p][o];
        p++;
        o--;
        y--;
    }
    return res;
}
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(u=2;u<=n;u++){
        for(int j=1;j<=n-u+1;j++){
            for(int k=1;k<=n-u+1;k++){
                int zuo=fa(j,k,u);
                int you=ma(j,k+u-1,u);
                ans=max(ans,abs(zuo-you));
            }
        }
    }
    cout<<ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
