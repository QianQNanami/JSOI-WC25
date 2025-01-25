#include <bits/stdc++.h>
using namespace std;

const int N = 5e4 + 9;
int a[N];
int n, k, m;

int main(){
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	cin >> n >> k >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	while(m--){
		int op;	cin >> op;
		if(op == 1){
			int p, v;	cin >> p >> v;
			a[p] = v;
		}
		else{
			int ans = 1e9;
			bool f;
			for(int l = k; l <= n; l++){
				vector<bool>vis(k + 1, 0);
				for(int i = 1; i + l - 1 <= n; i++){
					for(int j = i, x = 1; x <= l; j++, x++) vis[a[j]] = 1;
				}
				f = 1;
				for(int i = 1; i <= k; i++) if(!vis[k]) {f = 0; break;}
				if(f) {ans = l; break;}
			}
			if(ans == 1e9) cout << -1 << endl;
			else cout << ans << endl;
		}
	}
	return 0;
}

