#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a[100010],l,r,summ=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>l>>r;
        for(int j=l;j<=r;j++){
            summ+=a[j];
        }
        cout<<summ;
        summ=0;
    }
    return 0;
}
