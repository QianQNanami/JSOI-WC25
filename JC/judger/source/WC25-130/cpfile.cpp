#include <bits/stdc++.h>
using namespace std;
int n, ans, a[100010];
long long b[10010];
int main(){
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for (int i = 1; i < n; i++){
		b[i] = b[i - 1] + a[i - 1];
	}
	for (int i = 1; i < n; i++){
		ans += b[i];
	}
	cout << ans;
	return 0;
}
