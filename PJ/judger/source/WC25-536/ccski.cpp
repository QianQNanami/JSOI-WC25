#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,maxnn=9999,maxn=9999;
	int a[1001][1001];
	bool bl[1001][10001];
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}	
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=2;j<=m;j++)
		{
			cin>>bl[i][j];
			if(bl[i][j]==1)
			{
				if(i==1&&j==1)
				{
					maxn=min(maxn,max(a[i+1][j],a[i][j+1]));
				}
				else if(i==1&&j==n)
				{
					maxn=min(maxn,max(a[i+1][j],a[i][j-1]));
				}
				else if(i==m&&j==1)
				{
					maxn=min(maxn,max(a[i-1][j],a[i][j+1]));
				}
				else if(i==m&&j==n)
				{
					maxn=min(maxn,max(a[i-1][j],a[i][j-1]));
				}
				else
				{
					maxn=min(maxn,max(a[i-1][j],a[i][j+1],max(a[i+1][j],a[i][j-1])));
				}
				maxn=max(maxnn,maxn-a[i][j]);
			}
		}
	}
	cout<<maxnn;
	return 0;
}
