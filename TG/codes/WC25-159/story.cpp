#include<bits/stdc++.h>
#define QwQ return 0;
#define N 50005
using namespace std;
int n,k,m,t;
int s[35],a[N];
int main(){
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k>>m;
    for (int i=1;i<=n;i++) cin>>a[i];
    while(m--){
        cin>>t;
        if (t==1){
            int p,v;
            cin>>p>>v;
            a[p]=v;
        }else{
            memset(s,0,sizeof(s));
            int ans=INT_MAX,num=0;
            int i=0,j=0;
            while(i<=j&&j<=n&&i<=n){
                while(num!=k&&j<=n){
                    j++;
                    s[a[j]]++;
                    if (s[a[j]]==1) num++;
                }
                if (num==k&&j<=n)
                    ans=min(ans,j-i);
                i++;
                s[a[i]]--;
                if (s[a[i]]==0) num--;
            }
            if (ans==INT_MAX) cout<<-1<<'\n';
            else cout<<ans<<'\n';
        }
    }
    QwQ;
}
