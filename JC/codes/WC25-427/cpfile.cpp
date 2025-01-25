#include<bits/stdc++.h>
using namespace std;
int t[105];

int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
	}
	
	for(int j=0;j<n-1;j++)
	{
		for(int i=1;i<n-j;i++)
		{
			if(t[i]<t[i-1])
			{
				swap(t[i],t[i-1]);
			}
		}		
	}
	for(int i=1;i<n;i++)
	{
		sum+=t[i-1]*(n-i);
	}
	cout<<sum;
	return 0;
}

