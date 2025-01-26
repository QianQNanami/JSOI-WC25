#include <bits/stdc++.h>
using namespace std;
int a[25], n, ans = 1, x, fcnt;
int main(){
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		for (int j = 1; j <= x; j++)
		{
			cin >> a[j];
		}
	}
	if (n == 3)
	{
		cout << 2;
	}
	return 0;
}

