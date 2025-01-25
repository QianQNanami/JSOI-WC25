#include<bits/stdc++.h>
using namespace std;
const int maxn=5e4+5;
int a[maxn];
bool vis[maxn];
int main(){
    ios::sync_with_stdio(0);
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int ans=0;
    for(int i=n; i>0; i--){
        if(!vis[i]){
            int t=upper_bound(a+1,a+i,a[i]/2)-a;
            if(t!=i){
                t--;
                while(vis[t] && t>0)t--;
                if(t!=0)vis[t]=true;
            }
        }
    }
    for(int i=1; i<=n; i++){
        if(vis[i])ans++;
    }
    cout<<ans<<endl;
    return 0;
}
