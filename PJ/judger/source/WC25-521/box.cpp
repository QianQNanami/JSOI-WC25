#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[10],ans = 0;
string in;
signed main()
{
//	freopen("in.txt","r",stdin);
	while(getline(cin,in))
	{
		if(in == "0 0 0 0 0 0") return 0;
		ans = 0;
		//1236chushi
		for(int i = 0,j = 1;i < in.size();i++)
		{
			if(in[i] == ' ')
			{
				j++;
				continue;
			}
			a[j] = a[j] * 10 + in[i] - '0';
		}
		for(int i = 6;i >= 1;i--)
		{
			if(i != 4 && i != 5)
			{
				int now = a[i] * i * i / 36;
				a[i] -= now * 36 / i / i;
				ans += now;
			}
		}
		//5
		if(a[5] != 0)
		{
			a[1] -= min(a[1],a[5] * 7);
			ans += a[5];
		}
		//4
		if(a[4] != 0)
		{
			int k = a[4] * 20;
			if(k >= a[2]) a[2] = 0,k -= a[2],a[1] -= min(a[1],k);
			else a[2] -= k;
			ans += a[4];
		}
		//3
		if(a[3] != 0)
		{
			ans++;
			if(a[3] == 1)
			{
				int t = 5;
				if(a[2] >= t)
					a[2] -= t,t = 0;
				else
					t -= a[2],a[2] = 0;
				int sp = 7 + t * 4;
				a[1] -= min(a[1],sp);
			}
			if(a[3] == 2)
			{
				int t = 3;
				if(a[2] >= t)
					a[2] -= t,t = 0;
				else
					t -= a[2],a[2] = 0;
				int sp = 6 + t * 4;
				a[1] -= min(a[1],sp);
			}
			if(a[3] == 3)
			{
				int t = 1;
				if(a[2] >= t)
					a[2] -= t,t = 0;
				else
					t -= a[2],a[2] = 0;
				int sp = 5 + t * 4;
				a[1] -= min(a[1],sp);
			}
		}
		//2
		if(a[2] != 0)
		{
			int sp = 36 - a[2] * 4;
			ans++;
			a[1] -= min(sp,a[1]);
		}
		//1
		if(a[1] != 0)
		{
			ans++;
		}
		cout << ans - 18446744073709551454 - 162 << endl;
	}
	return 0;
}
