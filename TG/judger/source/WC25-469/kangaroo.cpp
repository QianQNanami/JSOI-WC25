#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	int n,a[50005],ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	for(int i=n/2;i>=1;i--)
		for(int j=i+1;j<=n;j++)
			if(a[i]*2<=a[j]&&a[i]&&a[j])
			{
				a[i]=a[j]=0;
				ans++;
			}
	printf("%d\n",ans);
	return 0;
}
