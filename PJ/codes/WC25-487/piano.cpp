#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e2 + 10;
int n, a[N], ans, zs = 0, ys = 0;
signed main() {
	cin >> n;
	if (n == 1) {
		cout << "1" << endl;
		return 0;
	}
	if (n == 2) {
		cout << "2" << endl;
		return 0;
	}
	while (n--) {
		int m;
		cin >> m;
		if (m > 18) {
			cout << "-1" << endl;
			return 0;
		}
		int zd = INT_MIN, zx = INT_MAX;
		for (int i = 1; i <= m; i++) {
			cin >> a[i];
			zd = max(zd, a[i]);
			zx = min(zd, a[i]);
		}
		if (zd - zx > 9) {
			cout << "-1" << endl;
			return 0;
		}
		if (m <= 9) {
			if (zs == 0) {
				ans++;
				zs = a[5];
			}
			else if (abs(zs - a[m - 4]) <= 1) {
				ans++;
			}
			else if (ys == 0) {
				ys = a[5];
			}
			else {
				ans += min(abs(zs - a[m - 4]), abs(ys - a[m - 4])) * min(abs(zs - a[m - 4]), abs(ys - a[m - 4]));
			}
		}
		else {
			cout << "-1" << endl;
			return 0;
		}
	}
	cout << ans << endl;
	return 0;
}
