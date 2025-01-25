#include <iostream>
#include <algorithm>
using namespace std;
#define int long long

const int N = 5e4;
int num[N + 5];
int n, ans;

signed main()
{
	
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++)
		scanf("%lld", &num[i]);
	
	sort(num + 1, num + n + 1);
	for (int i = n; i > 1; i--)
	{
		for (int j = i - 1; j >= 1; j--)
		{
			if (num[i] == -1 || num[j] == -1)
				continue;
			if (num[i] >= num[j] * 2)
				ans++,
				num[i] = -1,
				num[j] = -1;
		}
	}
		
	printf("%lld\n", ans);
	
	return 0;
}
