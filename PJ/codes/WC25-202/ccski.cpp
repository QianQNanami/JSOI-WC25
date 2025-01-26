#include <iostream>
using namespace std;

const int N = 500 + 5;
int m, n, ans = -1;
int a[N][N], w[N][N];

int main()
{
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> w[i][j];
		}
	}
	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			ans = max(ans, abs(a[i][j] - a[i][j + 1]));
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			ans = max(ans, abs(a[i][j] - a[i + 1][j]));
		}
	}
	cout << ans << endl;
	return 0;
}
