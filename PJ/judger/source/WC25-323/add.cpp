#include<bits/stdc++.h>
using namespace std;

long long n,m;
long long x,y;
long long a[114514];
long long b[114514];

int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	cin>>m;
	for(long long i=1;i<=m;i++)
	{
		cin>>x>>y;
		cout<<b[y]-b[x-1]<<endl;
	}
	return 0;
}
