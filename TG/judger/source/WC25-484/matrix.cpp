#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL grid[405][405];
LL dylan(int sx, int sy, int tx, int ty)
{
	LL res1 = 0, res2 = 0;
	for(int i = sx, j = sy; i <= tx && j <= ty; i++, j++)
		res1 += grid[i][j];
	for(int i = sx, j = ty; i <= tx && j >= sy; i++, j--)
		res2 += grid[i][j];
	return res1 - res2;
}

int main()
{
	freopen ("matrix.in", "r", stdin);
	freopen ("matrix.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> grid[i][j];
	LL res = 0;
	for (int k = 2; k <= n; k++)
	{
		for (int i = 1; i <= n - k + 1; i++)
		{
			for (int j = 1; j <= n - k + 1; j++)
			{
				res = max(res, dylan(i, j, i + k - 1, j + k - 1));
			}
		}
	}
	cout << res << endl;
	return 0;
}
