#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

int n;
const int N = 5e4 + 10;
int a[N];
bool vis[N];

int main()
{
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + 1 + n);
	int ans = 0;
	for(int l = n - 1, r = n; l && r && r > l;)
	{
		if(a[l] * 2 <= a[r] && !vis[l] && !vis[r])
		{
			ans++;
			vis[l] = 1;
			vis[r] = 1;
			l--, r--;
			continue;
		}
		else if(a[l] * 2 > a[r])
		{
			l--;
			continue;
		}
		else if(a[l] * 2 <= a[r] && vis[l] == 1 && vis[r] == 0) 
		{
			l--;
			continue;
		}
		else if(a[l] * 2 <= a[r] && vis[l] == 0 && vis[r] == 1)
		{
			r--;
			continue;
		}
		else if(a[l] * 2 <= a[r] && vis[l] == 1 && vis[r] == 1)
		{
			l--;
			r--;
			continue;
		}
	}
	cout << ans;

}
/*
8
2 2 5 7 6 9 8 4 2
*/

