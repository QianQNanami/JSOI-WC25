#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 5;
inline int read() {
    int x = 0, f = 1;
    char c = getchar();
    while (c < '0' || c > '9') {if (c == '-') f = -1; c = getchar();}
    while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
    return x * f;
}
struct node{
    int w, fa;
}G[N];
vector<int> e[N];
int n, father, ans;
inline int solve(int x) {
    int cnt = G[x].w;
    if (e[x].empty()) return G[x].w;
    for (int i = 0; i < e[x].size(); i++) {
        int u = e[x][i];
        if (u == 0) continue;
        cnt += solve(u);
    }
    return cnt;
}
signed main(void) {
    freopen("tree.in", "r", stdin);
    freopen("tree.out", "w", stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    n = read();
    for (int i = 1; i <= n; i++) {
        int v = read(), p = read();
        G[i].w = v, G[i].fa = p;
        e[p].push_back(i);
        if (p == 0) father = i;
    }
    for (int i = 1; i < n; i++) {
        if (i == father) continue;
        for (int j = i + 1; j <= n; j++) {
            if (j == father) continue;
            int u = G[i].fa, v = G[j].fa;
            G[i].fa = 0, G[j].fa = 0;
            for (int k = 0; k < e[u].size(); k++) {
                if (e[u][k] == i) e[u][k] = 0;
            }
            for (int k = 0; k < e[v].size(); k++) {
                if (e[v][k] == j) e[v][k] = 0;
            }
            //cout << solve(i) << " " << solve(j) << " ";
            if (solve(i) == solve(j) && solve(i) == solve(father)) ans++;
            G[i].fa = u, G[j].fa = v;
            e[u].push_back(i), e[v].push_back(j);
        }
    }
    cout << ans << '\n';
    return 0;
}
