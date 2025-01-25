#include<bits/stdc++.h>
using namespace std;
int n;
int a[405][405];
long long maxans=-1e18;
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	//cout<<maxans<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-1;j++)
		{
			for(int k=1;k<=min(n-i,n-j);k++)
			{
				long long ans=0;
				for(int w=0;w<=k;w++)
				{
					//cout<<a[i+w][j+w]<<" ";
					ans=ans+a[i+w][j+w]-a[i+w][j+k-w];
				}
				//cout<<ans<<" ";
				/*for(int w=0;w<=k;w++)
				{
					cout<<a[i+w][j+k-w]<<" ";
					ans2=ans2+a[i+w][j+1-w]; 
					//cout<<ans2<<" ";
				}
				cout<<ans2<<" ";*/
				maxans=max(maxans,ans);
				//cout<<maxans<<endl;
			}
		}
	}
	cout<<maxans<<endl;
	return 0;
 } 
