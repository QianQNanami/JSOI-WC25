#include <bits/stdc++.h>
using namespace std;

const int maxn = 5e4 + 5;
int a[maxn], tmp[35], tong[35];

int main()
{
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	ios::sync_with_stdio(0);
	int n, k, m;
	cin>>n>>k>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
		tong[a[i]]++;
	}
	
	while(m--)
	{
		int op;
		cin>>op;
		if(op == 1)
		{
			int p, v;
			cin>>p>>v;
			tong[a[p]]--;
			tong[v]++;
			a[p] = v;
			continue;
		}
		
		bool need_continue = 0;
		for(int i = 1;i <= k;i++)
		{
			if(tong[i] == 0)
			{
				cout<<-1<<endl;
				need_continue = 1;
				break;
			}
		}
		if(need_continue)  continue;
		
		int ans = INT_MAX;
		for(int st = 1;st <= n;st++)
		{
			for(int ed = st + k - 1;ed <= n;ed++)
			{
				memset(tmp, 0, sizeof(tmp));
				for(int idx = st;idx <= ed;idx++)  tmp[a[idx]]++;
				bool all0 = 0;
				for(int idx = 1;idx <= k;idx++)
				{
					if(tmp[idx] == 0)
					{
						all0 = 1;
						break;
					}
				}
				if(!all0)  	ans = min(ans, (ed - st + 1));
			}
		}
		if(ans == INT_MAX)  cout<<-1<<endl;
		else  cout<<ans<<endl;
	}
	return 0;
}
