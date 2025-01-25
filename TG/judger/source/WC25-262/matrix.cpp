#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
const int N = 410;

int a[N][N], sum1[N][N], sum2[N][N];
int n;
bool vis1[N][N], vis2[N][N];
void ceshi()
{
	cout << endl;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++) cout << sum1[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++) cout << sum2[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}
int main()
{
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			for(int k = 0; k + i <= n && k + j <= n; k++)
			{
				if(vis1[i + k][j + k]) break;
				sum1[i + k][j + k] = sum1[i + k - 1][j + k - 1] + a[i + k][j + k];
				vis1[i + k][j + k] = 1;
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			for(int k = 0; i + k <= n && j - k >= 1; k++)
			{
				if(vis2[i + k][j - k]) break;
				sum2[i + k][j - k] = sum2[i + k - 1][j - k + 1] + a[i + k][j - k];
				vis2[i + k][j - k] = 1;
			}
		}
	}
	//ceshi();
	int ans = -1e9;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			for(int k = 1; i - k >= 1 && j - k >= 1; k++)
			{
				ans = max(ans, (sum1[i][j] - sum1[i - k - 1][j - k - 1]) - (sum2[i][j - k] - sum2[i - k - 1][j + 1]));
			}
		}
	}
	cout << ans;

}
/*
2
1 -2
4 5
*/
/*
3
1 2 3
4 5 6
7 8 9
*/
/*
3
-3 4 5
7 9 -2
1 0 -6
*/

