#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[401][401],ans=-1000,s=0;
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(ll i=2;i<=n;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			for(int k=0;k<=n-i;k++)
			{
				s=0;
				for(int l=1;l<=i;l++)
				{
					s+=a[j+l][k+l]-a[j+l][k+i-l+1];
				 } 
				 ans=max(s,ans);
			}
		}
	}
	cout<<ans;
	return 0;
}

