#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	freopen("kangroo.in","r",stdin);
	freopen("kangroo.out","w",stdout);
	ll n,a[50001],s[25000]={0},b[50001],k=0,l=1,ans1=0,ans2=0;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a+1,a+n+1);
	for(ll i=n;i>=1;i--)
	{
		if(i==s[l])
		{
		l++;
		continue; 
	}
		for(ll j=i-1;j>=1;j--)
		{
			if(a[j]<=a[i]/2)
			{
				ans1++;
				k++;
				s[k]=j;
				a[j]=1000000000;
				break;
			}
		}
	 }
	 for(int i=1;i<=k;i++)
	 {
	 	s[i]=0;
	 }
	 k=0;
	 l=1;
	 	for(ll i=1;i<=n;i++)
	{
		if(i==s[l])
		{
		l++;
		continue; 
	}
		for(ll j=i+1;j<=n;j++)
		{
			if(b[j]>=b[i]*2)
			{
				ans2++;
				k++;
				s[k]=j;
				b[j]=0;
				break;
			}
		}
	 }
	 cout<<max(ans1,ans2); 
	return 0;
}

