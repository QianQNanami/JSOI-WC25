#include<bits/stdc++.h>
using namespace std;
int a[1010],b[10010],n,t=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			b[a[i]]+=a[j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		t+=b[a[i]];
	}
	cout<<t;
	return 0;
}
