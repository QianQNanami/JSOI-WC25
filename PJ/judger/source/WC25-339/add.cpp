#include <bits/stdc++.h>
using namespace std;
int n,m,l,r;
long long a[100010],s[100010];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		s[i]=s[i-1]+a[i];
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&l,&r);
		printf("%lld\n",s[r]-s[l-1]);
	}
	return 0;
}
