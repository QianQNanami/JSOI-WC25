#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int INF=0x3f3f3f3f;
const int N  =1e5+10;
int n,w[N],b[N],k[N];
vector<int> s[N];
int dfs(int u){
    if(s[u].size()==0){
        b[u]=w[u];
        k[b[u]]++;
        return b[u];
    }
    for(int i:s[u])
        b[u]+=dfs(i);
    b[u]+=w[u];
    k[b[u]]++;
    return b[u];
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int v,p;
    for(int i=1;i<=n;i++){
        cin>>v>>p;
        s[p].push_back(i);
        w[i]=v;
    }
    int h=dfs(0);
    k[h]--;
    int ans=0;
    if(h%3==0){
        ans+=k[h/3]*(k[h/3]-1);
        ans+=k[h/3]*k[h/3*2];
    }
    cout<<ans<<endl;
    return 0;
}
