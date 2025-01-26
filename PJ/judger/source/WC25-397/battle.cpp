#include<bits/stdc++.h>
using namespace std;
char c[310][310];
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
        }
    }
    cout<<-1;
    return 0;
}
