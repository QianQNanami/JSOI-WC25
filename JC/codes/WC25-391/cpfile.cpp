#include<bits/stdc++.h>
using namespace std;
long long n,a[11000],s;

void pmh()
{
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
		
	}
}
	
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	pmh();
	long long m=n; 
	for(int i=1;i<=m;i++)
	{
		n--;
		s+=a[i]*n;
	}
	cout<<s;
	return 0;
 } 
