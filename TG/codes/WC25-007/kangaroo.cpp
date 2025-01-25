#include <bits/stdc++.h>
using namespace std;
int n;
int a[50010];
int find(int s)
{
	int l=1,r=n;
	int best=-1;
	while (l<=r)
	{
		int mid=(l+r)/2;
		if (a[mid]<=s)
		{
			best=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	if (a[best]==-1)
	{
		return -1;
	}
	return best;
}
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n);
	int ans=0;
	for (int i=n;i>=1;i--)
	{
		if (a[i]==-1)
		{
			continue;
		}
		int f=find(a[i]/2);
		if (f!=-1)
		{
			a[f]=-1;
			ans++;
			sort(a+1,a+1+n);
		}
	}
	printf("%d\n",ans);
	return 0;
}
