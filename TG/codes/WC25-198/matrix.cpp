#include<bits/stdc++.h> 
using namespace std;
int n,a[501][505],f[501][501],f1[501][501];


/*
1 2 3
4 6 8
7 12 15

*/
int dylan(int k,int i,int j)
{
	return f[i+k-1][j+k-1]-f[i-k+1][j-k+1]-f1[i+k-1][j]+f[i-1][j+k];
	//f1[i+k-1][j]-f[i-1][j+k];
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
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			f[i][j]=f[i-1][j-1]+a[i][j];
			f1[i][j]=f1[i-1][j+1]+a[i][j];
		 } 
	}
	int ans=-0x3f3f3f;
	for(int k=2;k<=n;k++)
	{
		for(int i=1;i<=n-k+1;i++)
		{
			for(int j=1;j<=n-k+1;j++)
			{
				ans=max(ans,dylan(k,i,j));
			}
		}
	}
	cout<<ans;
	return 0;
}

/*

-3 4 5
7 6 2
1 7 0







*/
