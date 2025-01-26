#include<bits/stdc++.h>
using namespace std;
int dp[1010][28];
int main()
{
	int t;
	cin>>t;
	int x[t+1];
	vector<vector<int> > v(t+1);
	for(int i=1;i<=t;i++)
	{
		cin>>x[i];
		v[i].resize(x[i]+1);
		for(int j=1;j<=x[i];j++)
		{
			cin>>v[i][j];
		}
	}
	for(int i=1;i<=x[1];i++)
	{
		dp[1][i]=1;
	}
	int you=0;
	int d;
	for(int i=2;i<=t;i++)
	{
		
		if(v[i][x[i]]<=26)
		{
			d=INT_MAX;
			for(int j=1;j<=x[i];j++)
			{
				dp[i][j]=INT_MAX;
				for(int k=1;k<=x[i-1];k++)
				{
					if(k-4<=1&&k+4>=x[i])
					{
						if((v[i-1][k]-v[i][j])*(v[i-1][k]-v[i][j])<d)
						{
							d=(v[i-1][k]-v[i][j])*(v[i-1][k]-v[i][j]);
							//cout<<d<<endl;
						}
						if(dp[i-1][k]+d<dp[i][j])
						{
							dp[i][j]=dp[i-1][k]+d;
						}
					}
				}
				if(dp[i][j]==0||dp[i][j]==INT_MIN)
				{
					dp[i][j]=1;
				}
			}
		}
		else if(v[i][x[i]]>26)
		{
			if(you==0)
			{
				for(int j=1;j<=x[i];j++)
				{
					dp[i][j]=INT_MAX;
					for(int k=1;k<=x[i-1];k++)
					{
						if(k-4<=1&&k+4>=x[i])
						{
							if(dp[i][k]+1<dp[i][j])
							{
								dp[i][j]=dp[i][k]+1;
								//cout<<dp[i][k]+1<<endl;
							}
							//cout<<x[i]<<endl;
						}
					}
					if(dp[i][j]==INT_MAX||dp[i][j]==INT_MIN)
					{
						dp[i][j]=1+1;
					}
				}
			}
		}
		
	}
	cout<<dp[t][x[t]];
}
