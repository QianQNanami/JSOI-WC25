#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[100005];
signed main()
{
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	cin >> m;
	int l,r;
	while(m--)
	{
		cin >> l >> r;
		cout << a[r] - a[l - 1] << endl;
	}
	return 0;
}

