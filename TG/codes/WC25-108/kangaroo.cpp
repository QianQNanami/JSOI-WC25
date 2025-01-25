#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int INF=0x3f3f3f3f;
const int N  =5e4+10;
int n,a[N],l,r,ans;
bool vis[N];
int main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=n;i>=1;i--)
        if(a[i]<=a[n]/2){
            l=i,r=n;
            vis[i]=1,vis[r]=1;
            l--,r--;
            ans++;
            break;
        }
    while(!vis[r]&&l>=1){
        while(a[r]/2<a[l]){
            vis[l]=1;
            l--;
        }
        if(!vis[r]&&l>=1&&a[r]/2>=a[l]){
            vis[l]=1;
            l--,r--;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
