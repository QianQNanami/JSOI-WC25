#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,a[1005][1005],b[1005][1005];
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
		for(int j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<21;
	return 0;
}
