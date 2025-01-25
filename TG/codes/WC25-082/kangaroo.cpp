#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 5;
int n, a[N], cnt;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> a[i]; 
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n / 2; i++) {
		int t = n / 2 + 1;
		for (int j = n / 2 + 1; j <= n; j++) {
			if (a[j] / 2 >= a[i]) {
				cnt++; break;
			}
			else t++;
		}
	}
	cout << cnt;
	return 0;
} 
