#include <bits/stdc++.h>
using namespace std;
long long a[7];
int ans = 1, cnt, tot;
bool f = true;
int main()
{
	while (f)
	{
		for (int i = 1; i <= 6; i++)
		{
			cin >> a[i];
			if (a[i] == 0)
			{
				cnt++;
			}
		}
		if (cnt == 6)
		{
			break;
		}
		for (int i = 1; i <= 6; i++)
		{
			tot = tot + a[i] * i * i;
			while (tot > 36)
			{
				ans++;
				tot = tot % 36;
			}
		}
		cout << ans << endl;
		cnt = 0;
		ans = 1;
		tot = 0;
	}
	return 0;
}

