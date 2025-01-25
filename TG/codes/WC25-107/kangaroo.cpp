#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[50005];
int vis[50005];
int main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n);
    int x=n-1;
    int ans=0;
    for(int i=n;i>=1;i--){
        while(x>=1&&vis[x]){
            x--;
        }
        while(x>=1&&2*a[x]>a[i]){
            x--;
        }
        if(x<1){
            break;
        }
        ans++;
        vis[x]=1;
    }
    cout<<ans;
    return 0;
}
