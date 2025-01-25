#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[50004];
bool judge(int m)
{
	bool re=1;
	for(int i=1;i<=m;i++)
	{
		if(a[i]*2>a[n-m+i])re=0;
	}
	return re;
}
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	int l=0,r=n/2,mid,ans=1;
	mid=(l+n)/2;
	while(l<r)
	{
		if(judge(mid)){
			l=mid+1;
			mid=(l+r)/2;
		}
		else {
			r=mid-1;
			mid=(l+r)/2;
		}
	}
	cout<<mid;
}
