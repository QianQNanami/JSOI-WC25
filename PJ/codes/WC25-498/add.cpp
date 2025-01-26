#include<bits/stdc++.h>
using namespace std;
long long n, m, a[100005];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int b;
		cin >> b;
		a[i] = a[i-1] + b;
	}
	cin >> m;
	while (m--) {
		long long r, l;
		cin >> r >> l;
		cout << a[l] - a[r-1];
	}
	return 0;
}

