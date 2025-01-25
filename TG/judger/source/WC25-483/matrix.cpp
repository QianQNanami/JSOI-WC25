#include <iostream>
using namespace std;
#define int long long

const int N = 4e2;
int num[N + 5][N + 5];
int presum1[N + 5][N + 5],
	presum2[N + 5][N + 5];
int n;

signed main()
{
	
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%lld", &num[i][j]);
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			presum2[i][j] = presum2[i - 1][j + 1] + num[i][j],
			presum1[i][j] = presum1[i - 1][j - 1] + num[i][j];
	int ans = -1;
	for (int i = 1; i < n; i++)
		for (int j = 1; j < n; j++)
			for (int k = 2; k <= n - max(i, j) + 1; k++)
			{
				int sum1 = presum1[i + k - 1][j + k - 1] - presum1[i - 1][j - 1];			
				int sum2 = presum2[i + k - 1][j] - presum2[i - 1][j + k];
				ans = max(ans, sum1 - sum2);			
			}
	printf("%lld\n", ans);
	
	return 0;
}
