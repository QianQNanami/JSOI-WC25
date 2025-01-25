#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+10];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int z;
		cin>>z;
		if(z==1)
		{
			int x,y,z;
			cin>>x>>y;
			for(int i=0;i<n;i++)
			{
				if(a[i]==x)
				{
					z=i+1;
				}
			}
			for(int i=n;i>z;i--)
			{
				a[i]=a[i-1];
			}
			a[z]=y;
			n++;
		}
		else
		{
			int z,x;
			cin>>x;
			for(int i=0;i<n;i++)
			{
				if(a[i]==x)
				{
					z=i;
				}
			}
			for(int i=z;i<n;i++)
			{
				a[i]=a[i+1];
			}
			n--;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

