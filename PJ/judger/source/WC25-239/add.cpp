#include <iostream>
#define ll long long
using namespace std;
ll n, m, a[100005], p[100005],
l[100005], r[100005];
int main() {
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		p[i] = a[i] + p[i - 1];
	}
	cin >> m;
	for (ll i = 1; i <= m; i++) {
		cin >> l[i] >> r[i];
	}
	for (ll i = 1; i <= m; i++) {
		cout << p[r[i]] - p[l[i] - 1]
		<< endl;
	}
	return 0;
}
