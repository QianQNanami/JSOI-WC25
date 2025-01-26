#include<bits/stdc++.h>
using namespace std;
long long a[100000],ans[100000];
int main()
{
	freopen("add.in","r",stdin);
	freopen("add.out","w",stdout);
	long long n,m,l,r,juan=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int j=1;j<=m;j++)
	{
		juan+=1;
		cin>>l>>r;
		for(int q=l;q<=r;q++)
		{
			ans[juan]+=a[q];
		}
	}
	for(int o=1;o<=juan;o++)
	{
		cout<<ans[o]<<endl;
	}
	return 0;
}
