#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[10];
signed main() {
	while (1) {
		int ans = 0;
		for (int i = 1; i <= 6; i++) {
			cin >> a[i];
			ans = ans + a[i] * (i * i);
		}
//		cout << ans << endl;
		if (ans == 0) {
			break;
		}
		else {
			if (ans % 36 == 0) {
				cout << ans / 36 << endl;
			}
			else {
				cout << ans / 36 + 1 << endl;
			}
		}
	}
	return 0;
}
