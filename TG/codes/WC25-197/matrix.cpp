#include<bits/stdc++.h>
using namespace std;
long long n,a[510][510],ans;
bool f=0;
long long Dylan(int x,int y,int c)
{
	int sum1=0,sum2=0;
	for(int i=x;i<=x+c;i++)
	{
		sum1+=a[i][y+i-x];
	}
	for(int i=x+c;i>=x;i--)
	{
		sum2+=a[i][y+x+c-i];
	}
	return sum1-sum2;
}
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<n-1;k++)
			{
				if(i+k>n||j+k>n) break;
				long long t=Dylan(i,j,k);
				if(f==0) ans=t,f=1;
				else ans=max(ans,t);
			}
		}
	}
	cout<<ans;
	return 0;
}
