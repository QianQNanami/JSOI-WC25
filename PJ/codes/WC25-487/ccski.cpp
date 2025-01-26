#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 510;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int n, m, jbans = INT_MAX, ans = INT_MAX;
int ch, cl, jh, jl;
int a[N][N], f[N][N];
bool vis[N][N];
void dfs(int x, int y, int s) {
	if (x == jh && y == jl) {
		jbans = min(jbans, s);
	}
//	cout << x << " " << y << " " << s << endl;
	for (int i = 0; i < 4; i++) {
		int tx = dx[i] + x;
		int ty = dy[i] + y;
		if (tx < 1 || tx > n || ty < 1 || ty > m) {
			continue;
		}
		if (vis[tx][ty] == true) {
			continue;
		}
		vis[tx][ty] = true;
		dfs(tx, ty, max(s, abs(a[tx][ty] - a[x][y])));
		vis[tx][ty] = false;
	}
	return ;
}
signed main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	bool c = false;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> f[i][j];
			if (c == false && f[i][j] == 1) {
				c = true;
				ch = i, cl = j;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (f[i][j] == 1 && i != ch && j != cl) {
				jh = i, jl = j;
				jbans = INT_MAX;
				memset(vis, 0, sizeof vis);
				dfs(ch, cl, 0);
				ch = jh, cl = jl;
				ans = min(jbans, ans);
			}
		}
	}
	cout << ans + 1 << endl;
	return 0;
}
/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1

21
*/
