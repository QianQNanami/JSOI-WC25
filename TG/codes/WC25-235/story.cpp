#include<bits/stdc++.h>
using namespace std;
int n,k,m,a[50010];
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i <= m;i++)
	{
		int c,p,v;
		cin>>c;
		if(c == 1)
		{
			cin>>p>>v;
			a[p] = v;
		}
		else
		{
			int st[50],flag = 0,ans = 999999999;
			for(int i = 1;i <= n;i++)
			{
				for(int j = i + k - 1;j <= n;j++)
				{
					memset(st,0,sizeof(st));
					if(j - i + 1 >= ans && ans > 0)
					{
						break;
					}
					for(int q = i;q <= j;q++)
					{
						st[a[q]]++;
					}
					for(int e = 1;e <= k;e++)
					{
						if(st[e] == 0)
						{
							flag = 1;
							break;
						}
					}
					if(!flag)
					{
						ans = min(ans,j - i + 1);
					}
				}
			}
			if(ans == 999999999)
			{
				cout<<-1<<endl;
			}
			else
			{
				cout<<ans<<endl;
			}
			
		}
	}
	return 0;
}

