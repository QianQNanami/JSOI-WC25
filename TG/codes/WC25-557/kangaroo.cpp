#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 3;
int n, a[N], ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	int x = n;
	for (int i = n / 2; i; i--)
	{
		if (a[i] <= a[x] / 2)
		{
			ans++;
			x--;
		}
	}
	cout << ans << "\n";
	return 0;
}
