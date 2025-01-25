#include <bits/stdc++.h>
using namespace std;

const int N=5e4+10;
int n,ans;
int a[N];
bool f[N];

int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangeroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n;i;i--)
	{
		if(!f[i])
		{
			for(int j=i-1;j;j--)
			{
				if(!f[j]&&a[i]>=a[j]*2)
				{
					f[i]=f[j]=true;
					break;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
		if(f[i])
			ans++;	
	cout<<ans/2;
	return 0;
}

