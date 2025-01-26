#include "bits/stdc++.h"
#define int long long
using namespace std;

const int N = 1e5 + 5;
int n, a[N], m, s[N];

signed main() {
	scanf("%lld", &n);
	for (int i = 1; i <= n; i ++)
		scanf("%lld", &a[i]);
	for (int i = 1; i <= n; i ++)
		s[i] = s[i - 1] + a[i];
	scanf("%lld", &m);
	for (int i = 1; i <= m; i ++) {
		int l, r;
		scanf("%lld%lld", &l, &r);
		printf("%lld\n", s[r] - s[l - 1]);
	}
}
