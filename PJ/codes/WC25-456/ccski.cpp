#include<bits/stdc++.h>
using namespace std;
int a[505][505],b[505][505];
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>b[i][j];
		}
	}
	return 0;
}
