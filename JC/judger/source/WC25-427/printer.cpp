#include<bits/stdc++.h>
using namespace std;
int a[20005];
int main()
{
	int n,t,sum=0,head=1;
	cin>>n>>t;
	int p=t+1,back=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	bool flag=1;
	for(int j=0;j<n;j++)
	{
		flag=1;
		for(int i=2;i<=n;i++)
		{
			if(a[i]>a[head])
			{
				flag=0;
				if(p==head)
				{
					p=back+1;
				}				
				a[++back]=a[head++];
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	cout<<p<<" "<<head<<endl;
	if(p==head)
	{
		cout<<"1";
		return 0;
	}	
	while(1)
	{
		head++;
		sum+=1;
		if(p==head)
		{
			break;
		}
		cout<<"1"<<endl;
	}
	cout<<sum+1;
	return 0;
}

