#include <iostream>
#include <vector>
using namespace std;
#define int long long

const int N = 1e5;
vector <int> G[N + 5];
int num[N + 5];
int fath[N + 5];
int Size[N + 5];
int ans[N + 5];
int n, m;
int cnt;
int tot;

void dfs_Size(int cur, int fa)
{
	Size[cur] = num[cur];
	for (auto son : G[cur])
	{
		if (son != fa)
		{
			dfs_Size(son, cur);
			Size[cur] += Size[son];
		}
	}
}

void dfs(int cur, int fa) 
{
	for (auto son : G[cur])
		if (son != fa)
			if (Size[son] == n / 3 * 2)
				ans[++cnt] = son;
}

void fin_dfs(int cur, int fa)
{
	for (auto son : G[cur])
		if (son != fa)
			if (Size[son] == n / 3)
				tot++;
}

signed main()
{
	
	freopen("tree.in", "r", stdin);
	freopen("tree.out", "w", stdout);
	
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld%lld", &num[i], &fath[i]);
		G[fath[i]].push_back(i);
		G[i].push_back(fath[i]);
	}
	
	dfs_Size(1, 0);
	dfs(1, 0);
	for (int i = 1; i <= cnt; i++)
		fin_dfs(ans[i], fath[ans[i]]);
	printf("%lld\n", tot);
	
	return 0;
}
