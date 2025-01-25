#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 3;
int n, k, Q, a[N], p[N], t[N];
bool flag = 1;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	cin >> n >> k >> Q;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		p[a[i]]++;
	}
	for (int i = 1; i <= k; i++)
		if (p[i] == 0)
		{
			flag = 0;
			break;
		}
	for (int o, x, y; Q; Q--)
	{
		cin >> o;
		if (o == 1)
		{
			cin >> x >> y;
			p[a[x]]--;
			a[x] = y;
			p[y]++;
			continue;
		}
		flag = 1;
		for (int i = 1; i <= k; i++)
			if (p[i] == 0)
			{
				flag = 0;
				break;
			}
		if (!flag)
		{
			cout << "-1\n";
			continue;
		}
		int ans = n;
		for (int i = 1; i <= k; i++) t[i] = 0;
		for (int i = 1; i < k; i++) t[a[i]]++;
		for (int i = k, j = 1, ff = 1; i <= n; i++, ff = 1)
		{
			t[a[i]]++;
			for (int q = 1; q <= k; q++)
				if (t[q] == 0)
				{
					ff = 0;
					break;
				}
			if (ff == 0) continue;
			while (j <= i - k && t[a[j]] > 1)
				t[a[j]]--, j++;
			ans = min(ans, i - j + 1);
			if (ans == k) break;
		}
		cout << ans << "\n";
	}
	return 0;
}
