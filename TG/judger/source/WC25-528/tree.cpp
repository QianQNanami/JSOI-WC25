#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
const int N = 1e5 + 10;
int s, d[N], psb[N];
bool l[N];
int sn[N], qp = 0;
vector<int> g[N];
int t = 0, ans;
int dfs(int x, int fa){
    for(int i = 0;i < g[x].size(); i++){
        int v = g[x][i];
        if(v == fa) continue;
        d[x] += dfs(v, x);
    }
    return d[x];
}
int Dfs(int x, int sum, int fa){
    if(d[x] == qp){
        ans -= sum;
        sum ++;
        t ++;
    }
    for(int i = 0;i < g[x].size(); i++){
        int v = g[x][i];
        if(v == fa) continue;
        sn[x] += Dfs(v, sum, x);
    }
    if(d[x] == qp){
        return sn[x] + 1;
    }
    return sn[x];
}
signed main(){
    freopen("tree.in", "r", stdin);
    freopen("tree.out", "w", stdout);
    cin >> n;
    for(int i = 1;i <= n; i++){
        int x, y;
        cin >> x >> y;
        g[i].push_back(y);
        g[y].push_back(i);
        if(y == 0){
            s = i;
        }
        d[i] = x;
    }
    d[s] = dfs(s, 0);
    if(d[s] % 3 != 0){
        cout << "0" << endl;
        return 0;
    }
    qp = d[s] / 3;
    sn[s] = Dfs(s, 0, 0);
    ans += (t - 1) * t / 2;
    for(int i = 1;i <= n; i++){
        if(d[i] == qp * 2){
            ans += sn[i];
        }
    }
    cout << ans << endl;
    return 0;
}