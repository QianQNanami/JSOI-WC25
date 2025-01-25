#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, mymap[405][405];
ll num[405][405], sum[404][405];
ll maxn;
int main() {
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	scanf("%d", &n);
	maxn = INT_MIN;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			scanf("%d", &mymap[i][j]);
			num[i][j] = num[i - 1][j - 1] + mymap[i][j];
			sum[i][j] = sum[i - 1][j + 1] + mymap[i][j];			
		}
	}
	for(int k = 2; k <= n; k++){
		int x, y;
		for(int i = 1; i <= n - k + 1; i++) {
			for(int j = 1; j <= n - k + 1; j++) {
				ll ans = 0;
				x = num[i + k - 1][j + k - 1] - num[i - 1][j - 1];
				y = sum[i + k - 1][j] - sum[i - 1][j + k];
				ans = x - y;
				maxn = max(ans, maxn);
			}
		}
	}
	printf("%lld", maxn);
	return 0;
}

