#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,m,sum=0;
	cin>>n;
	int a[n+1];
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	int b[2][m+1];
	for(int i=0;i<m;i++)
	{
		cin>>b[0][i];
		cin>>b[1][i];
	}
	for(int i=0;i<=m;i++)
	{
		for(int j=b[0][i];j<=b[1][i];j++)
		{
			sum+=a[j];
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}
