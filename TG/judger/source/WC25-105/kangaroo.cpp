#include <bits/stdc++.h>
using namespace std;
long long a[50005];
int main()
{
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int i=1,j=n,ans=0;
    while(a[i]*2<=a[j]){
        i++;
    }
    i-=1;
    while(true){
        if(i==0||j==0){
            break;
        }
        if(a[i]*2<=a[j]){
            ans++;
            j--;
        }
        i--;
    }
    cout<<ans;
    return 0;
}
