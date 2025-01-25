#include<bits/stdc++.h>
using namespace std;

int n;
int a[50009];
int ans;
int cnt=1;

int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	int mid=n/2;
	while(mid!=n)
	{
		if((a[cnt])*2<=a[mid])
		{
			ans++;
			cnt++;
			mid++;
		}
		else mid++;
	}
	printf("%d",ans);
	fclose(stdin);
    fclose(stdout);
	return 0;
}

