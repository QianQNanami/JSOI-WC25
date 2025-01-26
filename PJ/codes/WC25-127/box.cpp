#include "bits/stdc++.h"
#define int long long
using namespace std;

int a[8];

signed main() {
	while(1) {
		int ans = 0, sum = 0;
		for (int i = 1; i <= 6; i ++) {
			scanf("%lld", &a[i]);
			sum += a[i];
		}
		if (sum == 0) {
			return 0;
		}
		if (a[6])
			ans += a[6];
		if (a[5]) {
			ans += a[5];
			int k = a[5] * 11;
			a[1] -= k;
		}
		if (a[4]) {
			ans += a[4];
			int k = a[4] * 5;
			if (k >= a[2]) {
				a[2] = 0;
				k -= a[2];
				k *= 4;
				a[1] -= k;
			} else
				a[2] -= k;
		}
		if (a[3]) {
			if (a[3] % 4 == 0)
				ans += a[3] / 4;
			else {
				ans += a[3] / 4 + 1;
				int k = 36 - a[3] % 4 * 9;
				if (k / 4 >= a[2]) {
					a[2] = 0;
					k -= a[2] * 4;
					a[1] -= k;
				}
				else {
					a[2] -= k / 4;
					k %= 4;
					a[1] -= k;
				}
			}
		}
		if (a[2] > 0) {
			if (a[2] / 9 == 0)
				ans += a[2] / 9;
			else {
				ans += a[2] / 9 + 1;
				a[2] %= 9;
				int k = 36 - a[2] * 4;
				a[1] -= k;
			}
		}
		if (a[1] > 0)
			if (a[1] % 36 == 0)
				ans += a[1] / 36;
			else
				ans += a[1] / 36 + 1;
		printf("%lld", ans);
	}
}
