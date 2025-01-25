#include<bits/stdc++.h>
using namespace std;
int n,ans;
long long a[50005];
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n+1);
	//for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	int mid=n/2;
	if(n%2==0)
	{
		for(int i=mid;i>=1;i--)
		{
			if(a[i]*2<=a[i+mid])ans++;
		}
	}
	else
	{
		for(int i=mid;i>=1;i--)
		{
			if(a[i]*2<=a[i+mid+1])ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
//2 2 4 5 6 7 8 9
