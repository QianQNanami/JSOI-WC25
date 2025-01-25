#include<bits/stdc++.h>
using namespace std;
int ss(int a)
{
	for(int i=2;i<a;i++)
	{
		if(a!=2)
		{
		
		if(a%i==0)
		{
			return false;
		}
		}
	}
	return true;
}
int main()
{
	int cnt=0;
	int m,n;
	cin>>m>>n;
	if(m!=1)
	{
	
	for(int i=m;i<=n;i++)
	{
		if(ss(i)) cnt++;
	}
	}
	else
	{
	for(int i=m;i<=n;i++)
	{
		if(ss(i)) cnt++;
		
	}
	cnt--;
	}
	cout<<cnt;
}
