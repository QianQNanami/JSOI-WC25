#include <bits/stdc++.h>
using namespace std;
const int N = 300 + 5;
char a[N][N];
int m, n, ans = INT_MAX;
int sa, sb;
int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
bool vis[N][N];
void dfs(int x, int y, int cnt)
{
	if (cnt > ans)
	{
		return ;
	}
	if (a[x][y] == 'T')
	{
		ans = min(cnt, ans);
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 1 || nx > m || ny < 1 || ny > n || a[nx][ny] == 'R' || a[nx][ny] == 'S' || vis[nx][ny])
		{
			continue;
		}
		if (a[nx][ny] == 'B')
		{
			vis[nx][ny] = 1;
			dfs(nx, ny, cnt + 2);
			vis[nx][ny] = 0;
		}
		else
		{
			vis[nx][ny] = 1;
			dfs(nx, ny, cnt + 1);
			vis[nx][ny] = 0;
		}
	}
}

int main()
{
	scanf("%d%d", &m, &n);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 'Y')
			{
				sa = i, sb = j;
			}
		}
	}
	dfs(sa, sb, 0);
	if (ans == 2147483647)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return 0;
}
