#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[405][405];
int x[405][405],y[405][405],ans=-INT_MAX;
signed main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			x[i][j]=x[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			y[i][j]=y[i-1][j+1]+a[i][j];
		}
	}
	for(int len=2;len<=n;len++)
	{
		for(int i=1;i<=n-len+1;i++)
		{
			for(int j=len;j<=n;j++)
			{
				ans=max(ans,(x[i+len-1][j]-x[i-1][j-len])-(y[i+len-1][j-len+1]-y[i+1][j+len]));
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
