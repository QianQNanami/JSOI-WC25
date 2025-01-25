#include <bits/stdc++.h>
using namespace std;
int n,k,m,a[50005],op;
bool vis[35];
bool check(int mid){
    int cnt;
    for (int i=1;i<=n-mid+1;i++){
        cnt=0;
        memset(vis,0,sizeof(vis));
        for (int j=i;j<i+mid;j++){
            if (!vis[a[j]]){
                cnt++;
                vis[a[j]]=1;
            }
        }
        if (cnt==k) return 1;
    }
    return 0;
}
int main(){
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    cin>>n>>k>>m;
    for (int i=1;i<=n;i++) cin>>a[i];
    while (m--){
        cin>>op;
        if (op==1){
            int x,y;
            cin>>x>>y;
            a[x]=y;
        }
        else{
            int l=k,r=n,mid,ans=-1;
            while (l<=r){
                mid=(l+r)/2;
                if (check(mid)){
                    ans=mid;
                    r=mid-1;
                }
                else l=mid+1;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
