#include <bits/stdc++.h>
using namespace std;
char s[305][305];
int m, n, ans = INT_MAX, nx, ny;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool check(int x, int y, int lx, int ly)
{
	if (x == lx && y == ly)
	{
		return false;
	}
	if (x < 1 || x > m || y < 1 || y > n)
	{
		return false;
	}
	if (s[x][y] == 'R' || s[x][y] == 'S')
	{
		return false;
	}
	return true;
}
void dfs(int x, int y, int step, int lx, int ly)
{
	if (s[x][y] == 'T')
	{
		ans = min(ans, step);
	}
	else
	{
		for (int i = 0; i <= 3; i++)
		{
			nx = x + dx[i];
			ny = y + dy[i];
			if (check(nx, ny, lx, ly))
			{
				cout << nx << ny;
				if (s[nx][ny] == 'E')
				{
					dfs(nx, ny, step + 1, x, y);
				}
				if (s[nx][ny] == 'B')
				{
					dfs(nx, ny, step + 2, x, y);
				}
				if (s[nx][ny] == 'T')
				{
					dfs(nx, ny, step + 1, x, y);
				}
			}
		}
	}
}
int main()
{
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> s[i][j];
		}
	}
	dfs(1, 1, 0, 0, 0);
	if (ans == INT_MAX)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << ans << endl;
	}
	return 0;
}

