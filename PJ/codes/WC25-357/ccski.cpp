#include <bits/stdc++.h>
using namespace std;

//bl
int m,n,Map[503][503],f[503][503],ans,a,vis[503][503];

int main()
{
	cin >>m>>n;
	for (int i = 1;i <= m;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			cin >>Map[i][j];
			f[i][j] = -1;
		}
	}
	
	for (int i = 1;i <= m;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			if (Map[i][j] > Map[i][j + 1]) a = Map[i][j] - Map[i][j + 1];
			else a = Map[i][j + 1] - Map[i][j];
			if (f[i][j + 1] == -1) f[i][j + 1] = a;
			else f[i][j + 1] = min(a,f[i][j - 1]);
			
			if (Map[i][j] > Map[i + 1][j]) a = Map[i][j] - Map[i + 1][j];
			else a = Map[i + 1][j] - Map[i][j];
			if (f[i + 1][j] == -1) f[i + 1][j] = a;
			else f[i + 1][j] = min(a,f[i + 1][j]);
			
			if (Map[i][j] > Map[i - 1][j]) a = Map[i][j] - Map[i - 1][j];
			else a = Map[i - 1][j] - Map[i][j];
			if (f[i - 1][j] == -1) f[i - 1][j] = a;
			else f[i - 1][j] = min(a,f[i - 1][j]);
			
			if (Map[i][j] > Map[i][j - 1]) a = Map[i][j] - Map[i][j - 1];
			else a = Map[i][j - 1] - Map[i][j];
			if (f[i][j - 1] == -1) f[i][j - 1] = a;
			else f[i][j - 1] = min(a,f[i][j - 1]);
		}
	}
	
	for (int i = 1;i <= m;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			cin >>vis[i][j];
			if (vis[i][j] == 1) ans = max(ans,f[i][j]);
		}
	}
	
	cout <<ans<<endl;
	return 0;
}
