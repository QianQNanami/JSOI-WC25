#include<bits/stdc++.h>
using namespace std;
int main()
{
	int j,i,ans=0,n,m;
	cin>>n>>m;
	for(i=n;i<=m;i++)
	{
		for(j=n;j<m;j++)
		{
			if(n%j!=0) ans++;
		}	
	}
	cout<<ans;
	return 0;
}
