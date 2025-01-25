#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,a[105],n,i,b=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[i+1]) swap(a[i],a[i+1]);
	}
	for(i=2;i<=n;i++)
	{
		x=i;
		while(x!=1)
		{
			b+=a[x];
			x--; 	
		}
			
	}
	cout<<b;
	return 0;
}
