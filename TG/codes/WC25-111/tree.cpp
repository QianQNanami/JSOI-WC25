#include<bits/stdc++.h>
using namespace std;
int v[100010];
vector<int>e[100010];
int n;
int troo;
int z[100010];
int maxx;
int ans=0;
void dfs(int x){
    z[x]=v[x];
    for(int i=0;i<e[x].size();i++){
        dfs(e[x][i]);
        z[x]+=z[e[x][i]];
    }
}
int dfs2(int x,int dept){
    int num=0;
    for(int i=0;i<e[x].size();i++){
        if(z[x]-z[e[x][i]]==maxx/3&&z[e[x][i]]==maxx/3){
            num+=1+dept;
            num+=dfs2(e[x][i],dept+1);
        }
        else{
            num+=dfs2(e[x][i],dept);
        }
    }
    return num;
}
int a[100010];
struct node{
    int num,v;
};
node dfs3(int x){
    int num=0,va=0;
    for(int i=0;i<e[x].size();i++){
        a[i]=0;
        if(z[e[x][i]]==(maxx/3)){
            a[i]=1;
        }
        int w[100010];
        for(int j=0;j<=i;j++){
            w[j]=a[j];
        }
        node df=dfs3(e[x][i]);
        for(int j=0;j<=i;j++){
            a[j]=w[j];
        }
        num=num+df.num;
        a[i]=a[i]+df.v;
        va+=a[i];
    }
    for(int i=0;i<e[x].size();i++){
        for(int j=i+1;j<e[x].size();j++){
            num+=a[i]*a[j];
        }
    }
    return {num,va};
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        int f;
        cin>>v[i]>>f;
        maxx+=v[i];
        if(f==0){
            troo=i;
        }
        else{
            e[f].push_back(i);
        }
    }
    if(maxx%3!=0){
        cout<<0;
        return 0;
    }
    dfs(troo);
    ans+=dfs2(troo,0)+dfs3(troo).num;
    cout<<ans;
    return 0;
}
