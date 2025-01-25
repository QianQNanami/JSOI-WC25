#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000][1000];
int ans=-999999;
int Dylan(int size,int x,int y)
{
	int s,t;
	s=a[x][t];
	t=a[x][t+size-1];
	for(int i=2;i<=size;i++)
	{
		s=s+a[x+i-1][t+i-1];
	}
	for(int i=2;i<=size;i++)
	{
		t=t+a[x+i-1][t+size-i];
	}
	int c=s-t;
	return c;
}
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
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
		for(int k=1;k<=n-i+1;k++)
		{
			ans=max(ans,Dylan(i,j,k));
		}
	}	
	}
	cout<<ans;
	return 0;
}
