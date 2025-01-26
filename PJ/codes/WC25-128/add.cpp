#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5;
int n,a[N+5],m;
signed main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i],a[i]+=a[i-1];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl;
	}
	return 0;
}

