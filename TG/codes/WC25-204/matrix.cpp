#include<bits/stdc++.h>
using namespace std;
int n,a[405][405],b[1005][1005],c[1005][1005];
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int now=1,f=0;
	for(int i=1;i<=2*n-1;i++)
	{
		for(int j=1;j<=now;j++)
		{
			if(!f)
			{
				int s=n-now;
				b[i][j]=b[i][j-1]+a[j][j+s];
			}
			else
			{
				int s=n-now;
				b[i][j]=b[i][j-1]+a[j+s][j];
			}
		}
		if(now==n) f=1;
		if(f) now--;
		else now++;
	}
	for(int j=1;j<=n;j++)
	{
		c[j][1]=a[1][j];
	}
	for(int j=2;j<=n;j++)
	{
		c[j+n-1][1]=a[j][n];
	}
	now=2,f=0;
	for(int i=2;i<=2*n-1;i++)
	{
		int dx,dy;
		if(i<=n) dx=1,dy=i;
		else dx=i-n+1,dy=n;
		for(int j=2;j<=now;j++)
		{
			dx++;
			dy--;
			c[i][j]=c[i][j-1]+a[dx][dy];
		}
		if(now==n-1) f=1;
		if(f) now--;
		else now++;
	}
	int ans=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				int x,y;
				if(i>=j)
				{
					x=b[j-i+n][k]-b[j-i+n][j]+a[i][j];
				}
				else
				{
					x=b[n-j+i][i+k-j-1]-b[n-j+i][i-1]+a[i][j];
				}
				if(k-i<=0)
				{
					y=c[i-k+1][k-j+n-k+1]-c[i-k+1][n-k+1]+a[i][k];
				}
				else
				{
					y=c[n-k+i][i+k-j]-c[n-k+i][i]+a[i][k];
				}
				//cout<<i<<" "<<j<<" "<<k<<"   "<<x<<" "<<y<<endl;
				ans=max(ans,x-y);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
