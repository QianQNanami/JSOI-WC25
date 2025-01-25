#include<bits/stdc++.h>
using namespace std;
struct node{
    int to,w;
};
vector<node> tree[100005];
void add(int x,int y,int z){
    tree[x].push_back({y,z});
}
int n;
queue<int> q;
int vis[100005];
int bfs(int a,bool is_son){
    int cnt=0;
    q.push(a);
    vis[a]=1;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        for(auto e:tree[f]){
            if(vis[e.to]) continue;
            q.push(e.to);
            vis[e.to]=1;
            cnt+=e.w;
        }
    }
    return cnt;
}
int main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    cin>>n;
    int root;
    for(int i = 1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        if(y==0){
            root=y;
            continue;
        }
        add(y,i,x);
    }
    int ans=0;
    for(int i = 2;i<=n;i++){
        for(int j = 2;j<=n;j++){
            if(i>=j) continue;
            int a=bfs(i,1);
            int b=bfs(j,1);
            int c=bfs(root,0);
            if(a==-1||b==-1) continue;
            if(a==b&&b==c&&a==c) ++ans;
        }

    }
    cout<<ans;
    return 0;
}

