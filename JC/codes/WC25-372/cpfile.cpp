#include<bits/stdc++.h>
using namespace std;
int a[1010],n,sum=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n-1;i++)
	{
		sum+=a[i]*(n-i);
		cout<<sum<<endl;
	}
	cout<<sum;
}
