#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n,m;
	cin>>n;
	int sum=0;
	int a[10005];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int l,r;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			sum=sum+a[i];
		}
		a[i]=sum;
		sum=0;
	}
    for(int i=1;i<=m;i++)
    {
    	cout<<a[i]<<"\n";
	}
    return 0;
}
