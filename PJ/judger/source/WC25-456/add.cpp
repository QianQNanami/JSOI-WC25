#include<bits/stdc++.h>
using namespace std;
int a[100010],s[100010];
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
		s[i]+=s[i-1]+a[i];
	}
	int m;
	cin>>m;
	for(int i=1; i<=m; i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
}
