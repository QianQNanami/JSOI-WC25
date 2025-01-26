#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("add.in","r",stdin);
//	freopen("add.out","w",stdout);
	unsigned n,m;
	cin>>n;
	long long a[n],ans[n];
	for(unsigned i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0)
			ans[i]=a[i];
		else
			ans[i]=ans[i-1]+a[i];
//		cout<<ans[i]<<" ";
	}
//	cout<<endl;
	cin>>m;
	for(unsigned j=0;j<m;j++)
	{
		unsigned l,r;
		cin>>l>>r;
		if(l==1)
			cout<<ans[r-1]<<endl;
		else
			cout<<ans[r-1]-ans[l-2]<<endl;
    } 
 return 0;
}
