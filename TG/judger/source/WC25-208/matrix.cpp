#include<bits/stdc++.h>
using namespace std;
int a[405][405];
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int ans=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int l=i+1,r=j+1;r<=n&&l<=n;r++,l++)
			{
				int sum1=0,sum2=0;
				for(int p=i,q=j,y=r;p<=l&&q<=r&&y>=j;p++,q++,y--)
				{
					sum1+=a[p][q];
					sum2+=a[p][y];
				}
				ans=max(ans,sum1-sum2);
			}
		}
	}
	printf("%d\n",ans);
} 
