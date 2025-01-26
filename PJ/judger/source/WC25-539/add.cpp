#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	long long b;
	long long c[100001]={0};
	int d;
	int e;
	int f;
	long long g[100001];
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		c[i]=c[i-1]+b;
	}
	cin>>d;
	for(int i=1;i<=d;i++)
	{
		cin>>e;
		cin>>f;
		g[i]=c[f]-c[e-1];
	}
	for(int i=1;i<=d;i++)
	{
		cout<<g[i];
		if(i!=d)
		{
			cout<<"\n";
		}
	}
	return 0;
}
