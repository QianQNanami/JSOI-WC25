#include<bits/stdc++.h>
using namespace std;
long long a[100005],b[100005],n,m,x,y;
int main(){
    cin>>n;
    cin>>a[1];
    b[1]=a[1];
    for(int i=2;i<=n;i++){
        cin>>a[i];
        b[i]=a[i]+b[i-1];
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        cout<<b[y]-b[x-1]<<endl;
    }
    return 0;
}
