#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int fa[maxn],w[maxn];
vector<int> vc[maxn];
int val[maxn];
bool vis[maxn];
void dfs(int root){
    if(!vis[root]){
        val[root]+=w[root];
        vis[root]=true;
    }
    for(auto v:vc[root]){
        dfs(v);
        val[root]+=val[v];
    }
}
bool is_fa(int x,int y){
    while(fa[y]!=0){
        y=fa[y];
        if(x==y)return true;
    }
    return false;
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int root=0;
    for(int i=1; i<=n; i++){
        int f,v;
        cin>>v>>f;
        fa[i]=f;w[i]=v;
        vc[f].push_back(i);
        if(fa[i]==0)root=i;
    }
    dfs(root);
    int ans=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i==root || j==root)continue;
            int sum1=0,sum2=0,sum3=0;
            if(is_fa(i,j)){
                sum1=val[root]-val[i];
                sum2=val[i]-val[j];
                sum3=val[j];
            }else if(is_fa(j,i)){
                sum1=val[root]-val[j];
                sum2=val[j]-val[i];
                sum3=val[i];
            }else{
                sum1=val[root]-val[i]-val[j];
                sum2=val[i];
                sum3=val[j];
            }
            if(sum1==sum2 && sum2==sum3)ans++;
        }
    }
    cout<<ans/2<<endl;
    return 0;
}
