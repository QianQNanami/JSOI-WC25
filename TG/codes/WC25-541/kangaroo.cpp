#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e4;
int n,a[N+5],ans;
signed main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for (int k=(1+n)/2;k<=n;k++){
        int i=1;
        int num=0;
        for (int j=k;j<=n;j++){
            if (a[i]<=(a[j]/2)){
                num++;
                i++;
            }
            if(i>=k)
                break;
        }
        if (num>ans) ans=num;

    }
    cout<<ans<<endl;
    return 0;
}
