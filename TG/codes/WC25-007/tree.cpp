#include <bits/stdc++.h>
using namespace std;
int n;
int v[100010];
int fa[100010];
int ch[100010];
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%d",&n);
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		scanf("%d%d",&v[i],&fa[i]);
		ch[fa[i]]=i;
		sum+=v[i];
	}
	if (sum%3!=0)
	{
		printf("0");
		return 0;
	}
	sum/=3;
	int s=0;
	int now=0;
	while (s<=sum)
	{
		now=ch[now];
		s+=v[now];
	}
	s-=v[now];
	if (s!=sum)
	{
		printf("0");
		return 0;
	}
	for (int i=1;i<=n;i++)
	{
		if (ch[i]==0)
		{
			now=i;
			break;
		}
	}
	fa[100001]=now;
	now=100001;
	s=0;
	while (s<=sum)
	{
		now=fa[now];
		s+=v[now];
	}
	s-=v[now];
	if (s!=sum)
	{
		printf("0");
	}
	else
	{
		printf("1");
	}
	return 0;
}
