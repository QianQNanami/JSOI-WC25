#include<bits/stdc++.h>
using namespace std;
const long long N=100005;
long long n,m,a[N],ans[N];
int main()
{
	int x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		for(int j=x;j<=y;j++)
			ans[i]+=a[j];
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<endl;
	return 0;
}
