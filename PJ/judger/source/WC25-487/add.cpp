#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int n, m;
int a[N], k[N];
signed main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	k[1] = a[1];
	for (int i = 2; i <= n; i++) {
		k[i] = k[i - 1] + a[i];
	}
//	for (int i = 1; i <= n; i++) {
//		cout << k[i] << " ";
//	}
	cin >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		cout << k[y] - k[x] + a[x] << endl;
	}
	return 0;
}
