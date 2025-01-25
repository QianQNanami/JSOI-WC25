#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 409;
int a[N][N], b[N][N];
int n, ans = -1e18;

signed main(){
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	int h = 0, l = 0;
	for(int l = 2; l <= n; l++){
		for(int i = 1; i + l - 1 <= n; i++){
			for(int j = 1; j + l - 1 <= n; j++){
				int x = a[i][j] + a[i + l - 1][j + l - 1];
				int y = a[i + l - 1][j] + a[i][j + l - 1];
				ans = max(ans, x - y);
			} 
		}
	}
	cout << ans;
	return 0;
} 
