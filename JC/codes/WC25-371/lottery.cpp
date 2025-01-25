#include<bits/stdc++.h>
using namespace std;
int m,n,ans=0,g=1;
int main()
{
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j!=1 && j!=i && i!=1)
			{
				if(i%j==0)
				{
					g=0;
					break;
				}
			}
		}
		if(g)
		{
			ans++;
		}
		g=1;
	}
	cout<<ans;
	return 0;
}
