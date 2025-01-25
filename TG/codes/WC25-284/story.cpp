#include <bits/stdc++.h> 
using namespace std;
int n,m,a[50005],k,p,v,z,d[50005],o;
int main()
{
	//freopen("story.in","r",stdin);
	//freopen("story.out","w",stdout);
	cin >> n >> k >> m;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i<=m;i++)
	{
		cin >> z;
		if(z == 1)
		{
			cin >> p >> v;
			a[p]=v;
		}
		if(z==2)
		{
			int ans = 0x7FFFFFFF;
			for(int i = 1;i<=n;i++)
			{
				int cnt = 0;
				int o = 0;
				memset(d,0,sizeof(d));
				for(int j = i;j<=n+1;j++)
				{
					bool flag1 = 1;
					if(j == n+1)
					{
						break;
					}
					o++;
					for(int k2 = 1;k2<=o;k2++)
					{
						if(a[j]==d[k2])
						{
							bool flag1=0;
							break;
						}
					}
					d[o]=a[j];
					if(flag1)
						cnt++;
					if(cnt == k)
					{
						ans = min(ans,cnt);
						break;
					}
					
				}
			}
			cout << ans << endl;
		}
	}                
	return 0;
}
