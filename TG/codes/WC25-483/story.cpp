#include <iostream>
#include <cstring>
using namespace std;
#define int long long

const int N = 5e4;
int num[N + 5];
bool vis[N + 5];
int n, k, m;

signed main()
{
	
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	
	scanf("%lld%lld%lld", &n, &k, &m);
	for (int i = 1; i <= n; i++)
		scanf("%lld", &num[i]);
	for (int i = 1; i <= m; i++)
	{
		int op;
		scanf("%lld", &op);
		if (op == 1)
		{
			int p, v;
			scanf("%lld%lld", &p, &v);
			num[p] = v;
		} else
		{
			int ans = 0x3f3f3f3f;
			for (int j = 1; j <= n; j++)
			{
				memset(vis, false, sizeof(vis));
				int tot = 0;
				for (int l = j; l <= n; l++)
				{
					
					if (!vis[num[l]] && num[l] >= 1 && num[l] <= k)
						vis[num[l]] = true,
						tot++;
					if (tot == k)
					{
						ans = min(ans, l - j + 1);
						break;
					}
				}
			}
			if (ans == 0x3f3f3f3f)
				printf("-1\n");
			else
				printf("%lld\n", ans);
		}
	}
	
	return 0;
}
