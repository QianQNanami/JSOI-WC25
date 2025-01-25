#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int>G[N];
int w[N], sum[N], dep[N], pre[N];
int n, rt, ans;
bool flag;

void dfs(int u, int fa){
	sum[u] += w[u];
	for(auto v : G[u]){
		if(v == fa) continue;
		dep[v] = dep[u] + 1; 
		dfs(v, u);
		sum[u] += sum[v];
	}
} 

bool judge(int u, int x, int fa){
	for(auto v : G[u]){
		if(v == fa) continue;
		if(v == x) {flag = 1;break;}
		judge(v, x, u);
	}
	return flag;
}

int main(){
	freopen("tree.in", "r", stdin);
	freopen("tree.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> w[i] >> pre[i];
		if(pre[i] == 0) rt = i;
		else{
			G[i].push_back(pre[i]);
			G[pre[i]].push_back(i);
		}
	}
	dep[rt] = 1; 
	dfs(rt, 0);
	for(int i = 1; i <= n; i++) if(i != rt){
		for(int j = 1; j <= n; j++) if(j != rt && j != i){
			flag = 0;
			int ii = i, jj = j;
			if(dep[jj] < dep[ii]) swap(ii, jj);
			if(judge(ii, jj, pre[ii])) {
				int t1 = sum[rt] - sum[ii];
				int t2 = sum[ii] - sum[jj];
				if(t1 == t2 && t2 == sum[jj]) ans++;
			}
			else{
				int t1 = sum[rt] - sum[ii];
				int t2 = t1 - sum[jj];
				if(t1 == t2 && t2 == sum[jj]) ans++;
			}
		}
	}
	cout << ans / 2; 
	return 0;
}

