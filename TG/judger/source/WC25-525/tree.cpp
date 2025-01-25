#include <bits/stdc++.h>
#define int long long
using namespace std;

template<typename T>
T read(T x){
    T opt = 1, sum = 0;
    char ch = getchar();
    while(!isdigit(ch)) opt = (ch == '-') ? -1 : 1, ch = getchar();
    while( isdigit(ch)) sum = (sum << 1) + (sum << 3) + (ch ^ 48), ch = getchar();
    return opt * sum;
}
#define read read(0ll)

const int N = 1e5 + 5;

int sz[N];
vector<int> g[N];
bool vis[N];
int w[N];
map<int, int> mp;
vector<int> cun[N], cun1[N];
void dfs(int u){
//	cout << u << endl;
	sz[u] = w[u];vis[u] = 1;
	for(int i = 0;i < g[u].size();i ++ ){
		int v = g[u][i];
		if(vis[v]) continue;
		dfs(v);
		sz[u] += sz[v];
	}
}
int ans = 0;
int dep[N], siz[N], f[N], son[N], top[N]; 
void dfs1(int u, int fa, int deep){
	dep[u] = deep + 1;
	siz[u] = 1;
	f[u] = fa;
	int maxn = -1;
	for(int i = 0;i < g[u].size();i ++ ){
		int v = g[u][i];
		if(v == fa) continue;
		dfs1(v, u, deep + 1);
		siz[u] += siz[v];
		if(siz[v] > maxn){
			maxn = siz[v];
			son[u] = v;
		}
	}
}
void dfs2(int u, int topf){
	top[u] = topf;
	if(son[u]) dfs2(son[u], topf);
	for(int i = 0;i < g[u].size();i ++ ){
		int v = g[u][i];
		if(v == f[u] || v == topf) continue;
		dfs2(v, v);
	}
}
int LCA(int x, int y){
	while(top[x] != top[y]){
		if(dep[top[x]] < dep[top[y]]) swap(x, y);
		x = f[top[x]];
	}
	if(dep[x] < dep[y]) return x;
	else return y;
}
signed main()
{
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
	int n = read;
	int F = 0, sum = 0;
	for(int i = 1;i <= n;i ++ ){
		int v = read, p = read;
		if(!p) {
			F = i;
			w[i] = v;
			sum += v;
			continue;
		}
		g[i].push_back(p);
		g[p].push_back(i);
		w[i] = v; 
		sum += v;
	} 
	dfs1(F, 0, 0); dfs2(F, F);
	if(sum % 3 != 0) {
		cout << 0; return 0;
	}
//	cout << F << endl;
	dfs(F);
	for(int i = 1;i <= n;i ++ ) {
		mp[sz[i]] ++ ;
		if(sz[i] > 0) cun[sz[i]].push_back(i);
		else cun1[-sz[i]].push_back(i);
	}
	for(int i = 2;i <= n;i ++ ){
		if(mp[sz[i]] > 1){
			if(sz[i] % 3 == 0){
				ans += mp[sz[i]] - 1;
			}
		}
		int yexo = n / 3 * 2 - sz[i];
		if(mp[yexo]){
			if(yexo > 0){
				for(int j = 0;j < cun[yexo].size();j ++ ){
//					cout << LCA(cun[yexo][j], i) << endl;
					if(cun[yexo][j] == i) continue;
					if(LCA(cun[yexo][j], i) == i) ans ++ ;
				}
			}
			else {
				yexo = -yexo;
				for(int j = 0;j < cun1[yexo].size();j ++ ){
					if(cun1[yexo][j] == i) continue;
					if(LCA(cun1[yexo][j], i) == i) ans ++ ; 
				}
			}
		}
	}
	cout << ans << endl;
    return 0;
}
/*
3
1 0
1 1
1 2

*/
