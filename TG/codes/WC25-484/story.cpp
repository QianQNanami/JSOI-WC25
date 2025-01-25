#include <bits/stdc++.h>
using namespace std;

int n, k, m, op, p, v;
vector<int> vec;

int main()
{
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	scanf("%d %d %d", &n, &k, &m);
	int x;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		vec.push_back(x);
	}
	while (m--)
	{
		cin >> op;
		if (op == 1)
		{
			cin >> p >> v;
			vec[p-1] = v;
		}
		else if (op == 2)
		{
			int res = INT_MAX;
			for (int i = 0; i < vec.size() - 1; i++)
			{
				for (int j = i + 1; j < vec.size(); j++)
				{
					if (j - i + 1 < k)
						break;
					bool vis[35];
					for (int x = i; x <= j; x++)
						vis[vec[x]] = true;
					bool flag = true;
					for (int i = 1; i <= k; i++)
						if (vis[i] == false)
						{
							flag = false;
							break;
						}
					if (flag)
						res = min(res, j - i + 1);
				}
			}
			if (res == INT_MAX)
				puts("-1");
			else
				printf("%d\n", res);
		}
	}
	return 0;
}
