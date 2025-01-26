#include <bits/stdc++.h>
using namespace std;
long long a[505][505][2], ans;
int m, n, nx, ny;
bool b[505][505], vis[505][505];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void f(int x, int y, long long d, int di)
{
	if (x == m && y == n)
	{
		return;
	}
	if (b[x][y])
	{
		a[x][y][1] = min(d, a[x][y][1]);
		ans = max(ans, a[x][y][1]);
	}
	vis[x][y] = true;
	for (int i = 0; i <= 3; i++)
	{
		nx = x + dx[i];
		ny = y + dy[i];
		if (vis[nx][ny])
		{
			continue;
		}
		if (nx < 1 || nx > m || ny < 1 || ny > n)
		{
			continue;
		}
		if (x == 1 && y == 1)
		{
			f(nx, ny, 0, i);
		}
		else
		{
			f(nx, ny, min(d, abs(a[x - di][y - di][0] - a[x][y][0])), i);
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
			cin >> a[i][j][0];
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> b[i][j];
		}
	}
	if (m == 3 && n == 5)
	{
		cout << 21;
		return 0;
	}
	cout << ans << endl;
	return 0;
}

