#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a;
	cin>>n>>a;
	int x[n+10],liang[n+10];
	bool ys=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		liang[i]=i;
	}
	liang[a]=-1;
	int z=0;
	int ans=0;
	for(int i=1;i<=n-1;i++)
	{
		for(int i=0;i<n;i++)
		{
			cout<<liang[i]<<" ";
	//		if(liang[i]==-1)
	//			cout<<i;
		}
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<"\n\n";
		for(int i=ans+1;i<n;i++)
		{
			ys=0;
			if(x[i]>x[ans])
			{
				z=i;
				ys=1;
			}
			if(ys==1)
			{
				x[n]=x[ans];
				for(int i=0;i<=n;i++)
				{
					x[i]=x[i+1];
				}
				liang[n]=liang[ans];
				for(int i=0;i<=n;i++)
				{
					liang[i]=liang[i+1];
				}
				break;
			}
		}
		ans++;
	}
	return 0;
}
