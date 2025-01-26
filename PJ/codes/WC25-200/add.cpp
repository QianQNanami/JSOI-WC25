#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long a[100005],l[100005],s[100005],r[100005];
int main()
{
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		cin >> a[i];
		s[i]=s[i-1]+a[i];
	}
	cin >> m;
	for(int i=1; i<=m; i++) 
		cin >> l[i] >> r[i];
    for(int i=1; i<=m; i++)
    cout << s[r[i]]-s[l[i]]+a[l[i]]<<endl;
	return 0;
}
