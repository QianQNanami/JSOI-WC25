#include <bits/stdc++.h>
using namespace std;
int a[50005];
bool vis[50005];
int n;
int zxl(int k)
{
    int ans=INT_MAX;
    bool f=false;
    for(int i=1;i<=n;i++){
        int j=0;
        memset(vis,0,sizeof(vis));
        while(i+j<=n){
            vis[a[i+j]]=true;
            j++;
            bool F=true;
            for(int i=1;i<=k;i++){
                if(!vis[i]){
                    F=false;
                    break;
                }
            }
            if(F){
                f=true;
                ans=min(ans,j);
                break;
            }
        }
    }
    if(f){
        return ans;
    }
    return -1;
}
int main()
{
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    int k,m;
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        int t,p,v;
        cin>>t;
        if(t==1){
            cin>>p>>v;
            a[p]=v;
        }
        else{
            cout<<zxl(k)<<endl;
        }
    }
    return 0;
}
