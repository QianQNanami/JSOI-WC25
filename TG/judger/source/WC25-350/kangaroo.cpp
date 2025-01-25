#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000100];
bool ins[1000100]={false};
int ans=0;
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		ins[i]=true;
	}
	for(int i=n;i>=1;i--)
	{
		if(ins[i]=false)
		continue;
		else
		{
		for(int j=i-1;j>=1;j--)
		{
			if(ins[j]!=false&&a[j]*2<=a[i])
			{
				ans++;
				ins[j]=false;
				break;
			}
		}
		}
	}
	cout<<ans;
	return 0;
}
