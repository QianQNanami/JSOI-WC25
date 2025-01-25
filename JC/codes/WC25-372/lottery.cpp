#include<bits/stdc++.h>
using namespace std;
int n,m,sum=0;
bool f(int x)
{
	if(x==1) return false;
	for(int i=2;i<x;i++)
	{
		if(x%i==0) return false;
	}
	return true;
}
int main()
{
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		sum+=f(i);
	}
	cout<<sum;
}

