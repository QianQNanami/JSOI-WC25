#include "bits/stdc++.h"
using namespace std;

int m, n, ans;
int a[505][505], b[505][505];

signed main() {
	scanf("%d%d", &m, &n);
	for (int i = 1; i <= m ; i ++) {
		for (int j = 1; j <= n; j ++)
			scanf("%d", &a[i][j]);
	}
	for (int i = 1; i <= m ; i ++) {
		for (int j = 1; j <= n; j ++) {
			scanf("%d", &b[i][j]);
			if (b[i][j]) {
				ans = max(ans, min(abs(a[i + 1][j] - a[i][j]), min(abs(a[i - 1][j] - a[i][j]), min(abs(a[i][j + 1] - a[i][j]), abs(a[i][j - 1] - a[i][j])))));	
			}
		}
	}
	printf("%d\n", ans);
}
