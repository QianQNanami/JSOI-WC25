#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

const int N = 1e5 + 10;
int fa[N], a[N], f[N];
int num[N], sum[N];
int n;
int find(int x)
{
	if(x == fa[x]) return x;
	else return fa[x] = x;
}
void dfs(int now, int w)
{
	num[now] += w;
	if(now == 0) return;
	else dfs(f[now], w);
}
int main()
{
	freopen("tree.in", "r", stdin);
	freopen("tree.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		fa[i] = i;
		cin >> a[i] >> f[i];
		//fa[i] = find(f[i]);
	}
	
	for(int i = 1; i <= n; i++)
	{
		dfs(i, a[i]);
	}
	
	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			for(int k = j + 1; k <= n; k++)
			{
				int ans1 = num[k];
				dfs(f[k], -num[k]);
				int ans2 = num[j];
				dfs(f[j], -num[j]);
				int ans3 = num[i];
				//cout << ans1 << " " << ans2 << " " << ans3 << endl; 
				if(ans1 == ans2 == ans3) ans++;
				dfs(k, ans1);
				dfs(j, ans2);
			}
		}
	}
	cout << ans;
}
/*
3
1 0
1 1
1 2
*/
