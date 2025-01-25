#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5;
struct node{
    int v,w;
};
vector<node>g[N];
int n;
ll ans;
ll sw[N];
ll sum;
unordered_map<ll,bool>h1 (N);
void dfs1(int x, int fa,int wi) {
    sw[x] = wi;
    for(auto it:g[x]) {
        if(it.v == fa) continue;
        dfs1(it.v, x,it.w);
        sw[x]+=sw[it.v];
    }
}
void dfs3(int x, int fa, int d) {
    if(sw[x] == sum/3) {
        ans++;
    }
    sw[fa] -= sw[x];
    for(auto it:g[x]) {
        if(it.v == fa || it.v == d || h1.count(it.v) == 1) continue;
        dfs3(it.v,x,d);
    }
    sw[fa] += sw[x];
}
void dfs2(int x, int fa) {
    if(sw[x] == sum/3) {
        dfs3(0,0,x);
    }
    sw[fa] -= sw[x];
    for(auto it:g[x]) {
        if(it.v == fa) continue;
        dfs2(it.v,x);
    }
    sw[fa] += sw[x];
    h1[x]=1;
}
int main() {
    freopen("tree.in","r",stdin);
    freopen("tree.out","w", stdout);
    cin >> n;
    for(int i=1;i<=n; i++) {
       int w,u;
       cin >> w >> u;
       g[u].push_back({i,w});
       g[i].push_back({u,w});
    }
    dfs1(0,0,0);
    sum = sw[0];
    long double tw = sw[0]*1.0/3;
    if(tw != sw[0]/3) {
        cout << 0 << endl;
        return 0;
    }
    dfs2(0,0);
    cout <<ans;
    return 0;
}
