#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	int ans=0;
	cin>>n;
	int a[n];
	int b[100000]={0};
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		b[a[i]]+=1;
	}
	int maxn=0;
	for(int i=0;i<n;i++)
	{
		if(b[a[i]]>=1)
		{
			if(i>maxn)maxn=i;
		}
	}
	for(int i=1;i<=maxn;i++)
	{
		if(b[i]>=1)
		{
			i*=(n-i);
			ans+=i;
		}
			
	}
	cout<<ans;
	return 0;
}
