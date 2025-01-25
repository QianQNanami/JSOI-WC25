#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,ans=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				ans++;
				break;
			}
		}
	}
	cout<<n-m-ans;
}
