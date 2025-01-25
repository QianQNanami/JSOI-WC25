#include <bits/stdc++.h>
using namespace std;

int n;
const int maxn = 5e4 + 5;
int a[maxn];
bool vis[maxn];

int find(int t)
{
	int l = 1, r = n;
	while(l < r)
	{
		int mid = (l + r) / 2;
		if(a[mid] >= t)  r = mid;
		else  l = mid + 1;
	}
	if(a[l] < t)  return -1;
	return l;
}

int main()
{
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i = 1;i <= n;i++)  cin>>a[i];
	if(n <= 5e3)
	{
		int ans = 0;
		for(int i = 1;i <= n;i++)
		{
			//a[i]
			int t = 2 * a[i];
			int index = 0, num = INT_MAX;
			for(int j = 1;j <= n;j++)
			{
				if(j == i)  continue;
				if((a[j] >= t) && (vis[j] == 0))
				{
					if(a[j] < num)
					{
						index = j;
						num = a[j];
					}
				}
			}
			if(index != 0)
			{
				vis[index] = 1;
				vis[i] = 1;
				ans++;
			}
		}
		cout<<ans;
	}
	else
	{
		sort(a + 1, a + n + 1);
		int ans = 0;
		for(int i = 1;i <= n;i++)
		{
			int t = 2 * a[i];
			int idx = find(t);
			if(idx != -1)
			{
				vis[idx] = 1;
				vis[i] = 1;
				ans++;
			}
		}
		cout<<ans;
	}
	return 0;
}
