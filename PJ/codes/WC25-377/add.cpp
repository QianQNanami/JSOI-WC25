#include <bits/stdc++.h>
using namespace std;
long long a[100005];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int m;
	cin >> m;
	long long  sum = 0;
	for (int i = 1; i <= m; i++)
	{
		sum = 0;
		int l, r;
		cin >> l >> r;
		for (int j = l; j <= r; j++)
		{
			sum += a[j];
		} 
		cout << sum << endl;
	}
	return 0;
}
