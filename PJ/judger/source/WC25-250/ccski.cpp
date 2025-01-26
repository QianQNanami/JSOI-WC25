#include<bits/stdc++.h>
using namespace std;
int m,n;
long long ans=INT_MIN;
long long mp[505][505],cha[505][505];
bool point[505][505];

int main()
{
	cin>>m>>n;
	for(int i=0;i<=m+1;i++)
	{
		mp[i][0]=9999999999;
		mp[i][n+1]=9999999999;
	}
	for(int i=0;i<=n+1;i++)
	{
		mp[0][i]=9999999999;
		mp[m+1][i]=9999999999;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>mp[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>point[i][j];
			if(point[i][j])
			{
				cha[i][j]=min({abs(mp[i+1][j]-mp[i][j]),abs(mp[i-1][j]-cha[i][j]),abs(mp[i][j+1]-mp[i][j]),abs(mp[i][j-1]-mp[i][j])});
				ans=max(ans,cha[i][j]);
			}
		}
	}
	cout<<ans;
	return 0;
}

