#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n,k;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[j]<a[i])
				swap(a[j],a[i]);
		}
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=i-1;j>=1;j--)
		{
			k+=a[j];
		}
	}
	cout<<k;
	return 0;
}
