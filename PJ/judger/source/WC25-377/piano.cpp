#include <bits/stdc++.h>
using namespace std;
long long a[100005];
long long l[100005];
long long r[100005];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <+ n; i++)
	{
		cin >> a[i];
	}
	int m;
	cin >> m;
	long long  sum = 0;
	for (int i = 1; i <= m; i++)
	{
		cin >> l[i] >> r[i];
		for (int j = l[i]; j <= r[i]; j++)
		{
			sum += a[j];
		} 
		cout << sum << endl;
		sum = 0;

	}
	return 0;
}
