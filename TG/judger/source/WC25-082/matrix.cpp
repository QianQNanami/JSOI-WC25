#include <bits/stdc++.h>
using namespace std;
const int N = 4e2 + 5;
int n, a[N][N], ans = -9999999;
int fun(int x, int y, int l) {
	int s1 = 0, s2 = 0;
	if (l == 1) return 0;
	for (int i = 1; i <= l; i++) { 
		s1 += a[x + i - 1][y + i - 1];
//		cout << x + i - 1 << " " << y + i - 1 << "\n"; 
	} 
	for (int i = 1; i <= l; i++) {
		s2 += a[x + i - 1][y + l - 1 - i + 1];
//		cout << x + i - 1 << " " << y + l - 1 - i + 1 << "\n";
	}
//	cout << s1 << " " << s2; 
//	cout << "\n";
	return s1 - s2;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int l = 1; l <= n; l++) 
		for (int i = 1; i <= n - l + 1; i++) 
			for (int j = 1; j <= n - l + 1; j++)
				ans = max(ans, fun(i, j, l));
	cout << ans;
	return 0;
} 
