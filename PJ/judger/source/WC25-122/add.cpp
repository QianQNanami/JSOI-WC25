#include <bits/stdc++.h>
using namespace std;
int n,m,num[100005];
int main()
{
	cin >> n;
	for (int i = 0;i<n;i++)
	{
		cin >> num[i];
	}
	cin >> m;
	for(int i = 1;i<=m;i++)
	{
		int s,e,ans = 0;
		cin >> s >> e;
		for (int i = s-1;i<e;i++)
		{
			ans += num[i];
		}
		cout << ans << endl;
	}
	return 0;
}
