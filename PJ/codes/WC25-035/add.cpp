#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int main() {
	int n, m;
	cin >> n;
	for(int i = 1;i <= n; i++) {
		cin >> a[i];
	}
	cin >> m;
	int left, right;
	for(int i = 1;i <= m; i++) {
		cin >> left >> right;
		int ans=0;
		for (int j = left; j <= right; j++) {
			ans += a[j];
		}
		cout << ans << endl; 
	}
	return 0;
} 
