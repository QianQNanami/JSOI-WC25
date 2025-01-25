#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int n;
int root;
vector <int> g[N + 5];
int a[N + 5];
int siz[N + 5],dep[N + 5];
void dfs(int cur,int fa){
	dep[cur] = dep[fa] + 1;
	siz[cur] = a[cur];
	for(int i = 0;i < g[cur].size();i++){
		if(fa == g[cur][i])
		    continue;
		dfs(g[cur][i],cur);
		siz[cur] += siz[g[cur][i]];
	}
}
int p[N + 5][20];
bool isfa(int x,int y){
	if(dep[x] < dep[y]){
		swap(x,y);
	}
	cout << endl;
	for(int i = 20;i >= 0;i--){
		if(dep[p[x][i]] < dep[y])
		    continue;
		x = p[x][i];
	}
	if(x == y)
	    return true;
	return false;
}
int ans;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		int fath;
		cin >> a[i];
		cin >> fath;
		if(fath == 0)
		    root = i;
		if(i != root)
			g[fath].push_back(i);
		if(i != root)
			p[i][0] = fath;
		else
		    p[root][0] = 0;
	}
	for(int i = 1;i <= n;i++)
		for(int j = 1;j < 20;j++)
		    p[i][j] = p[p[i][j - 1]][j - 1];
	dfs(root,0);
	for(int i = 1;i <= n;i++){
		for(int j = i + 1;j <= n;j++){
			if(i != j && i != root && j != root){
				if(isfa(i,j)){
					int sum1,sum2,sum3;
					if(dep[i] < dep[j]){
						sum1 = siz[root] - siz[i];
						sum2 = siz[i] - siz[j];
						sum3 = siz[j];
					}else{
						sum1 = siz[root] - siz[j];
						sum2 = siz[j] - siz[i];
						sum3 = siz[i];
					}
					if(sum1 == sum2 || sum2 == sum3 || sum1 == sum3){
						ans++;
					}
				}else{
					int sum1,sum2,sum3;
					sum1 = siz[root] - siz[i] - siz[j];
					sum2 = siz[i];
					sum3 = siz[j];
					if(sum1 == sum2 || sum2 == sum3 || sum1 == sum3){
						ans++;
					}
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}/*



6
1 0
1 1
4 1
1 2
5 3
4 4


*/
