#include<bits/stdc++.h>
using namespace std;
int a[100010],s[100010],c[100010],d[100010];
int main(){
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>c[i]>>d[i];
    }
    for(int i=1;i<=m;i++){
        cout<<s[d[i]]-s[c[i]-1]<<endl;
    }
    return 0;
}
