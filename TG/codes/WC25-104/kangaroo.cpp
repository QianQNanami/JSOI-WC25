#include<bits/stdc++.h>
using namespace std;
int n,a[50005];
int ans=-2e9;
int main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=n/2-1;i<=n;i++){
        int iny=i,outy=n,sum=0;
        for(int j=n;j>=i;j--){
            if(a[outy]>=a[iny]*2){
                sum++;
                outy--;
            }
            iny--;
            if(iny==0){
                break;
            }
        }
        ans=max(ans,sum);
    }
    cout<<ans;
    return 0;
}
