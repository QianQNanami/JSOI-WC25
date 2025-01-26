#include <bits/stdc++.h>
using namespace std;
int a[100010], d[100010];
int m, n, l, r;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d[i] = a[i] + d[i - 1];
	}
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> l >> r;
		cout << d[r] - d[l - 1] << endl;
	}
	return 0;
}

