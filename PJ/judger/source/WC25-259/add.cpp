#include<bits/stdc++.h>
using namespace std;
long long a[100010]{};
long long sum[100010]{};
int main()
{
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++)
	{
		sum[i]=sum[i-1]+a[i];
	}
	long long m;
	cin>>m;
	while(m--)
	{
		long long l,r;
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl;
	}
	return 0;
}
