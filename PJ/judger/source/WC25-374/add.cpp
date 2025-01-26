#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
unsigned long long a[N], sum[N];

int main()
{
	int n, m;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	cin >> m;
	for(int i = 1; i <= m; i++)
	{
		int l, r;
		cin >> l >> r;
		cout << sum[r] - sum[l - 1] <<endl;
	}
	return 0;
}
