#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>1;i--)
	{
		for(int j=1;j<i;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);	
		}
	}
	int time=0;
	for(int i=1;i<=n;i++)
		time+=(n-i)*a[i];
	cout<<time;
	return 0;
}
