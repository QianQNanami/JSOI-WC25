#include <bits/stdc++.h>
//#define int long long 
using namespace std;
const int N=5e3;
int n,k,m;
int a[N+5];
bool vis[40];
signed main(){
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    cin>>n>>k>>m;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int k=1;k<=m;k++){
        int a;
        cin>>a;
        if (a==1){
            int p,v;
            cin>>p>>v;
            a[p]=v;
        }
        else {
            int ans=0x7f7f7f7f;
            for (int i=1;i<=n-k;i++){
                memset(vis,0,sizeof(vis));
                int tot=0;
                for (int j=i;j<=n;j++){
                    if (!vis[a[j]]){
                        tot++;
                    }
                    if (tot==k){
                        ans=min(ans,i-j+1);
                    }
                }
            }
            if (ans==0x7f7f7f7f){
                cout<<-1<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}