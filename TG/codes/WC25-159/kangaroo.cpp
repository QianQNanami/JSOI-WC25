#include<bits/stdc++.h>
#define QwQ return 0;
#define N 50005
using namespace std;
int n,ans;
int a[N];
int main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    int i=1,j=n/2+1;
    while(i<=n/2&&j<=n){
        while (a[i]*2>a[j]&&j<=n) j++;
        if (j<=n){
            i++,j++;
            ans++;
        }
    }
    cout<<ans;
    QwQ;
}
