#include <bits/stdc++.h>
using namespace std;
vector<int> p[100005];
int w[100005];
int n, ans = 0;
void dfs(int root){
		for(auto y : p[root]){
			dfs(y);
			w[root] += w[y];
		}
	return ;
}
bool b = 0;
void check(int u, int v){
	if(u == v){
		b = 1;
		return ;
	}
	for(auto y : p[u]){
		check(y, v);
	}
}
int main(){
	freopen("tree.in", "r", stdin);
	freopen("tree.out", "w", stdout);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int u, v;
		scanf("%d%d", &u, &v);
		p[v].push_back(i);
		w[i] = u;
	}
	dfs(1);
	if(w[1] % 3){
		printf("0");
		return 0;
	}
	int m = w[1] / 3;
	for(int i = 2; i < n; i++){
		if(w[i] < m) continue;
		for(int j = i + 1; j <= n; j++){
			if(w[j] < m) continue;
			b = 0;
			check(i, j);
			if(!b){
				if(w[i] == w[j] && w[i] == w[1] - w[i] - w[j])
					ans++;
			}
			else{
				if(w[j] == w[i] - w[j] && w[j] == w[1] - w[i])
					ans++;
			}
		}
	}
	printf("%d", ans);
	return 0;
}
