#include <iostream>
#define ll unsigned long long
using namespace std;
const int N = 1e5 + 5;
ll a[N];
int n, m, l, r;
ll getsum(ll l, ll r)
{
	ll sum = 0;
	for (int i = l; i <= r; i++)
	{
		sum += a[i];
	}
	return sum;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	while (m--)
	{
		cin >> l >> r;
		cout << getsum(l, r) << endl;
	}
	return 0;
}
