#include <bits/stdc++.h>
using namespace std;
#define lnt long long
#define hnt short
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	int n;
	cin>>n;
	lnt a[n+5];
	lnt s=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	s/=n;
	sort(a+1,a+n+1);
	lnt a1[n+1],a2[n+1],a1i=0,a2i=1;
	for(int i=1;i<=n;i++)
	{
		
		if(a[i]<=s)
		{
			a1[i]=a[i];
			a1i++;
		}
		else
		{
			a2[a2i]=a[i];
			a2i++;
		}
	}
	int i=a1i,j=a2i-1;
	s=0;
	while(i&&j)
	{
		if(a2[j]>=a1[i]*2)
		{
			i--;
			j--;
			s++;
		}
		else
		{
			i--;
		}
	}
	cout<<s;
} 
