#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

const int N = 50010;
int n, k, m;
int a[N], num[N][35];
bool vis[N];
int main()
{
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	cin >> n >> k >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	if(n <= 300)
	{
		while(m--)
	{
		int op;
		cin >> op;
		if(op == 2)
		{
			int ans = 1e9;
			for(int i = 1; i <= n; i++)
			{
				int now = 0, j = i;
				memset(vis, 0, sizeof vis);
				for(; j <= n; j++)
				{
					if(vis[a[j]] == 0)
					{
						vis[a[j]] = 1;
						now++;
					}
					if(now == k) break;
				}
				if(now == k) ans = min(ans, j - i + 1);
			}
			if(ans == 1e9) cout << "-1" << endl;
			else cout << ans;
		}
		else if(op == 1)
		{
			int p, v;
			cin >> p >> v;
			a[p] = v;
		}
	}
	}
	else
	{
		for(int i = 1; i <= n; i++)
		{
			num[a[i]][i] = i;
			for(int j = 1; j <= k; j++)
			{
				if(j != a[i])
				{
					num[j][i] = num[j][i - 1];
				}
			}
		}
		while(m--)
		{
			int op;
			cin >> op;
			if(op == 1)
			{
				int p, v;
				cin >> p >> v;
				int q = a[p], site = num[a[p]][p];
				a[p] = v;
				for(int i = p; i <= n; i++)
				{
					if(a[i] == v) break;
					num[v][i] = p;
					num[q][i] = site;
				}
			}
			else
			{
				int ans = 1e9;
				bool flag = 1;
				for(int i = 1; i <= n; i++)
				{
					int sum = i;
					for(int j = 1; j <= k; j++)
					{
						if(num[j][i] == 0) 
						{
							flag = 0;
							break;
						}
						else
						{
							sum = min(sum, num[j][i]);
						}
					}
					if(flag == 1) ans = min(ans, i - sum + 1);
				}
				if(ans == 1e9) cout << "-1" << endl;
				else cout << ans << endl;
			}
		}
	}

}
/*
4 3 5
2 3 1 2
2
1 3 3
2
1 1 1
2
*/
/*
6 3 6
1 2 3 2 1 1
2
1 2 1
2
1 4 1
1 6 2
2
*/
