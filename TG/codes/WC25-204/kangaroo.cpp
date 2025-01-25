#include<bits/stdc++.h>
using namespace std;
int n,a[100005],f[100005],ans=0;
bool cmp(int a,int b)
{
	return a>b;
}
void find(int x)
{
	int l=x,r=n;
	while(l<r)
	{
		int mid=(l+r)/2;
		if(a[mid]<=a[x]/2&&f[mid]==0)
		{
			r=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	if(a[r]<=a[x]/2&&f[r]==0)
	{
		ans++,f[r]=1;
		//cout<<r<<endl;
	}
}
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	//for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	//cout<<endl; 
	for(int i=1;i<=n;i++)
	{
		if(!f[i]) find(i);
	}
	cout<<ans<<endl;
	return 0;
}
