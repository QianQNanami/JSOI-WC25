#include<bits/stdc++.h>
using namespace std;
const int N=405;
int n;
int a[N][N];
int sum1[N][N],sum2[N][N];
int ans=-0x7f7f7f7f;

int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			sum1[i][j]=sum1[i-1][j-1]+a[i][j],
			sum2[i][j]=sum2[i-1][j+1]+a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for(int k=2;k<=min(i,j);k++)
				ans=max(ans,sum1[i][j]-sum1[i-k][j-k]-sum2[i][j-k+1]+sum2[i-k][j+1]);
	cout<<ans<<endl;
	return 0;
}
