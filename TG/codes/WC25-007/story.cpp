#include <bits/stdc++.h>
using namespace std;
int n,k,m;
int a[50010];
bool judge(int cnt[])
{
	for (int i=1;i<=k;i++)
	{
		if (cnt[i]==0)
		{
			return false;
		}
	}
	return true;
}
int ask()
{
	int cnt[33];
	int l=1,r=1;
	int ans=1e9;
	while (r<=n)
	{
		while (r<=n && !judge(cnt))
		{
			cnt[a[r]]++;
			r++;
		}
		bool f=false;
		while (l<=r && judge(cnt))
		{
			f=true;
			cnt[a[l]]--;
			l++;
		}
		if (f) ans=min(ans,r-l+1);
	}
	if (ans==1e9)
	{
		return -1;
	}
	return ans;
}
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%d%d%d",&n,&k,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	while (m--)
	{
		int op;
		scanf("%d",&op);
		if (op==1)
		{
			int p,v;
			scanf("%d%d",&p,&v);
			a[p]=v;
		}
		else
		{
			printf("%d\n",ask());
		}
	}
	return 0;
}
