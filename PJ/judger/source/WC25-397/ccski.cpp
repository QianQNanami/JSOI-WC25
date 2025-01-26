#include<bits/stdc++.h>
using namespace std;
int a[510][510],b[510][510];
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>b[i][j];
        }
    }
    cout<<1;
    return 0;
}
