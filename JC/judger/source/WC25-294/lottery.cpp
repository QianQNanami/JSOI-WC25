#include<bits/stdc++.h>
using namespace std;
bool sh(int a)
{
	if(a==1||a==0)
		return 0;
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int m,n,ans=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(sh(i)==1)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
