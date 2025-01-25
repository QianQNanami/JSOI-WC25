#include <bits/stdc++.h>
using namespace std;

long long n,a[403][403],d1[403][403],d2[403][403],ans;


int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%lld",a[i]+j);
			d1[i][j]=d1[i-1][j-1]+a[i][j];
			d2[i][j]=d2[i-1][j+1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int e=1;e+max(i,j)<=n;e++)
			{
				ans=max(ans,abs(d1[i+e][j+e]-d1[i-1][j-1]-d2[i+e][j]+d2[i-1][j+e+1]));
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
} 
