#include<bits/stdc++.h>
using namespace std;
int n,a[1005],ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<n;i++)
		for(int j=1;j<=i;j++)
			ans+=a[j];
	cout<<ans;
	return 0;
}
