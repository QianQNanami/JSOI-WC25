#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 403;
int n, a[N][N], s[N][N], ans = -2e9;
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) cin >> a[i][j];
	for (int i = 1; i <= n; i++) s[1][i] = a[1][i];
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= n; j++)
			s[i][j] = s[i - 1][j + 1] + a[i][j];
	for (int i = 2; i <= n; i++)
		for (int k = 2; k <= i; k++)
			for (int j = n - k + 1; j; j--)
				ans = max(ans, a[i - k + 1][j] + a[i][j + k - 1] - (s[i][j] - s[i - k][j + k]));
	cout << ans << "\n";
	return 0;
}
