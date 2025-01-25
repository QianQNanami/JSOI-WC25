#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;
using ll=long long;
struct node
{
	ll v,c;
	bool flag;
}a[N];
bool cmp(node a,node b)
{
	return a.v>b.v;
}
ll ans;
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i].v);
		a[i].c=a[i].v/2;
	}
	sort(a+1,a+1+n,cmp);
	int pos;
	for(int i=1;i<=n;i++)
	{
		if(a[i].v<=a[1].c)
		{
			pos=i;
			break;
		}
	}
	ll l=1,r=pos;
	while(l<=r&&r<=n)
	{
		if(a[l].c>=a[r].v)ans+=1,l++,r++;
		else l++;
	}
	printf("%lld\n",ans);
	return 0;
}
