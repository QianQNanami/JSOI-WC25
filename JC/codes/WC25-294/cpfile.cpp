#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	int t[n];
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
	}
	for(int i=0;i<=n;i++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(t[i]>t[i+1])
			{
				int c;
				c=t[i];
				t[i]=t[i+1];
				t[i+1]=c;
			}
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		ans+=t[i]*(n-i-1);
		
	}
	cout<<ans<<endl;
	return 0;
}
