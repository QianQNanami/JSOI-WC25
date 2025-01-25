#include<bits/stdc++.h>
using namespace std;

int pan(int x)
{
	if(x==1)
	{
		return false;
	}
	for(int i=2;i<x/2+1;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int m,n;
	cin>>m>>n;
	int ans=0;
	for(int i=m;i<=n;i++)
	{
		if(pan(i)==1)
		{
			ans+=1;
		}
	}
	cout<<ans;
	return 0;
}
