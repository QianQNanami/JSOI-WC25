#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,root,sum,ans;
int a[N],f[N];
vector<int> v[N],g1,g2;
int b[N];
bool vis[N];
void dfs(int x,int dep){
    b[dep]=x;
    vis[x]=1;
    for(int i=0;i<dep;i++){
        v[b[dep]].push_back(x);
    }
    f[x]=a[x];
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]]){
            dfs(v[x][i],dep+1);
            f[x]+=f[v[x][i]];
        }
    }
    b[dep]=0;
    if(f[x]==sum){
        g1.push_back(x);
    }
    if(f[x]==2*sum){
        g2.push_back(x);
    }
}
bool check(int a,int b){
    for(int i=0;i<v[b].size();i++){
        if(v[b][i]==a){
            return true;
        }
    }
    return false;
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>a[i]>>x;
        if(x==0){
            root=i;
        }
        else{
            v[x].push_back(i);
        }
        sum+=a[i];
    }
    if(sum%3!=0){
        cout<<0;
        return 0;
    }
    sum/=3;
    dfs(root,0);
    for(int i=0;i<g1.size();i++){
        for(int j=i+1;j<g1.size();j++){
            if(!check(g1[i],g1[j])&&!check(g1[j],g1[i])){
                ans++;
            }
        }
        for(int j=0;j<g2.size();j++){
            if(check(g1[i],g2[j])){
                ans++;
            }
        }
    }
    cout<<ans;
}
