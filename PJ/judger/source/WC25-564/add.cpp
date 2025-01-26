#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005][2];
int main()
{
	int n,m;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	cin >> m;
	for(int i = 1;i <= m;i++)
	{
		cin >> b[i][0] >> b[i][1];
	}
	for(int i = 1;i <= n;i++)
	{
		a[i] += a[i-1];
	}
	for(int i = 1;i <= m;i++)
	{
		cout << a[b[i][1]]-a[b[i][0]-1] << endl;
	}
	return 0;
}
