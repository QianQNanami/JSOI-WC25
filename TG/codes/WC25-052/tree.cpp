#include <bits/stdc++.h>
#define int long long
// #define LOCAL
const int N = 1e6 + 10;

using namespace std;

int n, a[N], f[N], s;
vector<int> g[N];

void dfs(int u){
    for(auto v: g[u]){
        dfs(v);
        a[u] += a[v];
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef LOCAL
    freopen("tree.in", "r", stdin);
    freopen("tree.out", "w", stdout);
    #endif
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i] >> f[i];
        if(f[i] == 0) s = i;
        else g[f[i]].push_back(i);
    }
    dfs(s);
    if(a[s] % 3){
        cout << 0;
        return 0;
    }
    return 0;
}