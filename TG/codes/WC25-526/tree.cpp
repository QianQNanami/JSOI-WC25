#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 1e5;
int n;
int fa[N + 5],s[N + 5],ans;
vector<int> e[N + 5];
void dfs(int cur,int f){
	for(int i = 0;i < e[cur].size();i++){
		int son = e[cur][i];
		if(s[son]) dfs(son,cur);
		s[cur] += s[son];
	} 
}
signed main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		int v,p;
		cin >> v >> p;
		s[i] = v;
		e[p].push_back(i);
	}
	dfs(1,0);//计算子树权值和 
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			for(int k = 1;k <= n;k++){
				if(s[i] - s[j] - s[k] == s[j] && s[i] - s[j] - s[k] == s[k] && s[k] == s[j]){
					ans++;
				}
				if(s[i] - s[j] - s[k] == s[j] && s[j] - s[k] == s[k] && s[i] - s[j] - s[k] == s[k]){
					ans++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
