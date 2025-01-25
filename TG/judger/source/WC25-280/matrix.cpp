#include <bits/stdc++.h>
using namespace std;

int n,ans=INT_MIN;
int s1[410][410],s2[410][410],s3[410][410];

int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int x;
			cin>>x;
			if(j>=i)
			{
				s1[j-i+1][i]=s1[j-i+1][i-1]+x;	
			} 
			else{
				s2[i-j+1][j]=s2[i-j+1][j-1]+x;
			}
			s3[i+j-1][i]=s3[i+j-1][i-1]+x;
		} 
	}
	/*
	for(int i=1;i<=n+1;i++)
	{
		cout<<s1[i][n-i+1]<<" "<<s2[i][n-i+1]<<" "<<s3[i][i]<<endl;;
	}
	*/
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int w=min(n-j,n-i);
			for(int k=0;k<=w;k++)
			{
				int ii=i+k,jj=j+k,y=0;
				if(j>=i)
				{
					y=s1[j-i+1][ii]-s1[j-i+1][i-1]-(s3[ii+j-1][ii]-s3[ii+j-1][i-1]);
				}
				else
				{
					y=s2[i-j+1][jj]-s2[i-j+1][j-1]-(s3[ii+j-1][ii]-s3[ii+j-1][i-1]);
				}
				//cout<<y<<endl;
				ans=max(ans,y);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}



