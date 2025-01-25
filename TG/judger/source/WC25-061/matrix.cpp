#include <bits/stdc++.h>
using namespace std;
int n,mp[405][405],num1[405][405],num2[405][405];
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin>>mp[i][j];
    int maxn=-INT_MAX;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i==1 || j==1 ) num1[i][j]=mp[i][j];
            else num1[i][j]=num1[i-1][j-1]+mp[i][j];
        }
    }
    for (int i=n;i>=1;i--){
        for (int j=1;j<=n;j++){
            if (i==n || j==1 ) num2[i][j]=mp[i][j];
            else num2[i][j]=num2[i+1][j-1]+mp[i][j];
        }
    }
    for (int i=2;i<=n;i++){
        for (int x=1;x<=n-i+1;x++){
            for (int y=1;y<=n-i+1;y++){
                int sum=num1[x+i-1][y+i-1]-num1[x-1][y-1];
                sum-=(num2[x][y+i-1]-num2[x+i+1][y-1]);
                //cout<<sum;
                maxn=max(maxn,sum);
            }
        }
    }
    cout<<maxn;
    return 0;
}
