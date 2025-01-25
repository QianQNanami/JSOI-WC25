#include<bits/stdc++.h>
using namespace std;
void read(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
}
int n,a[114514],b[114514],used1[114514],used2[114514],ans;
int main(){
    read();
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i]/2;
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(b[j]>=a[i]&&used1[i]==0&&used2[j]==0){
                ans++;
                used1[i]=used2[j]=1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
