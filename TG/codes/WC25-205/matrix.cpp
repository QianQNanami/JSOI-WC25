#include <bits/stdc++.h>
using namespace std;
int n,num[405][405],sum[405][405],sum1[405][405],maxx;
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin >> num[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			sum[i][j]=sum[i-1][j-1]+num[i][j];
			sum1[i][j]=sum1[i-1][j+1]+num[i][j];
		}
	for(int len=2;len<=n;len++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(i+len-1>n||j+len-1>n)continue;
				maxx=max(maxx,(sum[i+len-1][j+len-1]-sum[i-1][j-1])-(sum1[i+len-1][j]-sum1[i-1][j+len+1]));
			}
				
	cout << maxx <<endl;
	return 0;
 } 

