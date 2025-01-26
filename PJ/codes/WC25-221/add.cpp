#include <bits/stdc++.h>
#define MAXN 100100
using namespace std;
int n,a[MAXN],m;
long long s[MAXN],ans[MAXN];
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	    cin>>a[i];
	for(int i=1;i<=n;++i)
	    s[i]=s[i-1]+a[i];
	cin>>m;
	for(int i=1;i<=m;++i){
		int l,r;
		cin>>l>>r;
		ans[i]=s[r]-s[l-1];
	}
	for(int i=1;i<=m;++i)
	    cout<<ans[i]<<endl;
	return 0;
}
