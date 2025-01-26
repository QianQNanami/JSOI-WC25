#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a[100005],l,r,x[100005];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int j=1;j<=m;j++)
	{
		int ans=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			ans+=a[i];
		}
		x[j]=ans;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<x[i]<<endl;
	}
} 
