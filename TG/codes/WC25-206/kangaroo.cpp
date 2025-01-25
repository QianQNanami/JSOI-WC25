#include <bits/stdc++.h>
using namespace std;

int n,a[50003],ans,f,lst;
bool b[50003];


int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",a+i);
	}
	sort(a+1,a+n+1);
	f=n;
	for(int i=n;i && !b[i] && f>1;i--)
	{
		if((a[i]>>1)>a[f-1])
		{
			lst=f-1;
		}
		else
		{
			lst=upper_bound(a+1,a+f,a[i]>>1)-a-1;
		}
		if(lst<1 || lst>=f)break;
		ans++,b[lst]=true;
		f=lst;
	}
	printf("%d\n",ans);
	return 0;
} 
