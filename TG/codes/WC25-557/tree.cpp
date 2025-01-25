#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 3;
int n, SS, a[N], s[N], fa[N], ans, cnt;
vector<int> e[N], last;
bool f[N];
int dfs(int u)
{
	int S = 0;
	s[u] = a[u];
	if (e[u].size() == 0)
	{
		last.push_back(u);
		return s[u];
	}
	for (auto v : e[u]) S += dfs(v);
	s[u] += S;
	return s[u];
}
bool dfs2(int u)
{
	if (f[u]) return 0;
	if (s[u] > SS / 3) return 0;
	if (s[u] == SS / 3) return 1;
	if (u == 0) return 0;
	f[u] = 1;
	return dfs2(fa[u]);
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("tree.in", "r", stdin);
	freopen("tree.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> fa[i];
		SS += a[i];
		e[fa[i]].push_back(i);
	}
	if (SS % 3 != 0)
	{
		cout << 0;
		return 0;
	}
	dfs(0);
	for (auto x : last)
		if (dfs2(x)) cnt++;
	ans = max(1, cnt * (cnt - 1) / 2);
	cout << ans << "\n";
	return 0;
}
