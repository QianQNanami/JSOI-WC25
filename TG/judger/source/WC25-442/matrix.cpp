#include<bits/stdc++.h>
using namespace std;
int sum[401][401][2];

int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n,ans=INT_MIN;
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		int x;
		cin>>x;
		sum[i][j][0]=sum[i-1][j-1][0]+x;
		sum[i][j][1]=sum[i-1][j+1][1]+x;
	}
	//i,j->k,l
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for(int k=1;k+i<=n&&k+j<=n;k++)
				{
					ans=max(ans,(sum[i+k][k+j][0]-sum[i-1][j-1][0])-(sum[i+k][j][1]-sum[i-1][k+j+1][1]));
				}
	cout<<ans;
	return 0;
}

