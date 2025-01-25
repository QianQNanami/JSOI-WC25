#include <bits/stdc++.h>
using namespace std;

const int maxn = 405;
int a[maxn][maxn], sum1[maxn][maxn], sum2[maxn][maxn];

int main()
{
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)  cin>>a[i][j];
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			sum1[i][j] = sum1[i - 1][j - 1] + a[i][j];
			sum2[i][j] = sum2[i - 1][j + 1] + a[i][j];
		}
	}
	int ans = INT_MIN;
	for(int i = 2;i <= n;i++)
	{
		for(int j = 2;j <= n;j++)
		{
			//right-down point
			int nx = i - 1, ny = j - 1;
			while((nx >= 1 && nx <= n) && (ny >= 1 && ny <= n))
			{
				int ds = sum1[i][j] - sum1[nx - 1][ny - 1] - (sum2[i][ny] - sum2[nx - 1][j + 1]);
				ans = max(ans, ds);
				nx--;
				ny--;
			}
		}
	}
	cout<<ans;
	return 0;
}
