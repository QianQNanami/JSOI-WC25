#include <bits/stdc++.h>
using namespace std;
int n,w[50005],cnt;
bool vis[50005];
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&w[i]);
	sort(w+1,w+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		if(vis[i])continue;
		int l=i+1,r=n;
		while(l<r)
		{
			int mid=(l+r)>>1;
			if(w[mid]<=w[i]/2&&!vis[mid])
				r=mid;
			else  l=mid+1; 
		}
		if(w[r]<=w[i]/2&&!vis[r])
			vis[r]=true,vis[i]=true,cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
