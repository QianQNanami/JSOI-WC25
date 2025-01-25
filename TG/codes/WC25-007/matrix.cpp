#include <bits/stdc++.h>
using namespace std;
int n;
int a[4010][4010];
int cnt[4010][4010],cnt2[4010][4010];
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=n;i>=1;i--)
	{
		for (int j=1;j<=n;j++)
		{
			cnt[i][j]=cnt[i+1][j+1]+a[i][j];
		}
	}
	for (int i=n;i>=1;i--)
	{
		for (int j=1;j<=n;j++)
		{
			cnt2[i][j]=cnt2[i+1][j-1]+a[i][j];
		}
	}
	int mx=-1e9;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			for (int len=1;i+len<=n && j+len<=n;len++)
			{
				mx=max(mx,(cnt[i][j]-cnt[i+len+1][i+len+1])-(cnt2[i][j+len]-cnt2[i+len+1][j-1]));
			}
		}
	}
	printf("%d\n",mx);
	return 0;
}
