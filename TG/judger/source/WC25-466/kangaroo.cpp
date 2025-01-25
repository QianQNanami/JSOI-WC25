#include<bits/stdc++.h>
using namespace std;

int n;
int a[50009];

bool check(int k)
{
	int i=1,j=k+1;
	while(i<=k)
	{
		while(j<=n&&a[i]*2>a[j])j++;
		if(j>n)return 0;
		i++;j++;
	}
	return 1;
}

int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int l=0,r=n/2,mid;
	while(l<=r)
	{
		mid=(l+r)>>1;
		if(check(mid))l=mid+1;
		else r=mid-1;
	}
	
	cout<<l-1; 
	return 0;
}
