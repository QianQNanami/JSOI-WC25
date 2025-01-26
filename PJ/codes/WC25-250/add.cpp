#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int n,m,a[N],l,r;
int sum[N];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",(sum[r]-sum[l-1]));
	}
	return 0;
}

