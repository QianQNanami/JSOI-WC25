#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m[100002];
	int a[100002],k,j;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		m[i]=a[1];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j]<m[i])
			{
				if(a[j]==m[i-1])
				{
					int a;
				}
				else
				{
					m[i]=a[j];
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		k=n;
		k--;
		j=j+k*m[i];
	}
	cout<<j;
	return 0;
}
