#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000][1000];
int sum[1000][1000];
int summ[1000][1000];

int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			sum[i][j]=sum[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>0;j--)
		{
			summ[i][j]=summ[i-1][j+1]+a[i][j];
		}
	}
	int ans=0x80000000;
	for(int i=2;i<=n;i++) // bian chang
	{
		// zuo shang :(x,y)
		// you xia   :(x+i-1,y+i-1)
		int xx,yy;
		for(int x=1;x+i-1<=n;x++)
		{
			for(int y=1;y+i-1<=n;y++)
			{
				xx=x+i-1,yy=y+i-1;
				ans=max(ans,(sum[xx][yy]-sum[x-1][y-1])-(summ[xx][y]-summ[x-1][yy+1]));
			}
		}
	}
	
	cout<<ans;
	return 0;
}
