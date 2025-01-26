#include<cstdio>
using namespace std;
int n,m;
long long a[100001],sum[100001],ans[100001];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(int i=1;i<=n;i++) sum[i]=sum[i-1]+a[i];
	scanf("%d",&m);
	for(int i=1;i<=m;i++) 
	{
		int l,r;
		scanf("%d%d",&l,&r);
		ans[i]=sum[r]-sum[l-1];
	}
	for(int i=1;i<=m;i++) printf("%lld\n",ans[i]);
	return 0;
}
