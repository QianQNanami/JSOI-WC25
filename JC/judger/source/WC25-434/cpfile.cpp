#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, h  =0;
	cin >> n;
	int s[n];
	int t;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> t;
		s[i] = t;
		h += s[i];
	}
	cout << h;
	return 0;
}

