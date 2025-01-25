#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n,a[405][405],ans=-0x3f3f3f3f;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	for(int k=2;k<=n;k++)
		for(int x=1;x+k-1<=n;x++)
			for(int y=1;y+k-1<=n;y++)
			{
				int sum=0;
				for(int i=1;i<=k;i++)
					sum=sum+a[x+i-1][y+i-1]-a[x+i-1][k-i+1+y-1];
				ans=max(ans,sum);
			}
	printf("%d\n",ans);
	return 0;
}
