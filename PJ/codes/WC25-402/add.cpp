#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100005],l,r;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	while(m)
	{
		long long sum=0;
		cin>>l>>r;
		m--;
		for(int i=l;i<=r;i++)
		{
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
} 
