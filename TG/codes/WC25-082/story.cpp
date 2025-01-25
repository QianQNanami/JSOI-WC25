#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 5;
int n, m, k, a[N];
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	cin >> n >> k >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	while (m--)  {
		int x, y; cin >> x;
		if (x == 1) {
			cin >> x >> y;
			a[x] = y;
		} else {
			cout << -1 << "\n";
		}
	} 
	return 0;
} 
