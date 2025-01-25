#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
	long long n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		s=s+a[i]*(n-i);
	}
	cout<<s;
	return 0;
}
