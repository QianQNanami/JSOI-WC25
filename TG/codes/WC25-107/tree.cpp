#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
    int w,l,fa;
    vector<int> child;
    int sum=0;
}edge[100005];
int dfs(int id,int l){
    edge[id].l=l;
    edge[id].sum=edge[id].w;
    for(auto i:edge[id].child ){
        edge[id].sum+=dfs(i,l+1);
    }
    return edge[id].sum;
}
bool Find(int id,int x,int l){
    if(id==x){
        return true;
    }
    if(edge[id].l>l){
        return false;
    }
    return Find(edge[id].fa,x,l);
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    int n;
    scanf("%d",&n);
    int root=0;
    for(int i=1;i<=n;i++){
        scanf("%d%d",&edge[i].w,&edge[i].fa);
        if(edge[i].fa){
            edge[edge[i].fa].child.push_back(i);
        }
        else{
            root=i;
        }
    }
    dfs(root,1);
    int tot_sum=0,ans=0;
    for(int i=1;i<=n;i++){
        if(i==root){
            continue;
        }
        for(int j=i+1;j<=n;j++){
            if(j==root){
                continue;
            }
            if(edge[i].l<edge[j].l){
                swap(i,j);
            }//<<" "<<Find(i,j,edge[j].l)
            if(Find(i,j,edge[j].l)){
                if(2*edge[i].sum==edge[j].sum&&tot_sum-edge[j].sum==edge[i].sum){
                    ans++;
                }
            }
            else if(edge[i].sum==edge[j].sum&&edge[j].sum*3==tot_sum){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
/*
3
1 0
1 1
1 2
*/

