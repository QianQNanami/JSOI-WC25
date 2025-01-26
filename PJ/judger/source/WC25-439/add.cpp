#include<bits/stdc++.h>
using namespace std;
long long a[10001],b[100001][3],c[10001];
int main()
{
	long long n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=m;j++)
        {
			cin>>b[i][j];
	    }	
	}
	for(int i=1;i<=m;i++)
	{
			for( int x=b[i][1];x<=b[i][2];x++)
			{
				c[i]+=a[x];
			}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}
