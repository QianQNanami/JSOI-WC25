#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,l,r;
	cin>>n;
	int a[n+5];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>l>>r;
		int ans=0;
		for(int i=l;i<=r;i++)
		{
			ans+=a[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
