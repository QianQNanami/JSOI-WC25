#include <bits/stdc++.h>
using namespace std;
int n,sum;
int a[50005];
bool vis[50005];
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	memset(vis,0,sizeof vis);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		vis[i]=true;
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--)
	{
		if(2*a[i]<=a[n]&&vis[i]==true)
		{
			int j=n;
			while(j>i)
			{
				if(2*a[i]<=a[j]&&vis[j]==true)
				{
					vis[i]=false;
					vis[j]=false;
					sum++;
				}
				j--;
			}
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
