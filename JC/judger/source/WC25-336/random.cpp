#include<bits/stdc++.h>
using namespace std;
int a[20005];
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	while(m--)
	{
		int t;
		cin>>t;
		if(t==1)
		{
			int x,y;
			cin>>x>>y;
			for(int i=0;i<n;i++)
				if(a[i]==x)
				{
					for(int j=i+1;j<n;j++)
					{
						a[j+1]=a[j];
					}
					a[i+1]=y;
					break;
				}		
		}
		else
		{
			int x;
			cin>>x;
			for(int i=0;i<n;i++)
			{
				if(a[i]==x)
					for(int j=i;j<=n;j++)
						a[j]=a[j+1];
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;	
	return 0;
}
