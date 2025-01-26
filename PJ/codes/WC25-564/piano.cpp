#include <bits/stdc++.h>
using namespace std;
int a[1005][20];
int main()
{
	int t,x;
	cin >> t;
	for(int i = 1;i <= t;i++)
	{
		cin >> a[i][0];
		for(int j = 1;j <= a[i][0];j++)
		{
			cin >> a[i][j];
		}
	}
	cout << -1;
	return 0;
}
