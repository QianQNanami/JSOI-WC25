#include <bits/stdc++.h>
using namespace std;
int n,man;
int a[405][405];
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
	man=-0x3f3f3f3f;
	for(int k=2;k<=n;k++)
	{
		for(int i=1;i<=n-k+1;i++)
		{
			for(int s=1;s<=n-k+1;s++)
			{
				int j=s+k-1;
				int sum=0;
				for(int l=0;l<k;l++)
				{
					sum+=a[i+l][s+l]-a[i+l][j-l];
					cout<<sum<<"\n";
				}
				man=max(man,sum);
			 } 
		}
	}
	cout<<man;
	fclose(stdin);
	fclose(stdout);	
	return 0;
} 
