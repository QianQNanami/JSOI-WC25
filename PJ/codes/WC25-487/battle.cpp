#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 310;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int ch, cl, jh, jl;
int n, m, ans = INT_MAX;
char a[N][N];
int vis[N][N];
void dfs(int x, int y, int s) {
	if (x == jh && y == jl) {
		ans = min(ans, s);
	}
	for (int i = 0; i < 4; i++) {
		int tx = dx[i] + x;
		int ty = dy[i] + y;
		if (tx < 1 || tx > n || ty < 1 || ty > m) {
			continue;
		}
		if (vis[tx][ty] == -1) {
			continue;
		}
//		cout << tx << " " << ty << " "<< s << endl;
		if (vis[tx][ty] == 1) {
			vis[tx][ty] = -1;
			dfs(tx, ty, s + 2);
			vis[tx][ty] = 1;
		}
		else {
			vis[tx][ty] = -1;
			dfs(tx, ty, s + 1);
			vis[tx][ty] = 0;
		}
	}
	return ;
}
signed main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'Y') {
				ch = i;
				cl = j;
			}
			if (a[i][j] == 'T') {
				jh = i;
				jl = j;
			}
			if (a[i][j] == 'R' || a[i][j] == 'S') {
				vis[i][j] = -1;
			}
			if (a[i][j] == 'B') {
				vis[i][j] = 1;
			}
		}
	}
	dfs(ch, cl, 0);
	if (ans == INT_MAX) {
		cout << "-1" << endl;
	}
	else {
		cout << ans << endl;
	}
	return 0;
}
